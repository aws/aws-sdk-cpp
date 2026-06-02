/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

namespace Aws {
namespace GeoRoutes {
namespace Model {
enum class RouteTaxiNoticeCode { NOT_SET, AccuratePolylineUnavailable, Other };

namespace RouteTaxiNoticeCodeMapper {
AWS_GEOROUTES_API RouteTaxiNoticeCode GetRouteTaxiNoticeCodeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTaxiNoticeCode(RouteTaxiNoticeCode value);
}  // namespace RouteTaxiNoticeCodeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
