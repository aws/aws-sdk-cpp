/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/StopScope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SES
  {
    namespace Model
    {
      namespace StopScopeMapper
      {

        static const int RuleSet_HASH = HashingUtils::HashString("RuleSet");


        StopScope GetStopScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RuleSet_HASH)
          {
            return StopScope::RuleSet;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StopScope>(hashCode);
          }

          return StopScope::NOT_SET;
        }

        Aws::String GetNameForStopScope(StopScope enumValue)
        {
          switch(enumValue)
          {
          case StopScope::RuleSet:
            return "RuleSet";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StopScopeMapper
    } // namespace Model
  } // namespace SES
} // namespace Aws
