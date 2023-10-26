/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/StorageType.h>
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
      namespace StorageTypeMapper
      {

        static const int SITEWISE_DEFAULT_STORAGE_HASH = HashingUtils::HashString("SITEWISE_DEFAULT_STORAGE");
        static const int MULTI_LAYER_STORAGE_HASH = HashingUtils::HashString("MULTI_LAYER_STORAGE");


        StorageType GetStorageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SITEWISE_DEFAULT_STORAGE_HASH)
          {
            return StorageType::SITEWISE_DEFAULT_STORAGE;
          }
          else if (hashCode == MULTI_LAYER_STORAGE_HASH)
          {
            return StorageType::MULTI_LAYER_STORAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageType>(hashCode);
          }

          return StorageType::NOT_SET;
        }

        Aws::String GetNameForStorageType(StorageType enumValue)
        {
          switch(enumValue)
          {
          case StorageType::NOT_SET:
            return {};
          case StorageType::SITEWISE_DEFAULT_STORAGE:
            return "SITEWISE_DEFAULT_STORAGE";
          case StorageType::MULTI_LAYER_STORAGE:
            return "MULTI_LAYER_STORAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageTypeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
