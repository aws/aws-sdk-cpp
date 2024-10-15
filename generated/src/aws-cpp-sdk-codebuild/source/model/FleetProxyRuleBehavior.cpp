/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/FleetProxyRuleBehavior.h>
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
      namespace FleetProxyRuleBehaviorMapper
      {

        static const int ALLOW_ALL_HASH = HashingUtils::HashString("ALLOW_ALL");
        static const int DENY_ALL_HASH = HashingUtils::HashString("DENY_ALL");


        FleetProxyRuleBehavior GetFleetProxyRuleBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_ALL_HASH)
          {
            return FleetProxyRuleBehavior::ALLOW_ALL;
          }
          else if (hashCode == DENY_ALL_HASH)
          {
            return FleetProxyRuleBehavior::DENY_ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetProxyRuleBehavior>(hashCode);
          }

          return FleetProxyRuleBehavior::NOT_SET;
        }

        Aws::String GetNameForFleetProxyRuleBehavior(FleetProxyRuleBehavior enumValue)
        {
          switch(enumValue)
          {
          case FleetProxyRuleBehavior::NOT_SET:
            return {};
          case FleetProxyRuleBehavior::ALLOW_ALL:
            return "ALLOW_ALL";
          case FleetProxyRuleBehavior::DENY_ALL:
            return "DENY_ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetProxyRuleBehaviorMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
