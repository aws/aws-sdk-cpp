/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/TransitionToArchiveRules.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EFS
  {
    namespace Model
    {
      namespace TransitionToArchiveRulesMapper
      {

        static const int AFTER_1_DAY_HASH = HashingUtils::HashString("AFTER_1_DAY");
        static const int AFTER_7_DAYS_HASH = HashingUtils::HashString("AFTER_7_DAYS");
        static const int AFTER_14_DAYS_HASH = HashingUtils::HashString("AFTER_14_DAYS");
        static const int AFTER_30_DAYS_HASH = HashingUtils::HashString("AFTER_30_DAYS");
        static const int AFTER_60_DAYS_HASH = HashingUtils::HashString("AFTER_60_DAYS");
        static const int AFTER_90_DAYS_HASH = HashingUtils::HashString("AFTER_90_DAYS");
        static const int AFTER_180_DAYS_HASH = HashingUtils::HashString("AFTER_180_DAYS");
        static const int AFTER_270_DAYS_HASH = HashingUtils::HashString("AFTER_270_DAYS");
        static const int AFTER_365_DAYS_HASH = HashingUtils::HashString("AFTER_365_DAYS");


        TransitionToArchiveRules GetTransitionToArchiveRulesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AFTER_1_DAY_HASH)
          {
            return TransitionToArchiveRules::AFTER_1_DAY;
          }
          else if (hashCode == AFTER_7_DAYS_HASH)
          {
            return TransitionToArchiveRules::AFTER_7_DAYS;
          }
          else if (hashCode == AFTER_14_DAYS_HASH)
          {
            return TransitionToArchiveRules::AFTER_14_DAYS;
          }
          else if (hashCode == AFTER_30_DAYS_HASH)
          {
            return TransitionToArchiveRules::AFTER_30_DAYS;
          }
          else if (hashCode == AFTER_60_DAYS_HASH)
          {
            return TransitionToArchiveRules::AFTER_60_DAYS;
          }
          else if (hashCode == AFTER_90_DAYS_HASH)
          {
            return TransitionToArchiveRules::AFTER_90_DAYS;
          }
          else if (hashCode == AFTER_180_DAYS_HASH)
          {
            return TransitionToArchiveRules::AFTER_180_DAYS;
          }
          else if (hashCode == AFTER_270_DAYS_HASH)
          {
            return TransitionToArchiveRules::AFTER_270_DAYS;
          }
          else if (hashCode == AFTER_365_DAYS_HASH)
          {
            return TransitionToArchiveRules::AFTER_365_DAYS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitionToArchiveRules>(hashCode);
          }

          return TransitionToArchiveRules::NOT_SET;
        }

        Aws::String GetNameForTransitionToArchiveRules(TransitionToArchiveRules enumValue)
        {
          switch(enumValue)
          {
          case TransitionToArchiveRules::NOT_SET:
            return {};
          case TransitionToArchiveRules::AFTER_1_DAY:
            return "AFTER_1_DAY";
          case TransitionToArchiveRules::AFTER_7_DAYS:
            return "AFTER_7_DAYS";
          case TransitionToArchiveRules::AFTER_14_DAYS:
            return "AFTER_14_DAYS";
          case TransitionToArchiveRules::AFTER_30_DAYS:
            return "AFTER_30_DAYS";
          case TransitionToArchiveRules::AFTER_60_DAYS:
            return "AFTER_60_DAYS";
          case TransitionToArchiveRules::AFTER_90_DAYS:
            return "AFTER_90_DAYS";
          case TransitionToArchiveRules::AFTER_180_DAYS:
            return "AFTER_180_DAYS";
          case TransitionToArchiveRules::AFTER_270_DAYS:
            return "AFTER_270_DAYS";
          case TransitionToArchiveRules::AFTER_365_DAYS:
            return "AFTER_365_DAYS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransitionToArchiveRulesMapper
    } // namespace Model
  } // namespace EFS
} // namespace Aws
