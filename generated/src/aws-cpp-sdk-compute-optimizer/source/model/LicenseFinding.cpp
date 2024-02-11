/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LicenseFinding.h>
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
      namespace LicenseFindingMapper
      {

        static const int InsufficientMetrics_HASH = HashingUtils::HashString("InsufficientMetrics");
        static const int Optimized_HASH = HashingUtils::HashString("Optimized");
        static const int NotOptimized_HASH = HashingUtils::HashString("NotOptimized");


        LicenseFinding GetLicenseFindingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InsufficientMetrics_HASH)
          {
            return LicenseFinding::InsufficientMetrics;
          }
          else if (hashCode == Optimized_HASH)
          {
            return LicenseFinding::Optimized;
          }
          else if (hashCode == NotOptimized_HASH)
          {
            return LicenseFinding::NotOptimized;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LicenseFinding>(hashCode);
          }

          return LicenseFinding::NOT_SET;
        }

        Aws::String GetNameForLicenseFinding(LicenseFinding enumValue)
        {
          switch(enumValue)
          {
          case LicenseFinding::NOT_SET:
            return {};
          case LicenseFinding::InsufficientMetrics:
            return "InsufficientMetrics";
          case LicenseFinding::Optimized:
            return "Optimized";
          case LicenseFinding::NotOptimized:
            return "NotOptimized";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LicenseFindingMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
