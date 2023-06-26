/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/TransitionToIARules.h>
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
      namespace TransitionToIARulesMapper
      {

        static const int AFTER_7_DAYS_HASH = HashingUtils::HashString("AFTER_7_DAYS");
        static const int AFTER_14_DAYS_HASH = HashingUtils::HashString("AFTER_14_DAYS");
        static const int AFTER_30_DAYS_HASH = HashingUtils::HashString("AFTER_30_DAYS");
        static const int AFTER_60_DAYS_HASH = HashingUtils::HashString("AFTER_60_DAYS");
        static const int AFTER_90_DAYS_HASH = HashingUtils::HashString("AFTER_90_DAYS");
        static const int AFTER_1_DAY_HASH = HashingUtils::HashString("AFTER_1_DAY");


        TransitionToIARules GetTransitionToIARulesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AFTER_7_DAYS_HASH)
          {
            return TransitionToIARules::AFTER_7_DAYS;
          }
          else if (hashCode == AFTER_14_DAYS_HASH)
          {
            return TransitionToIARules::AFTER_14_DAYS;
          }
          else if (hashCode == AFTER_30_DAYS_HASH)
          {
            return TransitionToIARules::AFTER_30_DAYS;
          }
          else if (hashCode == AFTER_60_DAYS_HASH)
          {
            return TransitionToIARules::AFTER_60_DAYS;
          }
          else if (hashCode == AFTER_90_DAYS_HASH)
          {
            return TransitionToIARules::AFTER_90_DAYS;
          }
          else if (hashCode == AFTER_1_DAY_HASH)
          {
            return TransitionToIARules::AFTER_1_DAY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitionToIARules>(hashCode);
          }

          return TransitionToIARules::NOT_SET;
        }

        Aws::String GetNameForTransitionToIARules(TransitionToIARules enumValue)
        {
          switch(enumValue)
          {
          case TransitionToIARules::AFTER_7_DAYS:
            return "AFTER_7_DAYS";
          case TransitionToIARules::AFTER_14_DAYS:
            return "AFTER_14_DAYS";
          case TransitionToIARules::AFTER_30_DAYS:
            return "AFTER_30_DAYS";
          case TransitionToIARules::AFTER_60_DAYS:
            return "AFTER_60_DAYS";
          case TransitionToIARules::AFTER_90_DAYS:
            return "AFTER_90_DAYS";
          case TransitionToIARules::AFTER_1_DAY:
            return "AFTER_1_DAY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransitionToIARulesMapper
    } // namespace Model
  } // namespace EFS
} // namespace Aws
