/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/DataViewStatus.h>
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
      namespace DataViewStatusMapper
      {

        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t TIMEOUT_HASH = ConstExprHashingUtils::HashString("TIMEOUT");
        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t FAILED_CLEANUP_FAILED_HASH = ConstExprHashingUtils::HashString("FAILED_CLEANUP_FAILED");


        DataViewStatus GetDataViewStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return DataViewStatus::RUNNING;
          }
          else if (hashCode == STARTING_HASH)
          {
            return DataViewStatus::STARTING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DataViewStatus::FAILED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return DataViewStatus::CANCELLED;
          }
          else if (hashCode == TIMEOUT_HASH)
          {
            return DataViewStatus::TIMEOUT;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return DataViewStatus::SUCCESS;
          }
          else if (hashCode == PENDING_HASH)
          {
            return DataViewStatus::PENDING;
          }
          else if (hashCode == FAILED_CLEANUP_FAILED_HASH)
          {
            return DataViewStatus::FAILED_CLEANUP_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataViewStatus>(hashCode);
          }

          return DataViewStatus::NOT_SET;
        }

        Aws::String GetNameForDataViewStatus(DataViewStatus enumValue)
        {
          switch(enumValue)
          {
          case DataViewStatus::NOT_SET:
            return {};
          case DataViewStatus::RUNNING:
            return "RUNNING";
          case DataViewStatus::STARTING:
            return "STARTING";
          case DataViewStatus::FAILED:
            return "FAILED";
          case DataViewStatus::CANCELLED:
            return "CANCELLED";
          case DataViewStatus::TIMEOUT:
            return "TIMEOUT";
          case DataViewStatus::SUCCESS:
            return "SUCCESS";
          case DataViewStatus::PENDING:
            return "PENDING";
          case DataViewStatus::FAILED_CLEANUP_FAILED:
            return "FAILED_CLEANUP_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataViewStatusMapper
    } // namespace Model
  } // namespace FinSpaceData
} // namespace Aws
