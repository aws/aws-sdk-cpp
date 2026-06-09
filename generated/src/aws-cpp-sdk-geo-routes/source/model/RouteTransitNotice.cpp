/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteTransitNotice.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteTransitNotice::RouteTransitNotice(JsonView jsonValue) { *this = jsonValue; }

RouteTransitNotice& RouteTransitNotice::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Code")) {
    m_code = RouteTransitNoticeCodeMapper::GetRouteTransitNoticeCodeForName(jsonValue.GetString("Code"));
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Impact")) {
    m_impact = RouteNoticeImpactMapper::GetRouteNoticeImpactForName(jsonValue.GetString("Impact"));
    m_impactHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTransitNotice::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithString("Code", RouteTransitNoticeCodeMapper::GetNameForRouteTransitNoticeCode(m_code));
  }

  if (m_impactHasBeenSet) {
    payload.WithString("Impact", RouteNoticeImpactMapper::GetNameForRouteNoticeImpact(m_impact));
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
