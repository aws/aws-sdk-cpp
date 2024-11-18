/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/EstimateStatus.h>
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
      namespace EstimateStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        EstimateStatus GetEstimateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return EstimateStatus::RUNNING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return EstimateStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return EstimateStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EstimateStatus>(hashCode);
          }

          return EstimateStatus::NOT_SET;
        }

        Aws::String GetNameForEstimateStatus(EstimateStatus enumValue)
        {
          switch(enumValue)
          {
          case EstimateStatus::NOT_SET:
            return {};
          case EstimateStatus::RUNNING:
            return "RUNNING";
          case EstimateStatus::SUCCEEDED:
            return "SUCCEEDED";
          case EstimateStatus::FAILED:
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

      } // namespace EstimateStatusMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
