/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReferenceImportJobItemStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace ReferenceImportJobItemStatusMapper
      {

        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FINISHED_HASH = HashingUtils::HashString("FINISHED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ReferenceImportJobItemStatus GetReferenceImportJobItemStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return ReferenceImportJobItemStatus::NOT_STARTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ReferenceImportJobItemStatus::IN_PROGRESS;
          }
          else if (hashCode == FINISHED_HASH)
          {
            return ReferenceImportJobItemStatus::FINISHED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReferenceImportJobItemStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReferenceImportJobItemStatus>(hashCode);
          }

          return ReferenceImportJobItemStatus::NOT_SET;
        }

        Aws::String GetNameForReferenceImportJobItemStatus(ReferenceImportJobItemStatus enumValue)
        {
          switch(enumValue)
          {
          case ReferenceImportJobItemStatus::NOT_STARTED:
            return "NOT_STARTED";
          case ReferenceImportJobItemStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ReferenceImportJobItemStatus::FINISHED:
            return "FINISHED";
          case ReferenceImportJobItemStatus::FAILED:
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

      } // namespace ReferenceImportJobItemStatusMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
