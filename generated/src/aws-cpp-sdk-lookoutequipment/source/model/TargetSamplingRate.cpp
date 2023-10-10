/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/TargetSamplingRate.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutEquipment
  {
    namespace Model
    {
      namespace TargetSamplingRateMapper
      {

        static const int PT1S_HASH = HashingUtils::HashString("PT1S");
        static const int PT5S_HASH = HashingUtils::HashString("PT5S");
        static const int PT10S_HASH = HashingUtils::HashString("PT10S");
        static const int PT15S_HASH = HashingUtils::HashString("PT15S");
        static const int PT30S_HASH = HashingUtils::HashString("PT30S");
        static const int PT1M_HASH = HashingUtils::HashString("PT1M");
        static const int PT5M_HASH = HashingUtils::HashString("PT5M");
        static const int PT10M_HASH = HashingUtils::HashString("PT10M");
        static const int PT15M_HASH = HashingUtils::HashString("PT15M");
        static const int PT30M_HASH = HashingUtils::HashString("PT30M");
        static const int PT1H_HASH = HashingUtils::HashString("PT1H");


        TargetSamplingRate GetTargetSamplingRateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PT1S_HASH)
          {
            return TargetSamplingRate::PT1S;
          }
          else if (hashCode == PT5S_HASH)
          {
            return TargetSamplingRate::PT5S;
          }
          else if (hashCode == PT10S_HASH)
          {
            return TargetSamplingRate::PT10S;
          }
          else if (hashCode == PT15S_HASH)
          {
            return TargetSamplingRate::PT15S;
          }
          else if (hashCode == PT30S_HASH)
          {
            return TargetSamplingRate::PT30S;
          }
          else if (hashCode == PT1M_HASH)
          {
            return TargetSamplingRate::PT1M;
          }
          else if (hashCode == PT5M_HASH)
          {
            return TargetSamplingRate::PT5M;
          }
          else if (hashCode == PT10M_HASH)
          {
            return TargetSamplingRate::PT10M;
          }
          else if (hashCode == PT15M_HASH)
          {
            return TargetSamplingRate::PT15M;
          }
          else if (hashCode == PT30M_HASH)
          {
            return TargetSamplingRate::PT30M;
          }
          else if (hashCode == PT1H_HASH)
          {
            return TargetSamplingRate::PT1H;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetSamplingRate>(hashCode);
          }

          return TargetSamplingRate::NOT_SET;
        }

        Aws::String GetNameForTargetSamplingRate(TargetSamplingRate enumValue)
        {
          switch(enumValue)
          {
          case TargetSamplingRate::NOT_SET:
            return {};
          case TargetSamplingRate::PT1S:
            return "PT1S";
          case TargetSamplingRate::PT5S:
            return "PT5S";
          case TargetSamplingRate::PT10S:
            return "PT10S";
          case TargetSamplingRate::PT15S:
            return "PT15S";
          case TargetSamplingRate::PT30S:
            return "PT30S";
          case TargetSamplingRate::PT1M:
            return "PT1M";
          case TargetSamplingRate::PT5M:
            return "PT5M";
          case TargetSamplingRate::PT10M:
            return "PT10M";
          case TargetSamplingRate::PT15M:
            return "PT15M";
          case TargetSamplingRate::PT30M:
            return "PT30M";
          case TargetSamplingRate::PT1H:
            return "PT1H";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetSamplingRateMapper
    } // namespace Model
  } // namespace LookoutEquipment
} // namespace Aws
