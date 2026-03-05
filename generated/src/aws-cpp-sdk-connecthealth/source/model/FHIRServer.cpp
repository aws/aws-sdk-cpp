/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/FHIRServer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

FHIRServer::FHIRServer(JsonView jsonValue) { *this = jsonValue; }

FHIRServer& FHIRServer::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fhirEndpoint")) {
    m_fhirEndpoint = jsonValue.GetString("fhirEndpoint");
    m_fhirEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("oauthToken")) {
    m_oauthToken = jsonValue.GetString("oauthToken");
    m_oauthTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue FHIRServer::Jsonize() const {
  JsonValue payload;

  if (m_fhirEndpointHasBeenSet) {
    payload.WithString("fhirEndpoint", m_fhirEndpoint);
  }

  if (m_oauthTokenHasBeenSet) {
    payload.WithString("oauthToken", m_oauthToken);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
