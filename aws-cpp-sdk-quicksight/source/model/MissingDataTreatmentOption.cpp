/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/MissingDataTreatmentOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace MissingDataTreatmentOptionMapper
      {

        static const int INTERPOLATE_HASH = HashingUtils::HashString("INTERPOLATE");
        static const int SHOW_AS_ZERO_HASH = HashingUtils::HashString("SHOW_AS_ZERO");
        static const int SHOW_AS_BLANK_HASH = HashingUtils::HashString("SHOW_AS_BLANK");


        MissingDataTreatmentOption GetMissingDataTreatmentOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERPOLATE_HASH)
          {
            return MissingDataTreatmentOption::INTERPOLATE;
          }
          else if (hashCode == SHOW_AS_ZERO_HASH)
          {
            return MissingDataTreatmentOption::SHOW_AS_ZERO;
          }
          else if (hashCode == SHOW_AS_BLANK_HASH)
          {
            return MissingDataTreatmentOption::SHOW_AS_BLANK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MissingDataTreatmentOption>(hashCode);
          }

          return MissingDataTreatmentOption::NOT_SET;
        }

        Aws::String GetNameForMissingDataTreatmentOption(MissingDataTreatmentOption enumValue)
        {
          switch(enumValue)
          {
          case MissingDataTreatmentOption::INTERPOLATE:
            return "INTERPOLATE";
          case MissingDataTreatmentOption::SHOW_AS_ZERO:
            return "SHOW_AS_ZERO";
          case MissingDataTreatmentOption::SHOW_AS_BLANK:
            return "SHOW_AS_BLANK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MissingDataTreatmentOptionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
