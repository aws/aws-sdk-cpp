/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/StorageCompressionFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetWise
  {
    namespace Model
    {
      namespace StorageCompressionFormatMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int GZIP_HASH = HashingUtils::HashString("GZIP");


        StorageCompressionFormat GetStorageCompressionFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return StorageCompressionFormat::NONE;
          }
          else if (hashCode == GZIP_HASH)
          {
            return StorageCompressionFormat::GZIP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageCompressionFormat>(hashCode);
          }

          return StorageCompressionFormat::NOT_SET;
        }

        Aws::String GetNameForStorageCompressionFormat(StorageCompressionFormat enumValue)
        {
          switch(enumValue)
          {
          case StorageCompressionFormat::NOT_SET:
            return {};
          case StorageCompressionFormat::NONE:
            return "NONE";
          case StorageCompressionFormat::GZIP:
            return "GZIP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageCompressionFormatMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
