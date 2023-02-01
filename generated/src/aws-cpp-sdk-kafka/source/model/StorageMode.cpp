/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/StorageMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Kafka
  {
    namespace Model
    {
      namespace StorageModeMapper
      {

        static const int LOCAL_HASH = HashingUtils::HashString("LOCAL");
        static const int TIERED_HASH = HashingUtils::HashString("TIERED");


        StorageMode GetStorageModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOCAL_HASH)
          {
            return StorageMode::LOCAL;
          }
          else if (hashCode == TIERED_HASH)
          {
            return StorageMode::TIERED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageMode>(hashCode);
          }

          return StorageMode::NOT_SET;
        }

        Aws::String GetNameForStorageMode(StorageMode enumValue)
        {
          switch(enumValue)
          {
          case StorageMode::LOCAL:
            return "LOCAL";
          case StorageMode::TIERED:
            return "TIERED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageModeMapper
    } // namespace Model
  } // namespace Kafka
} // namespace Aws
