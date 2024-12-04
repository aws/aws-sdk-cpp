/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/AutomationJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockDataAutomationRuntime
  {
    namespace Model
    {
      namespace AutomationJobStatusMapper
      {

        static const int Created_HASH = HashingUtils::HashString("Created");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int ServiceError_HASH = HashingUtils::HashString("ServiceError");
        static const int ClientError_HASH = HashingUtils::HashString("ClientError");


        AutomationJobStatus GetAutomationJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Created_HASH)
          {
            return AutomationJobStatus::Created;
          }
          else if (hashCode == InProgress_HASH)
          {
            return AutomationJobStatus::InProgress;
          }
          else if (hashCode == Success_HASH)
          {
            return AutomationJobStatus::Success;
          }
          else if (hashCode == ServiceError_HASH)
          {
            return AutomationJobStatus::ServiceError;
          }
          else if (hashCode == ClientError_HASH)
          {
            return AutomationJobStatus::ClientError;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomationJobStatus>(hashCode);
          }

          return AutomationJobStatus::NOT_SET;
        }

        Aws::String GetNameForAutomationJobStatus(AutomationJobStatus enumValue)
        {
          switch(enumValue)
          {
          case AutomationJobStatus::NOT_SET:
            return {};
          case AutomationJobStatus::Created:
            return "Created";
          case AutomationJobStatus::InProgress:
            return "InProgress";
          case AutomationJobStatus::Success:
            return "Success";
          case AutomationJobStatus::ServiceError:
            return "ServiceError";
          case AutomationJobStatus::ClientError:
            return "ClientError";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomationJobStatusMapper
    } // namespace Model
  } // namespace BedrockDataAutomationRuntime
} // namespace Aws
