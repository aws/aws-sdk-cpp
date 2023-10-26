/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/DefaultGatewayRouteRewrite.h>
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
      namespace DefaultGatewayRouteRewriteMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        DefaultGatewayRouteRewrite GetDefaultGatewayRouteRewriteForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return DefaultGatewayRouteRewrite::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DefaultGatewayRouteRewrite::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DefaultGatewayRouteRewrite>(hashCode);
          }

          return DefaultGatewayRouteRewrite::NOT_SET;
        }

        Aws::String GetNameForDefaultGatewayRouteRewrite(DefaultGatewayRouteRewrite enumValue)
        {
          switch(enumValue)
          {
          case DefaultGatewayRouteRewrite::NOT_SET:
            return {};
          case DefaultGatewayRouteRewrite::ENABLED:
            return "ENABLED";
          case DefaultGatewayRouteRewrite::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DefaultGatewayRouteRewriteMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
