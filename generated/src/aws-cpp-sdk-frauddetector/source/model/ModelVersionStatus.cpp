/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");
        static constexpr uint32_t TRAINING_CANCELLED_HASH = ConstExprHashingUtils::HashString("TRAINING_CANCELLED");


        ModelVersionStatus GetModelVersionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ModelVersionStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return ModelVersionStatus::INACTIVE;
          }
          else if (hashCode == TRAINING_CANCELLED_HASH)
          {
            return ModelVersionStatus::TRAINING_CANCELLED;
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
          case ModelVersionStatus::NOT_SET:
            return {};
          case ModelVersionStatus::ACTIVE:
            return "ACTIVE";
          case ModelVersionStatus::INACTIVE:
            return "INACTIVE";
          case ModelVersionStatus::TRAINING_CANCELLED:
            return "TRAINING_CANCELLED";
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
