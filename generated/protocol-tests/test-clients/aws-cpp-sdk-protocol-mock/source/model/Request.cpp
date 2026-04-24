/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/protocol-mock/model/Request.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ProtocolMock {
namespace Model {

Request::Request(JsonView jsonValue) { *this = jsonValue; }

Request& Request::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("timestamp")) {
    m_timestamp = jsonValue.GetDouble("timestamp");
    m_timestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("method")) {
    m_method = jsonValue.GetString("method");
    m_methodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("body")) {
    m_body = jsonValue.GetString("body");
    m_bodyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("uri")) {
    m_uri = jsonValue.GetString("uri");
    m_uriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("host")) {
    m_host = jsonValue.GetString("host");
    m_hostHasBeenSet = true;
  }
  if (jsonValue.ValueExists("headers")) {
    Aws::Utils::Array<JsonView> headersJsonList = jsonValue.GetArray("headers");
    for (unsigned headersIndex = 0; headersIndex < headersJsonList.GetLength(); ++headersIndex) {
      m_headers.push_back(headersJsonList[headersIndex].AsObject());
    }
    m_headersHasBeenSet = true;
  }
  return *this;
}

JsonValue Request::Jsonize() const {
  JsonValue payload;

  if (m_timestampHasBeenSet) {
    payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if (m_methodHasBeenSet) {
    payload.WithString("method", m_method);
  }

  if (m_bodyHasBeenSet) {
    payload.WithString("body", m_body);
  }

  if (m_uriHasBeenSet) {
    payload.WithString("uri", m_uri);
  }

  if (m_hostHasBeenSet) {
    payload.WithString("host", m_host);
  }

  if (m_headersHasBeenSet) {
    Aws::Utils::Array<JsonValue> headersJsonList(m_headers.size());
    for (unsigned headersIndex = 0; headersIndex < headersJsonList.GetLength(); ++headersIndex) {
      headersJsonList[headersIndex].AsObject(m_headers[headersIndex].Jsonize());
    }
    payload.WithArray("headers", std::move(headersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ProtocolMock
}  // namespace Aws
