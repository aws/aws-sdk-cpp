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
          case IngestionJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case IngestionJobStatus::SUCCESS:
            return "SUCCESS";
          case IngestionJobStatus::FAILED:
            return "FAILED";
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
