/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisReportStatus.h>
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
      namespace CisReportStatusMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");


        CisReportStatus GetCisReportStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return CisReportStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CisReportStatus::FAILED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return CisReportStatus::IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CisReportStatus>(hashCode);
          }

          return CisReportStatus::NOT_SET;
        }

        Aws::String GetNameForCisReportStatus(CisReportStatus enumValue)
        {
          switch(enumValue)
          {
          case CisReportStatus::NOT_SET:
            return {};
          case CisReportStatus::SUCCEEDED:
            return "SUCCEEDED";
          case CisReportStatus::FAILED:
            return "FAILED";
          case CisReportStatus::IN_PROGRESS:
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

      } // namespace CisReportStatusMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
