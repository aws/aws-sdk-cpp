/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/IdentityResolutionJobStatus.h>
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
      namespace IdentityResolutionJobStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int PREPROCESSING_HASH = HashingUtils::HashString("PREPROCESSING");
        static const int FIND_MATCHING_HASH = HashingUtils::HashString("FIND_MATCHING");
        static const int MERGING_HASH = HashingUtils::HashString("MERGING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int PARTIAL_SUCCESS_HASH = HashingUtils::HashString("PARTIAL_SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        IdentityResolutionJobStatus GetIdentityResolutionJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return IdentityResolutionJobStatus::PENDING;
          }
          else if (hashCode == PREPROCESSING_HASH)
          {
            return IdentityResolutionJobStatus::PREPROCESSING;
          }
          else if (hashCode == FIND_MATCHING_HASH)
          {
            return IdentityResolutionJobStatus::FIND_MATCHING;
          }
          else if (hashCode == MERGING_HASH)
          {
            return IdentityResolutionJobStatus::MERGING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return IdentityResolutionJobStatus::COMPLETED;
          }
          else if (hashCode == PARTIAL_SUCCESS_HASH)
          {
            return IdentityResolutionJobStatus::PARTIAL_SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return IdentityResolutionJobStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdentityResolutionJobStatus>(hashCode);
          }

          return IdentityResolutionJobStatus::NOT_SET;
        }

        Aws::String GetNameForIdentityResolutionJobStatus(IdentityResolutionJobStatus enumValue)
        {
          switch(enumValue)
          {
          case IdentityResolutionJobStatus::NOT_SET:
            return {};
          case IdentityResolutionJobStatus::PENDING:
            return "PENDING";
          case IdentityResolutionJobStatus::PREPROCESSING:
            return "PREPROCESSING";
          case IdentityResolutionJobStatus::FIND_MATCHING:
            return "FIND_MATCHING";
          case IdentityResolutionJobStatus::MERGING:
            return "MERGING";
          case IdentityResolutionJobStatus::COMPLETED:
            return "COMPLETED";
          case IdentityResolutionJobStatus::PARTIAL_SUCCESS:
            return "PARTIAL_SUCCESS";
          case IdentityResolutionJobStatus::FAILED:
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

      } // namespace IdentityResolutionJobStatusMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
