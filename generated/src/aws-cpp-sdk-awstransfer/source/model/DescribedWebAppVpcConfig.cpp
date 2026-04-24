/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribedWebAppVpcConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Transfer {
namespace Model {

DescribedWebAppVpcConfig::DescribedWebAppVpcConfig(JsonView jsonValue) { *this = jsonValue; }

DescribedWebAppVpcConfig& DescribedWebAppVpcConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SubnetIds")) {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VpcId")) {
    m_vpcId = jsonValue.GetString("VpcId");
    m_vpcIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VpcEndpointId")) {
    m_vpcEndpointId = jsonValue.GetString("VpcEndpointId");
    m_vpcEndpointIdHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribedWebAppVpcConfig::Jsonize() const {
  JsonValue payload;

  if (m_subnetIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
    }
    payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));
  }

  if (m_vpcIdHasBeenSet) {
    payload.WithString("VpcId", m_vpcId);
  }

  if (m_vpcEndpointIdHasBeenSet) {
    payload.WithString("VpcEndpointId", m_vpcEndpointId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
