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

        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
        static const int TRAINING_HASH = HashingUtils::HashString("TRAINING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int STOP_REQUESTED_HASH = HashingUtils::HashString("STOP_REQUESTED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int IN_ERROR_HASH = HashingUtils::HashString("IN_ERROR");
        static const int TRAINED_HASH = HashingUtils::HashString("TRAINED");


        ModelStatus GetModelStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
