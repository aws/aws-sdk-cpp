/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/IngestionJobStatus.h>
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
      namespace IngestionJobStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int IMPORT_IN_PROGRESS_HASH = HashingUtils::HashString("IMPORT_IN_PROGRESS");


        IngestionJobStatus GetIngestionJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return IngestionJobStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return IngestionJobStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return IngestionJobStatus::FAILED;
          }
          else if (hashCode == IMPORT_IN_PROGRESS_HASH)
          {
            return IngestionJobStatus::IMPORT_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngestionJobStatus>(hashCode);
          }

          return IngestionJobStatus::NOT_SET;
        }

        Aws::String GetNameForIngestionJobStatus(IngestionJobStatus enumValue)
        {
          switch(enumValue)
          {
          case IngestionJobStatus::NOT_SET:
            return {};
          case IngestionJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case IngestionJobStatus::SUCCESS:
            return "SUCCESS";
          case IngestionJobStatus::FAILED:
            return "FAILED";
          case IngestionJobStatus::IMPORT_IN_PROGRESS:
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

      } // namespace IngestionJobStatusMapper
    } // namespace Model
  } // namespace LookoutEquipment
} // namespace Aws
