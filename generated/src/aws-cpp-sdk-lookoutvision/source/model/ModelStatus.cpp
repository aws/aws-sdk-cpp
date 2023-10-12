/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/ModelStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutforVision
  {
    namespace Model
    {
      namespace ModelStatusMapper
      {

        static constexpr uint32_t TRAINING_HASH = ConstExprHashingUtils::HashString("TRAINING");
        static constexpr uint32_t TRAINED_HASH = ConstExprHashingUtils::HashString("TRAINED");
        static constexpr uint32_t TRAINING_FAILED_HASH = ConstExprHashingUtils::HashString("TRAINING_FAILED");
        static constexpr uint32_t STARTING_HOSTING_HASH = ConstExprHashingUtils::HashString("STARTING_HOSTING");
        static constexpr uint32_t HOSTED_HASH = ConstExprHashingUtils::HashString("HOSTED");
        static constexpr uint32_t HOSTING_FAILED_HASH = ConstExprHashingUtils::HashString("HOSTING_FAILED");
        static constexpr uint32_t STOPPING_HOSTING_HASH = ConstExprHashingUtils::HashString("STOPPING_HOSTING");
        static constexpr uint32_t SYSTEM_UPDATING_HASH = ConstExprHashingUtils::HashString("SYSTEM_UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");


        ModelStatus GetModelStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRAINING_HASH)
          {
            return ModelStatus::TRAINING;
          }
          else if (hashCode == TRAINED_HASH)
          {
            return ModelStatus::TRAINED;
          }
          else if (hashCode == TRAINING_FAILED_HASH)
          {
            return ModelStatus::TRAINING_FAILED;
          }
          else if (hashCode == STARTING_HOSTING_HASH)
          {
            return ModelStatus::STARTING_HOSTING;
          }
          else if (hashCode == HOSTED_HASH)
          {
            return ModelStatus::HOSTED;
          }
          else if (hashCode == HOSTING_FAILED_HASH)
          {
            return ModelStatus::HOSTING_FAILED;
          }
          else if (hashCode == STOPPING_HOSTING_HASH)
          {
            return ModelStatus::STOPPING_HOSTING;
          }
          else if (hashCode == SYSTEM_UPDATING_HASH)
          {
            return ModelStatus::SYSTEM_UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ModelStatus::DELETING;
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
          case ModelStatus::TRAINING:
            return "TRAINING";
          case ModelStatus::TRAINED:
            return "TRAINED";
          case ModelStatus::TRAINING_FAILED:
            return "TRAINING_FAILED";
          case ModelStatus::STARTING_HOSTING:
            return "STARTING_HOSTING";
          case ModelStatus::HOSTED:
            return "HOSTED";
          case ModelStatus::HOSTING_FAILED:
            return "HOSTING_FAILED";
          case ModelStatus::STOPPING_HOSTING:
            return "STOPPING_HOSTING";
          case ModelStatus::SYSTEM_UPDATING:
            return "SYSTEM_UPDATING";
          case ModelStatus::DELETING:
            return "DELETING";
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
  } // namespace LookoutforVision
} // namespace Aws
