/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/DatasetStatus.h>
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
      namespace DatasetStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");


        DatasetStatus GetDatasetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return DatasetStatus::PENDING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DatasetStatus::FAILED;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return DatasetStatus::SUCCESS;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return DatasetStatus::RUNNING;
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
          case DatasetStatus::PENDING:
            return "PENDING";
          case DatasetStatus::FAILED:
            return "FAILED";
          case DatasetStatus::SUCCESS:
            return "SUCCESS";
          case DatasetStatus::RUNNING:
            return "RUNNING";
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
  } // namespace FinSpaceData
} // namespace Aws
