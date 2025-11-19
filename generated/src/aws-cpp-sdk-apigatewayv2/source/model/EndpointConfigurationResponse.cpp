/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/EndpointConfigurationResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

EndpointConfigurationResponse::EndpointConfigurationResponse(JsonView jsonValue) { *this = jsonValue; }

EndpointConfigurationResponse& EndpointConfigurationResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("certificateArn")) {
    m_certificateArn = jsonValue.GetString("certificateArn");
    m_certificateArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domainName")) {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("portalDefaultDomainName")) {
    m_portalDefaultDomainName = jsonValue.GetString("portalDefaultDomainName");
    m_portalDefaultDomainNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("portalDomainHostedZoneId")) {
    m_portalDomainHostedZoneId = jsonValue.GetString("portalDomainHostedZoneId");
    m_portalDomainHostedZoneIdHasBeenSet = true;
  }
  return *this;
}

JsonValue EndpointConfigurationResponse::Jsonize() const {
  JsonValue payload;

  if (m_certificateArnHasBeenSet) {
    payload.WithString("certificateArn", m_certificateArn);
  }

  if (m_domainNameHasBeenSet) {
    payload.WithString("domainName", m_domainName);
  }

  if (m_portalDefaultDomainNameHasBeenSet) {
    payload.WithString("portalDefaultDomainName", m_portalDefaultDomainName);
  }

  if (m_portalDomainHostedZoneIdHasBeenSet) {
    payload.WithString("portalDomainHostedZoneId", m_portalDomainHostedZoneId);
  }

  return payload;
}

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
