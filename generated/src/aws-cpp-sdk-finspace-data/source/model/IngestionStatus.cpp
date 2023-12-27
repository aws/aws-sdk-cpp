/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/IngestionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FinSpaceData
  {
    namespace Model
    {
      namespace IngestionStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STOP_REQUESTED_HASH = HashingUtils::HashString("STOP_REQUESTED");


        IngestionStatus GetIngestionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return IngestionStatus::PENDING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return IngestionStatus::FAILED;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return IngestionStatus::SUCCESS;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return IngestionStatus::RUNNING;
          }
          else if (hashCode == STOP_REQUESTED_HASH)
          {
            return IngestionStatus::STOP_REQUESTED;
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
          case IngestionStatus::PENDING:
            return "PENDING";
          case IngestionStatus::FAILED:
            return "FAILED";
          case IngestionStatus::SUCCESS:
            return "SUCCESS";
          case IngestionStatus::RUNNING:
            return "RUNNING";
          case IngestionStatus::STOP_REQUESTED:
            return "STOP_REQUESTED";
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
  } // namespace FinSpaceData
} // namespace Aws
