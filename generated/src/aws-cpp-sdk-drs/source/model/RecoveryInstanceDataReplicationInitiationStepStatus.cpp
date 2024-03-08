/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/RecoveryInstanceDataReplicationInitiationStepStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace RecoveryInstanceDataReplicationInitiationStepStatusMapper
      {

        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");


        RecoveryInstanceDataReplicationInitiationStepStatus GetRecoveryInstanceDataReplicationInitiationStepStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepStatus::NOT_STARTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepStatus::FAILED;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return RecoveryInstanceDataReplicationInitiationStepStatus::SKIPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecoveryInstanceDataReplicationInitiationStepStatus>(hashCode);
          }

          return RecoveryInstanceDataReplicationInitiationStepStatus::NOT_SET;
        }

        Aws::String GetNameForRecoveryInstanceDataReplicationInitiationStepStatus(RecoveryInstanceDataReplicationInitiationStepStatus enumValue)
        {
          switch(enumValue)
          {
          case RecoveryInstanceDataReplicationInitiationStepStatus::NOT_SET:
            return {};
          case RecoveryInstanceDataReplicationInitiationStepStatus::NOT_STARTED:
            return "NOT_STARTED";
          case RecoveryInstanceDataReplicationInitiationStepStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case RecoveryInstanceDataReplicationInitiationStepStatus::SUCCEEDED:
            return "SUCCEEDED";
          case RecoveryInstanceDataReplicationInitiationStepStatus::FAILED:
            return "FAILED";
          case RecoveryInstanceDataReplicationInitiationStepStatus::SKIPPED:
            return "SKIPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecoveryInstanceDataReplicationInitiationStepStatusMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
