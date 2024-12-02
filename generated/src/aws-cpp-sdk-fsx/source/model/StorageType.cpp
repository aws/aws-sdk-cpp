/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/StorageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace StorageTypeMapper
      {

        static const int SSD_HASH = HashingUtils::HashString("SSD");
        static const int HDD_HASH = HashingUtils::HashString("HDD");
        static const int INTELLIGENT_TIERING_HASH = HashingUtils::HashString("INTELLIGENT_TIERING");


        StorageType GetStorageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSD_HASH)
          {
            return StorageType::SSD;
          }
          else if (hashCode == HDD_HASH)
          {
            return StorageType::HDD;
          }
          else if (hashCode == INTELLIGENT_TIERING_HASH)
          {
            return StorageType::INTELLIGENT_TIERING;
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
          case StorageType::SSD:
            return "SSD";
          case StorageType::HDD:
            return "HDD";
          case StorageType::INTELLIGENT_TIERING:
            return "INTELLIGENT_TIERING";
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
  } // namespace FSx
} // namespace Aws
