/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ShareStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace ShareStatusMapper
      {

        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int COMPLETED_WITH_ERRORS_HASH = HashingUtils::HashString("COMPLETED_WITH_ERRORS");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        ShareStatus GetShareStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return ShareStatus::NOT_STARTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ShareStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ShareStatus::COMPLETED;
          }
          else if (hashCode == COMPLETED_WITH_ERRORS_HASH)
          {
            return ShareStatus::COMPLETED_WITH_ERRORS;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ShareStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShareStatus>(hashCode);
          }

          return ShareStatus::NOT_SET;
        }

        Aws::String GetNameForShareStatus(ShareStatus enumValue)
        {
          switch(enumValue)
          {
          case ShareStatus::NOT_STARTED:
            return "NOT_STARTED";
          case ShareStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ShareStatus::COMPLETED:
            return "COMPLETED";
          case ShareStatus::COMPLETED_WITH_ERRORS:
            return "COMPLETED_WITH_ERRORS";
          case ShareStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShareStatusMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
