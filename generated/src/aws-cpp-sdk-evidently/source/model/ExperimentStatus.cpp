/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ExperimentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchEvidently
  {
    namespace Model
    {
      namespace ExperimentStatusMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        ExperimentStatus GetExperimentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return ExperimentStatus::CREATED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ExperimentStatus::UPDATING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ExperimentStatus::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ExperimentStatus::COMPLETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ExperimentStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExperimentStatus>(hashCode);
          }

          return ExperimentStatus::NOT_SET;
        }

        Aws::String GetNameForExperimentStatus(ExperimentStatus enumValue)
        {
          switch(enumValue)
          {
          case ExperimentStatus::NOT_SET:
            return {};
          case ExperimentStatus::CREATED:
            return "CREATED";
          case ExperimentStatus::UPDATING:
            return "UPDATING";
          case ExperimentStatus::RUNNING:
            return "RUNNING";
          case ExperimentStatus::COMPLETED:
            return "COMPLETED";
          case ExperimentStatus::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExperimentStatusMapper
    } // namespace Model
  } // namespace CloudWatchEvidently
} // namespace Aws
