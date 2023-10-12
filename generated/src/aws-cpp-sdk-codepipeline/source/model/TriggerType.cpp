/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/TriggerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace TriggerTypeMapper
      {

        static constexpr uint32_t CreatePipeline_HASH = ConstExprHashingUtils::HashString("CreatePipeline");
        static constexpr uint32_t StartPipelineExecution_HASH = ConstExprHashingUtils::HashString("StartPipelineExecution");
        static constexpr uint32_t PollForSourceChanges_HASH = ConstExprHashingUtils::HashString("PollForSourceChanges");
        static constexpr uint32_t Webhook_HASH = ConstExprHashingUtils::HashString("Webhook");
        static constexpr uint32_t CloudWatchEvent_HASH = ConstExprHashingUtils::HashString("CloudWatchEvent");
        static constexpr uint32_t PutActionRevision_HASH = ConstExprHashingUtils::HashString("PutActionRevision");


        TriggerType GetTriggerTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreatePipeline_HASH)
          {
            return TriggerType::CreatePipeline;
          }
          else if (hashCode == StartPipelineExecution_HASH)
          {
            return TriggerType::StartPipelineExecution;
          }
          else if (hashCode == PollForSourceChanges_HASH)
          {
            return TriggerType::PollForSourceChanges;
          }
          else if (hashCode == Webhook_HASH)
          {
            return TriggerType::Webhook;
          }
          else if (hashCode == CloudWatchEvent_HASH)
          {
            return TriggerType::CloudWatchEvent;
          }
          else if (hashCode == PutActionRevision_HASH)
          {
            return TriggerType::PutActionRevision;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TriggerType>(hashCode);
          }

          return TriggerType::NOT_SET;
        }

        Aws::String GetNameForTriggerType(TriggerType enumValue)
        {
          switch(enumValue)
          {
          case TriggerType::NOT_SET:
            return {};
          case TriggerType::CreatePipeline:
            return "CreatePipeline";
          case TriggerType::StartPipelineExecution:
            return "StartPipelineExecution";
          case TriggerType::PollForSourceChanges:
            return "PollForSourceChanges";
          case TriggerType::Webhook:
            return "Webhook";
          case TriggerType::CloudWatchEvent:
            return "CloudWatchEvent";
          case TriggerType::PutActionRevision:
            return "PutActionRevision";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TriggerTypeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
