/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ProxyConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Transfer {
namespace Model {

ProxyConfig::ProxyConfig(JsonView jsonValue) { *this = jsonValue; }

ProxyConfig& ProxyConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SftpMode")) {
    m_sftpMode = ProxyModeMapper::GetProxyModeForName(jsonValue.GetString("SftpMode"));
    m_sftpModeHasBeenSet = true;
  }
  return *this;
}

JsonValue ProxyConfig::Jsonize() const {
  JsonValue payload;

  if (m_sftpModeHasBeenSet) {
    payload.WithString("SftpMode", ProxyModeMapper::GetNameForProxyMode(m_sftpMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
