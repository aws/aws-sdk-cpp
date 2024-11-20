/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RuleScopeSelectionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace RuleScopeSelectionModeMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int SPECIFIC_HASH = HashingUtils::HashString("SPECIFIC");


        RuleScopeSelectionMode GetRuleScopeSelectionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return RuleScopeSelectionMode::ALL;
          }
          else if (hashCode == SPECIFIC_HASH)
          {
            return RuleScopeSelectionMode::SPECIFIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleScopeSelectionMode>(hashCode);
          }

          return RuleScopeSelectionMode::NOT_SET;
        }

        Aws::String GetNameForRuleScopeSelectionMode(RuleScopeSelectionMode enumValue)
        {
          switch(enumValue)
          {
          case RuleScopeSelectionMode::NOT_SET:
            return {};
          case RuleScopeSelectionMode::ALL:
            return "ALL";
          case RuleScopeSelectionMode::SPECIFIC:
            return "SPECIFIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleScopeSelectionModeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
