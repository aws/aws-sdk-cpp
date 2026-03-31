/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/BrowserEnterprisePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

BrowserEnterprisePolicy::BrowserEnterprisePolicy(JsonView jsonValue) { *this = jsonValue; }

BrowserEnterprisePolicy& BrowserEnterprisePolicy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("location")) {
    m_location = jsonValue.GetObject("location");
    m_locationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = BrowserEnterprisePolicyTypeMapper::GetBrowserEnterprisePolicyTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue BrowserEnterprisePolicy::Jsonize() const {
  JsonValue payload;

  if (m_locationHasBeenSet) {
    payload.WithObject("location", m_location.Jsonize());
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", BrowserEnterprisePolicyTypeMapper::GetNameForBrowserEnterprisePolicyType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
