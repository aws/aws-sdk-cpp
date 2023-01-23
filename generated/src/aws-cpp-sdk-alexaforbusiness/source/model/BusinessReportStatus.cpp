/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/BusinessReportStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace BusinessReportStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        BusinessReportStatus GetBusinessReportStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return BusinessReportStatus::RUNNING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return BusinessReportStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return BusinessReportStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BusinessReportStatus>(hashCode);
          }

          return BusinessReportStatus::NOT_SET;
        }

        Aws::String GetNameForBusinessReportStatus(BusinessReportStatus enumValue)
        {
          switch(enumValue)
          {
          case BusinessReportStatus::RUNNING:
            return "RUNNING";
          case BusinessReportStatus::SUCCEEDED:
            return "SUCCEEDED";
          case BusinessReportStatus::FAILED:
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

      } // namespace BusinessReportStatusMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
