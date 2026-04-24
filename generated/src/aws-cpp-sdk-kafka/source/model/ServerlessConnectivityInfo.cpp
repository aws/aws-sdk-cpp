/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/ServerlessConnectivityInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

ServerlessConnectivityInfo::ServerlessConnectivityInfo(JsonView jsonValue) { *this = jsonValue; }

ServerlessConnectivityInfo& ServerlessConnectivityInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("networkType")) {
    m_networkType = NetworkTypeMapper::GetNetworkTypeForName(jsonValue.GetString("networkType"));
    m_networkTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ServerlessConnectivityInfo::Jsonize() const {
  JsonValue payload;

  if (m_networkTypeHasBeenSet) {
    payload.WithString("networkType", NetworkTypeMapper::GetNameForNetworkType(m_networkType));
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
