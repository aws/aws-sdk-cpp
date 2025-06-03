/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/RoutingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace APIGateway
  {
    namespace Model
    {
      namespace RoutingModeMapper
      {

        static const int BASE_PATH_MAPPING_ONLY_HASH = HashingUtils::HashString("BASE_PATH_MAPPING_ONLY");
        static const int ROUTING_RULE_ONLY_HASH = HashingUtils::HashString("ROUTING_RULE_ONLY");
        static const int ROUTING_RULE_THEN_BASE_PATH_MAPPING_HASH = HashingUtils::HashString("ROUTING_RULE_THEN_BASE_PATH_MAPPING");


        RoutingMode GetRoutingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASE_PATH_MAPPING_ONLY_HASH)
          {
            return RoutingMode::BASE_PATH_MAPPING_ONLY;
          }
          else if (hashCode == ROUTING_RULE_ONLY_HASH)
          {
            return RoutingMode::ROUTING_RULE_ONLY;
          }
          else if (hashCode == ROUTING_RULE_THEN_BASE_PATH_MAPPING_HASH)
          {
            return RoutingMode::ROUTING_RULE_THEN_BASE_PATH_MAPPING;
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
          case RoutingMode::BASE_PATH_MAPPING_ONLY:
            return "BASE_PATH_MAPPING_ONLY";
          case RoutingMode::ROUTING_RULE_ONLY:
            return "ROUTING_RULE_ONLY";
          case RoutingMode::ROUTING_RULE_THEN_BASE_PATH_MAPPING:
            return "ROUTING_RULE_THEN_BASE_PATH_MAPPING";
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
  } // namespace APIGateway
} // namespace Aws
