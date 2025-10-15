/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IngestionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace IngestionStatusMapper
      {

        static const int initial_ingestion_in_progress_HASH = HashingUtils::HashString("initial-ingestion-in-progress");
        static const int ingestion_complete_HASH = HashingUtils::HashString("ingestion-complete");
        static const int ingestion_failed_HASH = HashingUtils::HashString("ingestion-failed");


        IngestionStatus GetIngestionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == initial_ingestion_in_progress_HASH)
          {
            return IngestionStatus::initial_ingestion_in_progress;
          }
          else if (hashCode == ingestion_complete_HASH)
          {
            return IngestionStatus::ingestion_complete;
          }
          else if (hashCode == ingestion_failed_HASH)
          {
            return IngestionStatus::ingestion_failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngestionStatus>(hashCode);
          }

          return IngestionStatus::NOT_SET;
        }

        Aws::String GetNameForIngestionStatus(IngestionStatus enumValue)
        {
          switch(enumValue)
          {
          case IngestionStatus::NOT_SET:
            return {};
          case IngestionStatus::initial_ingestion_in_progress:
            return "initial-ingestion-in-progress";
          case IngestionStatus::ingestion_complete:
            return "ingestion-complete";
          case IngestionStatus::ingestion_failed:
            return "ingestion-failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngestionStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
