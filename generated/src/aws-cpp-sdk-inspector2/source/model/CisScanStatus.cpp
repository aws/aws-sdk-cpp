/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisScanStatus.h>
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
      namespace CisScanStatusMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");


        CisScanStatus GetCisScanStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return CisScanStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return CisScanStatus::COMPLETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return CisScanStatus::CANCELLED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return CisScanStatus::IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CisScanStatus>(hashCode);
          }

          return CisScanStatus::NOT_SET;
        }

        Aws::String GetNameForCisScanStatus(CisScanStatus enumValue)
        {
          switch(enumValue)
          {
          case CisScanStatus::NOT_SET:
            return {};
          case CisScanStatus::FAILED:
            return "FAILED";
          case CisScanStatus::COMPLETED:
            return "COMPLETED";
          case CisScanStatus::CANCELLED:
            return "CANCELLED";
          case CisScanStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CisScanStatusMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
