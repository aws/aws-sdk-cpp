/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/Serverless.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

Serverless::Serverless(JsonView jsonValue) { *this = jsonValue; }

Serverless& Serverless::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("vpcConfigs")) {
    Aws::Utils::Array<JsonView> vpcConfigsJsonList = jsonValue.GetArray("vpcConfigs");
    for (unsigned vpcConfigsIndex = 0; vpcConfigsIndex < vpcConfigsJsonList.GetLength(); ++vpcConfigsIndex) {
      m_vpcConfigs.push_back(vpcConfigsJsonList[vpcConfigsIndex].AsObject());
    }
    m_vpcConfigsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientAuthentication")) {
    m_clientAuthentication = jsonValue.GetObject("clientAuthentication");
    m_clientAuthenticationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectivityInfo")) {
    m_connectivityInfo = jsonValue.GetObject("connectivityInfo");
    m_connectivityInfoHasBeenSet = true;
  }
  return *this;
}

JsonValue Serverless::Jsonize() const {
  JsonValue payload;

  if (m_vpcConfigsHasBeenSet) {
    Aws::Utils::Array<JsonValue> vpcConfigsJsonList(m_vpcConfigs.size());
    for (unsigned vpcConfigsIndex = 0; vpcConfigsIndex < vpcConfigsJsonList.GetLength(); ++vpcConfigsIndex) {
      vpcConfigsJsonList[vpcConfigsIndex].AsObject(m_vpcConfigs[vpcConfigsIndex].Jsonize());
    }
    payload.WithArray("vpcConfigs", std::move(vpcConfigsJsonList));
  }

  if (m_clientAuthenticationHasBeenSet) {
    payload.WithObject("clientAuthentication", m_clientAuthentication.Jsonize());
  }

  if (m_connectivityInfoHasBeenSet) {
    payload.WithObject("connectivityInfo", m_connectivityInfo.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
