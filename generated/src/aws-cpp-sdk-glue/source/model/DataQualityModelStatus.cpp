/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityModelStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace DataQualityModelStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        DataQualityModelStatus GetDataQualityModelStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return DataQualityModelStatus::RUNNING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return DataQualityModelStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DataQualityModelStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataQualityModelStatus>(hashCode);
          }

          return DataQualityModelStatus::NOT_SET;
        }

        Aws::String GetNameForDataQualityModelStatus(DataQualityModelStatus enumValue)
        {
          switch(enumValue)
          {
          case DataQualityModelStatus::NOT_SET:
            return {};
          case DataQualityModelStatus::RUNNING:
            return "RUNNING";
          case DataQualityModelStatus::SUCCEEDED:
            return "SUCCEEDED";
          case DataQualityModelStatus::FAILED:
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

      } // namespace DataQualityModelStatusMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
