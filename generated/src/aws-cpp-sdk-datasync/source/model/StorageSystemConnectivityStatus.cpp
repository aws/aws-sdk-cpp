/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/StorageSystemConnectivityStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace StorageSystemConnectivityStatusMapper
      {

        static const int PASS_HASH = HashingUtils::HashString("PASS");
        static const int FAIL_HASH = HashingUtils::HashString("FAIL");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        StorageSystemConnectivityStatus GetStorageSystemConnectivityStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASS_HASH)
          {
            return StorageSystemConnectivityStatus::PASS;
          }
          else if (hashCode == FAIL_HASH)
          {
            return StorageSystemConnectivityStatus::FAIL;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return StorageSystemConnectivityStatus::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageSystemConnectivityStatus>(hashCode);
          }

          return StorageSystemConnectivityStatus::NOT_SET;
        }

        Aws::String GetNameForStorageSystemConnectivityStatus(StorageSystemConnectivityStatus enumValue)
        {
          switch(enumValue)
          {
          case StorageSystemConnectivityStatus::NOT_SET:
            return {};
          case StorageSystemConnectivityStatus::PASS:
            return "PASS";
          case StorageSystemConnectivityStatus::FAIL:
            return "FAIL";
          case StorageSystemConnectivityStatus::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageSystemConnectivityStatusMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
