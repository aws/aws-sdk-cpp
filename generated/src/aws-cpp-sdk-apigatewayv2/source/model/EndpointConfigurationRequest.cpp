/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/EndpointConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

EndpointConfigurationRequest::EndpointConfigurationRequest(JsonView jsonValue) { *this = jsonValue; }

EndpointConfigurationRequest& EndpointConfigurationRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("acmManaged")) {
    m_acmManaged = jsonValue.GetObject("acmManaged");
    m_acmManagedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("none")) {
    m_none = jsonValue.GetObject("none");
    m_noneHasBeenSet = true;
  }
  return *this;
}

JsonValue EndpointConfigurationRequest::Jsonize() const {
  JsonValue payload;

  if (m_acmManagedHasBeenSet) {
    payload.WithObject("acmManaged", m_acmManaged.Jsonize());
  }

  if (m_noneHasBeenSet) {
    payload.WithObject("none", m_none.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
