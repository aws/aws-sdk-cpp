/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ModelStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace ModelStatusMapper
      {

        static constexpr uint32_t SUBMITTED_HASH = ConstExprHashingUtils::HashString("SUBMITTED");
        static constexpr uint32_t TRAINING_HASH = ConstExprHashingUtils::HashString("TRAINING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t STOP_REQUESTED_HASH = ConstExprHashingUtils::HashString("STOP_REQUESTED");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t IN_ERROR_HASH = ConstExprHashingUtils::HashString("IN_ERROR");
        static constexpr uint32_t TRAINED_HASH = ConstExprHashingUtils::HashString("TRAINED");
        static constexpr uint32_t TRAINED_WITH_WARNING_HASH = ConstExprHashingUtils::HashString("TRAINED_WITH_WARNING");


        ModelStatus GetModelStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return ModelStatus::SUBMITTED;
          }
          else if (hashCode == TRAINING_HASH)
          {
            return ModelStatus::TRAINING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ModelStatus::DELETING;
          }
          else if (hashCode == STOP_REQUESTED_HASH)
          {
            return ModelStatus::STOP_REQUESTED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ModelStatus::STOPPED;
          }
          else if (hashCode == IN_ERROR_HASH)
          {
            return ModelStatus::IN_ERROR;
          }
          else if (hashCode == TRAINED_HASH)
          {
            return ModelStatus::TRAINED;
          }
          else if (hashCode == TRAINED_WITH_WARNING_HASH)
          {
            return ModelStatus::TRAINED_WITH_WARNING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelStatus>(hashCode);
          }

          return ModelStatus::NOT_SET;
        }

        Aws::String GetNameForModelStatus(ModelStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelStatus::NOT_SET:
            return {};
          case ModelStatus::SUBMITTED:
            return "SUBMITTED";
          case ModelStatus::TRAINING:
            return "TRAINING";
          case ModelStatus::DELETING:
            return "DELETING";
          case ModelStatus::STOP_REQUESTED:
            return "STOP_REQUESTED";
          case ModelStatus::STOPPED:
            return "STOPPED";
          case ModelStatus::IN_ERROR:
            return "IN_ERROR";
          case ModelStatus::TRAINED:
            return "TRAINED";
          case ModelStatus::TRAINED_WITH_WARNING:
            return "TRAINED_WITH_WARNING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelStatusMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
