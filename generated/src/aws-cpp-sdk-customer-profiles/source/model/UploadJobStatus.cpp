/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/UploadJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace UploadJobStatusMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int PARTIALLY_SUCCEEDED_HASH = HashingUtils::HashString("PARTIALLY_SUCCEEDED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        UploadJobStatus GetUploadJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return UploadJobStatus::CREATED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return UploadJobStatus::IN_PROGRESS;
          }
          else if (hashCode == PARTIALLY_SUCCEEDED_HASH)
          {
            return UploadJobStatus::PARTIALLY_SUCCEEDED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return UploadJobStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return UploadJobStatus::FAILED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return UploadJobStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UploadJobStatus>(hashCode);
          }

          return UploadJobStatus::NOT_SET;
        }

        Aws::String GetNameForUploadJobStatus(UploadJobStatus enumValue)
        {
          switch(enumValue)
          {
          case UploadJobStatus::NOT_SET:
            return {};
          case UploadJobStatus::CREATED:
            return "CREATED";
          case UploadJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case UploadJobStatus::PARTIALLY_SUCCEEDED:
            return "PARTIALLY_SUCCEEDED";
          case UploadJobStatus::SUCCEEDED:
            return "SUCCEEDED";
          case UploadJobStatus::FAILED:
            return "FAILED";
          case UploadJobStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UploadJobStatusMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
