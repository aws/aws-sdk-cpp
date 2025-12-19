/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/MetadataConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

MetadataConfiguration::MetadataConfiguration(JsonView jsonValue) { *this = jsonValue; }

MetadataConfiguration& MetadataConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("allowedRequestHeaders")) {
    Aws::Utils::Array<JsonView> allowedRequestHeadersJsonList = jsonValue.GetArray("allowedRequestHeaders");
    for (unsigned allowedRequestHeadersIndex = 0; allowedRequestHeadersIndex < allowedRequestHeadersJsonList.GetLength();
         ++allowedRequestHeadersIndex) {
      m_allowedRequestHeaders.push_back(allowedRequestHeadersJsonList[allowedRequestHeadersIndex].AsString());
    }
    m_allowedRequestHeadersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allowedQueryParameters")) {
    Aws::Utils::Array<JsonView> allowedQueryParametersJsonList = jsonValue.GetArray("allowedQueryParameters");
    for (unsigned allowedQueryParametersIndex = 0; allowedQueryParametersIndex < allowedQueryParametersJsonList.GetLength();
         ++allowedQueryParametersIndex) {
      m_allowedQueryParameters.push_back(allowedQueryParametersJsonList[allowedQueryParametersIndex].AsString());
    }
    m_allowedQueryParametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allowedResponseHeaders")) {
    Aws::Utils::Array<JsonView> allowedResponseHeadersJsonList = jsonValue.GetArray("allowedResponseHeaders");
    for (unsigned allowedResponseHeadersIndex = 0; allowedResponseHeadersIndex < allowedResponseHeadersJsonList.GetLength();
         ++allowedResponseHeadersIndex) {
      m_allowedResponseHeaders.push_back(allowedResponseHeadersJsonList[allowedResponseHeadersIndex].AsString());
    }
    m_allowedResponseHeadersHasBeenSet = true;
  }
  return *this;
}

JsonValue MetadataConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_allowedRequestHeadersHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedRequestHeadersJsonList(m_allowedRequestHeaders.size());
    for (unsigned allowedRequestHeadersIndex = 0; allowedRequestHeadersIndex < allowedRequestHeadersJsonList.GetLength();
         ++allowedRequestHeadersIndex) {
      allowedRequestHeadersJsonList[allowedRequestHeadersIndex].AsString(m_allowedRequestHeaders[allowedRequestHeadersIndex]);
    }
    payload.WithArray("allowedRequestHeaders", std::move(allowedRequestHeadersJsonList));
  }

  if (m_allowedQueryParametersHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedQueryParametersJsonList(m_allowedQueryParameters.size());
    for (unsigned allowedQueryParametersIndex = 0; allowedQueryParametersIndex < allowedQueryParametersJsonList.GetLength();
         ++allowedQueryParametersIndex) {
      allowedQueryParametersJsonList[allowedQueryParametersIndex].AsString(m_allowedQueryParameters[allowedQueryParametersIndex]);
    }
    payload.WithArray("allowedQueryParameters", std::move(allowedQueryParametersJsonList));
  }

  if (m_allowedResponseHeadersHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedResponseHeadersJsonList(m_allowedResponseHeaders.size());
    for (unsigned allowedResponseHeadersIndex = 0; allowedResponseHeadersIndex < allowedResponseHeadersJsonList.GetLength();
         ++allowedResponseHeadersIndex) {
      allowedResponseHeadersJsonList[allowedResponseHeadersIndex].AsString(m_allowedResponseHeaders[allowedResponseHeadersIndex]);
    }
    payload.WithArray("allowedResponseHeaders", std::move(allowedResponseHeadersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
