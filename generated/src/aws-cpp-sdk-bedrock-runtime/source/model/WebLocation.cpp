/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/WebLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

WebLocation::WebLocation(JsonView jsonValue) { *this = jsonValue; }

WebLocation& WebLocation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("url")) {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domain")) {
    m_domain = jsonValue.GetString("domain");
    m_domainHasBeenSet = true;
  }
  return *this;
}

JsonValue WebLocation::Jsonize() const {
  JsonValue payload;

  if (m_urlHasBeenSet) {
    payload.WithString("url", m_url);
  }

  if (m_domainHasBeenSet) {
    payload.WithString("domain", m_domain);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
