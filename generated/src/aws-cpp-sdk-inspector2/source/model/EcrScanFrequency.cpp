/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/EcrScanFrequency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace EcrScanFrequencyMapper
      {

        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");
        static const int SCAN_ON_PUSH_HASH = HashingUtils::HashString("SCAN_ON_PUSH");
        static const int CONTINUOUS_SCAN_HASH = HashingUtils::HashString("CONTINUOUS_SCAN");


        EcrScanFrequency GetEcrScanFrequencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANUAL_HASH)
          {
            return EcrScanFrequency::MANUAL;
          }
          else if (hashCode == SCAN_ON_PUSH_HASH)
          {
            return EcrScanFrequency::SCAN_ON_PUSH;
          }
          else if (hashCode == CONTINUOUS_SCAN_HASH)
          {
            return EcrScanFrequency::CONTINUOUS_SCAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EcrScanFrequency>(hashCode);
          }

          return EcrScanFrequency::NOT_SET;
        }

        Aws::String GetNameForEcrScanFrequency(EcrScanFrequency enumValue)
        {
          switch(enumValue)
          {
          case EcrScanFrequency::NOT_SET:
            return {};
          case EcrScanFrequency::MANUAL:
            return "MANUAL";
          case EcrScanFrequency::SCAN_ON_PUSH:
            return "SCAN_ON_PUSH";
          case EcrScanFrequency::CONTINUOUS_SCAN:
            return "CONTINUOUS_SCAN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EcrScanFrequencyMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
