/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DatasetStatus.h>
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
      namespace DatasetStatusMapper
      {

        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t INGESTION_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("INGESTION_IN_PROGRESS");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t IMPORT_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IMPORT_IN_PROGRESS");


        DatasetStatus GetDatasetStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return DatasetStatus::CREATED;
          }
          else if (hashCode == INGESTION_IN_PROGRESS_HASH)
          {
            return DatasetStatus::INGESTION_IN_PROGRESS;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return DatasetStatus::ACTIVE;
          }
          else if (hashCode == IMPORT_IN_PROGRESS_HASH)
          {
            return DatasetStatus::IMPORT_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatasetStatus>(hashCode);
          }

          return DatasetStatus::NOT_SET;
        }

        Aws::String GetNameForDatasetStatus(DatasetStatus enumValue)
        {
          switch(enumValue)
          {
          case DatasetStatus::NOT_SET:
            return {};
          case DatasetStatus::CREATED:
            return "CREATED";
          case DatasetStatus::INGESTION_IN_PROGRESS:
            return "INGESTION_IN_PROGRESS";
          case DatasetStatus::ACTIVE:
            return "ACTIVE";
          case DatasetStatus::IMPORT_IN_PROGRESS:
            return "IMPORT_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatasetStatusMapper
    } // namespace Model
  } // namespace LookoutEquipment
} // namespace Aws
