/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/RoutingType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

RoutingType::RoutingType(JsonView jsonValue) { *this = jsonValue; }

RoutingType& RoutingType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Failover")) {
    m_failover = jsonValue.GetObject("Failover");
    m_failoverHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutingType::Jsonize() const {
  JsonValue payload;

  if (m_failoverHasBeenSet) {
    payload.WithObject("Failover", m_failover.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
