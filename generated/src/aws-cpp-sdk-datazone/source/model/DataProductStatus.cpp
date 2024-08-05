/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DataProductStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace DataProductStatusMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");


        DataProductStatus GetDataProductStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return DataProductStatus::CREATED;
          }
          else if (hashCode == CREATING_HASH)
          {
            return DataProductStatus::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return DataProductStatus::CREATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataProductStatus>(hashCode);
          }

          return DataProductStatus::NOT_SET;
        }

        Aws::String GetNameForDataProductStatus(DataProductStatus enumValue)
        {
          switch(enumValue)
          {
          case DataProductStatus::NOT_SET:
            return {};
          case DataProductStatus::CREATED:
            return "CREATED";
          case DataProductStatus::CREATING:
            return "CREATING";
          case DataProductStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataProductStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
