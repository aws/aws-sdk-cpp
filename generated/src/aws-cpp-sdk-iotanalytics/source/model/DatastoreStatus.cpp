/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DatastoreStatus.h>
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
      namespace DatastoreStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        DatastoreStatus GetDatastoreStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return DatastoreStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return DatastoreStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return DatastoreStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatastoreStatus>(hashCode);
          }

          return DatastoreStatus::NOT_SET;
        }

        Aws::String GetNameForDatastoreStatus(DatastoreStatus enumValue)
        {
          switch(enumValue)
          {
          case DatastoreStatus::CREATING:
            return "CREATING";
          case DatastoreStatus::ACTIVE:
            return "ACTIVE";
          case DatastoreStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatastoreStatusMapper
    } // namespace Model
  } // namespace IoTAnalytics
} // namespace Aws
