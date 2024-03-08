/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LookBackPeriodPreference.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace LookBackPeriodPreferenceMapper
      {

        static const int DAYS_14_HASH = HashingUtils::HashString("DAYS_14");
        static const int DAYS_32_HASH = HashingUtils::HashString("DAYS_32");
        static const int DAYS_93_HASH = HashingUtils::HashString("DAYS_93");


        LookBackPeriodPreference GetLookBackPeriodPreferenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAYS_14_HASH)
          {
            return LookBackPeriodPreference::DAYS_14;
          }
          else if (hashCode == DAYS_32_HASH)
          {
            return LookBackPeriodPreference::DAYS_32;
          }
          else if (hashCode == DAYS_93_HASH)
          {
            return LookBackPeriodPreference::DAYS_93;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LookBackPeriodPreference>(hashCode);
          }

          return LookBackPeriodPreference::NOT_SET;
        }

        Aws::String GetNameForLookBackPeriodPreference(LookBackPeriodPreference enumValue)
        {
          switch(enumValue)
          {
          case LookBackPeriodPreference::NOT_SET:
            return {};
          case LookBackPeriodPreference::DAYS_14:
            return "DAYS_14";
          case LookBackPeriodPreference::DAYS_32:
            return "DAYS_32";
          case LookBackPeriodPreference::DAYS_93:
            return "DAYS_93";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LookBackPeriodPreferenceMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
