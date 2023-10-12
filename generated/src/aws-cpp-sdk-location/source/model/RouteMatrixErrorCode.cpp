/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/RouteMatrixErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LocationService
  {
    namespace Model
    {
      namespace RouteMatrixErrorCodeMapper
      {

        static constexpr uint32_t RouteNotFound_HASH = ConstExprHashingUtils::HashString("RouteNotFound");
        static constexpr uint32_t RouteTooLong_HASH = ConstExprHashingUtils::HashString("RouteTooLong");
        static constexpr uint32_t PositionsNotFound_HASH = ConstExprHashingUtils::HashString("PositionsNotFound");
        static constexpr uint32_t DestinationPositionNotFound_HASH = ConstExprHashingUtils::HashString("DestinationPositionNotFound");
        static constexpr uint32_t DeparturePositionNotFound_HASH = ConstExprHashingUtils::HashString("DeparturePositionNotFound");
        static constexpr uint32_t OtherValidationError_HASH = ConstExprHashingUtils::HashString("OtherValidationError");


        RouteMatrixErrorCode GetRouteMatrixErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RouteNotFound_HASH)
          {
            return RouteMatrixErrorCode::RouteNotFound;
          }
          else if (hashCode == RouteTooLong_HASH)
          {
            return RouteMatrixErrorCode::RouteTooLong;
          }
          else if (hashCode == PositionsNotFound_HASH)
          {
            return RouteMatrixErrorCode::PositionsNotFound;
          }
          else if (hashCode == DestinationPositionNotFound_HASH)
          {
            return RouteMatrixErrorCode::DestinationPositionNotFound;
          }
          else if (hashCode == DeparturePositionNotFound_HASH)
          {
            return RouteMatrixErrorCode::DeparturePositionNotFound;
          }
          else if (hashCode == OtherValidationError_HASH)
          {
            return RouteMatrixErrorCode::OtherValidationError;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteMatrixErrorCode>(hashCode);
          }

          return RouteMatrixErrorCode::NOT_SET;
        }

        Aws::String GetNameForRouteMatrixErrorCode(RouteMatrixErrorCode enumValue)
        {
          switch(enumValue)
          {
          case RouteMatrixErrorCode::NOT_SET:
            return {};
          case RouteMatrixErrorCode::RouteNotFound:
            return "RouteNotFound";
          case RouteMatrixErrorCode::RouteTooLong:
            return "RouteTooLong";
          case RouteMatrixErrorCode::PositionsNotFound:
            return "PositionsNotFound";
          case RouteMatrixErrorCode::DestinationPositionNotFound:
            return "DestinationPositionNotFound";
          case RouteMatrixErrorCode::DeparturePositionNotFound:
            return "DeparturePositionNotFound";
          case RouteMatrixErrorCode::OtherValidationError:
            return "OtherValidationError";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteMatrixErrorCodeMapper
    } // namespace Model
  } // namespace LocationService
} // namespace Aws
