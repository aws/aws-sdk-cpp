/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/FleetProxyRuleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace FleetProxyRuleTypeMapper
      {

        static const int DOMAIN__HASH = HashingUtils::HashString("DOMAIN");
        static const int IP_HASH = HashingUtils::HashString("IP");


        FleetProxyRuleType GetFleetProxyRuleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOMAIN__HASH)
          {
            return FleetProxyRuleType::DOMAIN_;
          }
          else if (hashCode == IP_HASH)
          {
            return FleetProxyRuleType::IP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetProxyRuleType>(hashCode);
          }

          return FleetProxyRuleType::NOT_SET;
        }

        Aws::String GetNameForFleetProxyRuleType(FleetProxyRuleType enumValue)
        {
          switch(enumValue)
          {
          case FleetProxyRuleType::NOT_SET:
            return {};
          case FleetProxyRuleType::DOMAIN_:
            return "DOMAIN";
          case FleetProxyRuleType::IP:
            return "IP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetProxyRuleTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
