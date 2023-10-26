/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ScanFrequency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECR
  {
    namespace Model
    {
      namespace ScanFrequencyMapper
      {

        static const int SCAN_ON_PUSH_HASH = HashingUtils::HashString("SCAN_ON_PUSH");
        static const int CONTINUOUS_SCAN_HASH = HashingUtils::HashString("CONTINUOUS_SCAN");
        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");


        ScanFrequency GetScanFrequencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCAN_ON_PUSH_HASH)
          {
            return ScanFrequency::SCAN_ON_PUSH;
          }
          else if (hashCode == CONTINUOUS_SCAN_HASH)
          {
            return ScanFrequency::CONTINUOUS_SCAN;
          }
          else if (hashCode == MANUAL_HASH)
          {
            return ScanFrequency::MANUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScanFrequency>(hashCode);
          }

          return ScanFrequency::NOT_SET;
        }

        Aws::String GetNameForScanFrequency(ScanFrequency enumValue)
        {
          switch(enumValue)
          {
          case ScanFrequency::NOT_SET:
            return {};
          case ScanFrequency::SCAN_ON_PUSH:
            return "SCAN_ON_PUSH";
          case ScanFrequency::CONTINUOUS_SCAN:
            return "CONTINUOUS_SCAN";
          case ScanFrequency::MANUAL:
            return "MANUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScanFrequencyMapper
    } // namespace Model
  } // namespace ECR
} // namespace Aws
