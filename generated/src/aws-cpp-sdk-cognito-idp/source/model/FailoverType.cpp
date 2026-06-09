/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/FailoverType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

FailoverType::FailoverType(JsonView jsonValue) { *this = jsonValue; }

FailoverType& FailoverType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SecondaryRegion")) {
    m_secondaryRegion = jsonValue.GetString("SecondaryRegion");
    m_secondaryRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrimaryRoute53HealthCheckId")) {
    m_primaryRoute53HealthCheckId = jsonValue.GetString("PrimaryRoute53HealthCheckId");
    m_primaryRoute53HealthCheckIdHasBeenSet = true;
  }
  return *this;
}

JsonValue FailoverType::Jsonize() const {
  JsonValue payload;

  if (m_secondaryRegionHasBeenSet) {
    payload.WithString("SecondaryRegion", m_secondaryRegion);
  }

  if (m_primaryRoute53HealthCheckIdHasBeenSet) {
    payload.WithString("PrimaryRoute53HealthCheckId", m_primaryRoute53HealthCheckId);
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
