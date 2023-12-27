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

        static const int TRAINING_HASH = HashingUtils::HashString("TRAINING");
        static const int TRAINED_HASH = HashingUtils::HashString("TRAINED");
        static const int TRAINING_FAILED_HASH = HashingUtils::HashString("TRAINING_FAILED");
        static const int STARTING_HOSTING_HASH = HashingUtils::HashString("STARTING_HOSTING");
        static const int HOSTED_HASH = HashingUtils::HashString("HOSTED");
        static const int HOSTING_FAILED_HASH = HashingUtils::HashString("HOSTING_FAILED");
        static const int STOPPING_HOSTING_HASH = HashingUtils::HashString("STOPPING_HOSTING");
        static const int SYSTEM_UPDATING_HASH = HashingUtils::HashString("SYSTEM_UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        ModelStatus GetModelStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
