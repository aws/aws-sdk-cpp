/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/SamplingStrategyName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace XRay
  {
    namespace Model
    {
      namespace SamplingStrategyNameMapper
      {

        static const int PartialScan_HASH = HashingUtils::HashString("PartialScan");
        static const int FixedRate_HASH = HashingUtils::HashString("FixedRate");


        SamplingStrategyName GetSamplingStrategyNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PartialScan_HASH)
          {
            return SamplingStrategyName::PartialScan;
          }
          else if (hashCode == FixedRate_HASH)
          {
            return SamplingStrategyName::FixedRate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SamplingStrategyName>(hashCode);
          }

          return SamplingStrategyName::NOT_SET;
        }

        Aws::String GetNameForSamplingStrategyName(SamplingStrategyName enumValue)
        {
          switch(enumValue)
          {
          case SamplingStrategyName::PartialScan:
            return "PartialScan";
          case SamplingStrategyName::FixedRate:
            return "FixedRate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SamplingStrategyNameMapper
    } // namespace Model
  } // namespace XRay
} // namespace Aws
