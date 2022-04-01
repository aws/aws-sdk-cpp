/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DatasetContentState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTAnalytics
  {
    namespace Model
    {
      namespace DatasetContentStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        DatasetContentState GetDatasetContentStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return DatasetContentState::CREATING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return DatasetContentState::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DatasetContentState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatasetContentState>(hashCode);
          }

          return DatasetContentState::NOT_SET;
        }

        Aws::String GetNameForDatasetContentState(DatasetContentState enumValue)
        {
          switch(enumValue)
          {
          case DatasetContentState::CREATING:
            return "CREATING";
          case DatasetContentState::SUCCEEDED:
            return "SUCCEEDED";
          case DatasetContentState::FAILED:
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

      } // namespace DatasetContentStateMapper
    } // namespace Model
  } // namespace IoTAnalytics
} // namespace Aws
