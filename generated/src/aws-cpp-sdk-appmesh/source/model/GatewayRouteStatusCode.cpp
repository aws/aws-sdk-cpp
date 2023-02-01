/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/GatewayRouteStatusCode.h>
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
      namespace GatewayRouteStatusCodeMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        GatewayRouteStatusCode GetGatewayRouteStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return GatewayRouteStatusCode::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return GatewayRouteStatusCode::INACTIVE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return GatewayRouteStatusCode::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GatewayRouteStatusCode>(hashCode);
          }

          return GatewayRouteStatusCode::NOT_SET;
        }

        Aws::String GetNameForGatewayRouteStatusCode(GatewayRouteStatusCode enumValue)
        {
          switch(enumValue)
          {
          case GatewayRouteStatusCode::ACTIVE:
            return "ACTIVE";
          case GatewayRouteStatusCode::INACTIVE:
            return "INACTIVE";
          case GatewayRouteStatusCode::DELETED:
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

      } // namespace GatewayRouteStatusCodeMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
