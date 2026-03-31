/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gameliftstreams/model/VpcTransitConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GameLiftStreams {
namespace Model {

VpcTransitConfiguration::VpcTransitConfiguration(JsonView jsonValue) { *this = jsonValue; }

VpcTransitConfiguration& VpcTransitConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("VpcId")) {
    m_vpcId = jsonValue.GetString("VpcId");
    m_vpcIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Ipv4CidrBlocks")) {
    Aws::Utils::Array<JsonView> ipv4CidrBlocksJsonList = jsonValue.GetArray("Ipv4CidrBlocks");
    for (unsigned ipv4CidrBlocksIndex = 0; ipv4CidrBlocksIndex < ipv4CidrBlocksJsonList.GetLength(); ++ipv4CidrBlocksIndex) {
      m_ipv4CidrBlocks.push_back(ipv4CidrBlocksJsonList[ipv4CidrBlocksIndex].AsString());
    }
    m_ipv4CidrBlocksHasBeenSet = true;
  }
  return *this;
}

JsonValue VpcTransitConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_vpcIdHasBeenSet) {
    payload.WithString("VpcId", m_vpcId);
  }

  if (m_ipv4CidrBlocksHasBeenSet) {
    Aws::Utils::Array<JsonValue> ipv4CidrBlocksJsonList(m_ipv4CidrBlocks.size());
    for (unsigned ipv4CidrBlocksIndex = 0; ipv4CidrBlocksIndex < ipv4CidrBlocksJsonList.GetLength(); ++ipv4CidrBlocksIndex) {
      ipv4CidrBlocksJsonList[ipv4CidrBlocksIndex].AsString(m_ipv4CidrBlocks[ipv4CidrBlocksIndex]);
    }
    payload.WithArray("Ipv4CidrBlocks", std::move(ipv4CidrBlocksJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
