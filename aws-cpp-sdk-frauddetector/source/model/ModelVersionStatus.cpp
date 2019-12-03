/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/frauddetector/model/ModelVersionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FraudDetector
  {
    namespace Model
    {
      namespace ModelVersionStatusMapper
      {

        static const int TRAINING_IN_PROGRESS_HASH = HashingUtils::HashString("TRAINING_IN_PROGRESS");
        static const int TRAINING_COMPLETE_HASH = HashingUtils::HashString("TRAINING_COMPLETE");
        static const int ACTIVATE_REQUESTED_HASH = HashingUtils::HashString("ACTIVATE_REQUESTED");
        static const int ACTIVATE_IN_PROGRESS_HASH = HashingUtils::HashString("ACTIVATE_IN_PROGRESS");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVATE_IN_PROGRESS_HASH = HashingUtils::HashString("INACTIVATE_IN_PROGRESS");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        ModelVersionStatus GetModelVersionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRAINING_IN_PROGRESS_HASH)
          {
            return ModelVersionStatus::TRAINING_IN_PROGRESS;
          }
          else if (hashCode == TRAINING_COMPLETE_HASH)
          {
            return ModelVersionStatus::TRAINING_COMPLETE;
          }
          else if (hashCode == ACTIVATE_REQUESTED_HASH)
          {
            return ModelVersionStatus::ACTIVATE_REQUESTED;
          }
          else if (hashCode == ACTIVATE_IN_PROGRESS_HASH)
          {
            return ModelVersionStatus::ACTIVATE_IN_PROGRESS;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ModelVersionStatus::ACTIVE;
          }
          else if (hashCode == INACTIVATE_IN_PROGRESS_HASH)
          {
            return ModelVersionStatus::INACTIVATE_IN_PROGRESS;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return ModelVersionStatus::INACTIVE;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ModelVersionStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelVersionStatus>(hashCode);
          }

          return ModelVersionStatus::NOT_SET;
        }

        Aws::String GetNameForModelVersionStatus(ModelVersionStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelVersionStatus::TRAINING_IN_PROGRESS:
            return "TRAINING_IN_PROGRESS";
          case ModelVersionStatus::TRAINING_COMPLETE:
            return "TRAINING_COMPLETE";
          case ModelVersionStatus::ACTIVATE_REQUESTED:
            return "ACTIVATE_REQUESTED";
          case ModelVersionStatus::ACTIVATE_IN_PROGRESS:
            return "ACTIVATE_IN_PROGRESS";
          case ModelVersionStatus::ACTIVE:
            return "ACTIVE";
          case ModelVersionStatus::INACTIVATE_IN_PROGRESS:
            return "INACTIVATE_IN_PROGRESS";
          case ModelVersionStatus::INACTIVE:
            return "INACTIVE";
          case ModelVersionStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelVersionStatusMapper
    } // namespace Model
  } // namespace FraudDetector
} // namespace Aws
