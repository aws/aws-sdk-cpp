/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/RouteStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppMesh
  {
    namespace Model
    {
      namespace RouteStatusCodeMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        RouteStatusCode GetRouteStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return RouteStatusCode::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return RouteStatusCode::INACTIVE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return RouteStatusCode::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteStatusCode>(hashCode);
          }

          return RouteStatusCode::NOT_SET;
        }

        Aws::String GetNameForRouteStatusCode(RouteStatusCode enumValue)
        {
          switch(enumValue)
          {
          case RouteStatusCode::NOT_SET:
            return {};
          case RouteStatusCode::ACTIVE:
            return "ACTIVE";
          case RouteStatusCode::INACTIVE:
            return "INACTIVE";
          case RouteStatusCode::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteStatusCodeMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
