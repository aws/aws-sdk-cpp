/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/Frequency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutMetrics
  {
    namespace Model
    {
      namespace FrequencyMapper
      {

        static const int P1D_HASH = HashingUtils::HashString("P1D");
        static const int PT1H_HASH = HashingUtils::HashString("PT1H");
        static const int PT10M_HASH = HashingUtils::HashString("PT10M");
        static const int PT5M_HASH = HashingUtils::HashString("PT5M");


        Frequency GetFrequencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == P1D_HASH)
          {
            return Frequency::P1D;
          }
          else if (hashCode == PT1H_HASH)
          {
            return Frequency::PT1H;
          }
          else if (hashCode == PT10M_HASH)
          {
            return Frequency::PT10M;
          }
          else if (hashCode == PT5M_HASH)
          {
            return Frequency::PT5M;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Frequency>(hashCode);
          }

          return Frequency::NOT_SET;
        }

        Aws::String GetNameForFrequency(Frequency enumValue)
        {
          switch(enumValue)
          {
          case Frequency::NOT_SET:
            return {};
          case Frequency::P1D:
            return "P1D";
          case Frequency::PT1H:
            return "PT1H";
          case Frequency::PT10M:
            return "PT10M";
          case Frequency::PT5M:
            return "PT5M";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FrequencyMapper
    } // namespace Model
  } // namespace LookoutMetrics
} // namespace Aws
