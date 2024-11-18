/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DatasetState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace DatasetStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        DatasetState GetDatasetStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return DatasetState::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return DatasetState::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return DatasetState::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return DatasetState::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DatasetState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatasetState>(hashCode);
          }

          return DatasetState::NOT_SET;
        }

        Aws::String GetNameForDatasetState(DatasetState enumValue)
        {
          switch(enumValue)
          {
          case DatasetState::NOT_SET:
            return {};
          case DatasetState::CREATING:
            return "CREATING";
          case DatasetState::ACTIVE:
            return "ACTIVE";
          case DatasetState::UPDATING:
            return "UPDATING";
          case DatasetState::DELETING:
            return "DELETING";
          case DatasetState::FAILED:
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

      } // namespace DatasetStateMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
