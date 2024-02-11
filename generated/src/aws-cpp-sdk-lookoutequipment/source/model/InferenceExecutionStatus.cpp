/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/InferenceExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutEquipment
  {
    namespace Model
    {
      namespace InferenceExecutionStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        InferenceExecutionStatus GetInferenceExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return InferenceExecutionStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return InferenceExecutionStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return InferenceExecutionStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InferenceExecutionStatus>(hashCode);
          }

          return InferenceExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForInferenceExecutionStatus(InferenceExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case InferenceExecutionStatus::NOT_SET:
            return {};
          case InferenceExecutionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case InferenceExecutionStatus::SUCCESS:
            return "SUCCESS";
          case InferenceExecutionStatus::FAILED:
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

      } // namespace InferenceExecutionStatusMapper
    } // namespace Model
  } // namespace LookoutEquipment
} // namespace Aws
