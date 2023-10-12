/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ModelVersionStatus.h>
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
      namespace ModelVersionStatusMapper
      {

        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t IMPORT_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IMPORT_IN_PROGRESS");
        static constexpr uint32_t CANCELED_HASH = ConstExprHashingUtils::HashString("CANCELED");


        ModelVersionStatus GetModelVersionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ModelVersionStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return ModelVersionStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ModelVersionStatus::FAILED;
          }
          else if (hashCode == IMPORT_IN_PROGRESS_HASH)
          {
            return ModelVersionStatus::IMPORT_IN_PROGRESS;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return ModelVersionStatus::CANCELED;
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
          case ModelVersionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ModelVersionStatus::SUCCESS:
            return "SUCCESS";
          case ModelVersionStatus::FAILED:
            return "FAILED";
          case ModelVersionStatus::IMPORT_IN_PROGRESS:
            return "IMPORT_IN_PROGRESS";
          case ModelVersionStatus::CANCELED:
            return "CANCELED";
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
  } // namespace LookoutEquipment
} // namespace Aws
