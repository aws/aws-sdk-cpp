/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/ACMManaged.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

ACMManaged::ACMManaged(JsonView jsonValue) { *this = jsonValue; }

ACMManaged& ACMManaged::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("certificateArn")) {
    m_certificateArn = jsonValue.GetString("certificateArn");
    m_certificateArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domainName")) {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }
  return *this;
}

JsonValue ACMManaged::Jsonize() const {
  JsonValue payload;

  if (m_certificateArnHasBeenSet) {
    payload.WithString("certificateArn", m_certificateArn);
  }

  if (m_domainNameHasBeenSet) {
    payload.WithString("domainName", m_domainName);
  }

  return payload;
}

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
