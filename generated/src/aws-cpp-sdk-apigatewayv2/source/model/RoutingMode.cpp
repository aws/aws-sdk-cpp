/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/RoutingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApiGatewayV2
  {
    namespace Model
    {
      namespace RoutingModeMapper
      {

        static const int API_MAPPING_ONLY_HASH = HashingUtils::HashString("API_MAPPING_ONLY");
        static const int ROUTING_RULE_ONLY_HASH = HashingUtils::HashString("ROUTING_RULE_ONLY");
        static const int ROUTING_RULE_THEN_API_MAPPING_HASH = HashingUtils::HashString("ROUTING_RULE_THEN_API_MAPPING");


        RoutingMode GetRoutingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == API_MAPPING_ONLY_HASH)
          {
            return RoutingMode::API_MAPPING_ONLY;
          }
          else if (hashCode == ROUTING_RULE_ONLY_HASH)
          {
            return RoutingMode::ROUTING_RULE_ONLY;
          }
          else if (hashCode == ROUTING_RULE_THEN_API_MAPPING_HASH)
          {
            return RoutingMode::ROUTING_RULE_THEN_API_MAPPING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RoutingMode>(hashCode);
          }

          return RoutingMode::NOT_SET;
        }

        Aws::String GetNameForRoutingMode(RoutingMode enumValue)
        {
          switch(enumValue)
          {
          case RoutingMode::NOT_SET:
            return {};
          case RoutingMode::API_MAPPING_ONLY:
            return "API_MAPPING_ONLY";
          case RoutingMode::ROUTING_RULE_ONLY:
            return "ROUTING_RULE_ONLY";
          case RoutingMode::ROUTING_RULE_THEN_API_MAPPING:
            return "ROUTING_RULE_THEN_API_MAPPING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RoutingModeMapper
    } // namespace Model
  } // namespace ApiGatewayV2
} // namespace Aws
