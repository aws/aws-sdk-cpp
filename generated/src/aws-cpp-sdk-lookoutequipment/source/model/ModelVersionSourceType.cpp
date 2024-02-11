/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ModelVersionSourceType.h>
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
      namespace ModelVersionSourceTypeMapper
      {

        static const int TRAINING_HASH = HashingUtils::HashString("TRAINING");
        static const int RETRAINING_HASH = HashingUtils::HashString("RETRAINING");
        static const int IMPORT_HASH = HashingUtils::HashString("IMPORT");


        ModelVersionSourceType GetModelVersionSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRAINING_HASH)
          {
            return ModelVersionSourceType::TRAINING;
          }
          else if (hashCode == RETRAINING_HASH)
          {
            return ModelVersionSourceType::RETRAINING;
          }
          else if (hashCode == IMPORT_HASH)
          {
            return ModelVersionSourceType::IMPORT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelVersionSourceType>(hashCode);
          }

          return ModelVersionSourceType::NOT_SET;
        }

        Aws::String GetNameForModelVersionSourceType(ModelVersionSourceType enumValue)
        {
          switch(enumValue)
          {
          case ModelVersionSourceType::NOT_SET:
            return {};
          case ModelVersionSourceType::TRAINING:
            return "TRAINING";
          case ModelVersionSourceType::RETRAINING:
            return "RETRAINING";
          case ModelVersionSourceType::IMPORT:
            return "IMPORT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelVersionSourceTypeMapper
    } // namespace Model
  } // namespace LookoutEquipment
} // namespace Aws
