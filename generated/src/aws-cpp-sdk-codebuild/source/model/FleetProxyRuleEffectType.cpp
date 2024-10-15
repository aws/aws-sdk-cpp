/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/FleetProxyRuleEffectType.h>
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
      namespace FleetProxyRuleEffectTypeMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int DENY_HASH = HashingUtils::HashString("DENY");


        FleetProxyRuleEffectType GetFleetProxyRuleEffectTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return FleetProxyRuleEffectType::ALLOW;
          }
          else if (hashCode == DENY_HASH)
          {
            return FleetProxyRuleEffectType::DENY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetProxyRuleEffectType>(hashCode);
          }

          return FleetProxyRuleEffectType::NOT_SET;
        }

        Aws::String GetNameForFleetProxyRuleEffectType(FleetProxyRuleEffectType enumValue)
        {
          switch(enumValue)
          {
          case FleetProxyRuleEffectType::NOT_SET:
            return {};
          case FleetProxyRuleEffectType::ALLOW:
            return "ALLOW";
          case FleetProxyRuleEffectType::DENY:
            return "DENY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetProxyRuleEffectTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
