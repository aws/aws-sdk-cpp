/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LocationService
{
namespace Model
{
  enum class RouteMatrixErrorCode
  {
    NOT_SET,
    RouteNotFound,
    RouteTooLong,
    PositionsNotFound,
    DestinationPositionNotFound,
    DeparturePositionNotFound,
    OtherValidationError
  };

namespace RouteMatrixErrorCodeMapper
{
AWS_LOCATIONSERVICE_API RouteMatrixErrorCode GetRouteMatrixErrorCodeForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForRouteMatrixErrorCode(RouteMatrixErrorCode value);
} // namespace RouteMatrixErrorCodeMapper
} // namespace Model
} // namespace LocationService
} // namespace Aws
