/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/LicenseConversionTaskStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManager
  {
    namespace Model
    {
      namespace LicenseConversionTaskStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        LicenseConversionTaskStatus GetLicenseConversionTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return LicenseConversionTaskStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return LicenseConversionTaskStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return LicenseConversionTaskStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LicenseConversionTaskStatus>(hashCode);
          }

          return LicenseConversionTaskStatus::NOT_SET;
        }

        Aws::String GetNameForLicenseConversionTaskStatus(LicenseConversionTaskStatus enumValue)
        {
          switch(enumValue)
          {
          case LicenseConversionTaskStatus::NOT_SET:
            return {};
          case LicenseConversionTaskStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case LicenseConversionTaskStatus::SUCCEEDED:
            return "SUCCEEDED";
          case LicenseConversionTaskStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LicenseConversionTaskStatusMapper
    } // namespace Model
  } // namespace LicenseManager
} // namespace Aws
