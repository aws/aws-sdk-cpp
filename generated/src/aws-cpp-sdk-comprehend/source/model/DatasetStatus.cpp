/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DatasetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace DatasetStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        DatasetStatus GetDatasetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return DatasetStatus::CREATING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return DatasetStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DatasetStatus::FAILED;
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
          case DatasetStatus::CREATING:
            return "CREATING";
          case DatasetStatus::COMPLETED:
            return "COMPLETED";
          case DatasetStatus::FAILED:
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

      } // namespace DatasetStatusMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
