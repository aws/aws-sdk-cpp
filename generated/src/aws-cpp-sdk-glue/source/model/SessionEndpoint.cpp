/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/SessionEndpoint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

SessionEndpoint::SessionEndpoint(JsonView jsonValue) { *this = jsonValue; }

SessionEndpoint& SessionEndpoint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Url")) {
    m_url = jsonValue.GetString("Url");
    m_urlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AuthToken")) {
    m_authToken = jsonValue.GetString("AuthToken");
    m_authTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AuthTokenExpirationTime")) {
    m_authTokenExpirationTime = jsonValue.GetDouble("AuthTokenExpirationTime");
    m_authTokenExpirationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionEndpoint::Jsonize() const {
  JsonValue payload;

  if (m_urlHasBeenSet) {
    payload.WithString("Url", m_url);
  }

  if (m_authTokenHasBeenSet) {
    payload.WithString("AuthToken", m_authToken);
  }

  if (m_authTokenExpirationTimeHasBeenSet) {
    payload.WithDouble("AuthTokenExpirationTime", m_authTokenExpirationTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
