/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/AssetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataExchange
  {
    namespace Model
    {
      namespace AssetTypeMapper
      {

        static const int S3_SNAPSHOT_HASH = HashingUtils::HashString("S3_SNAPSHOT");


        AssetType GetAssetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_SNAPSHOT_HASH)
          {
            return AssetType::S3_SNAPSHOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetType>(hashCode);
          }

          return AssetType::NOT_SET;
        }

        Aws::String GetNameForAssetType(AssetType enumValue)
        {
          switch(enumValue)
          {
          case AssetType::S3_SNAPSHOT:
            return "S3_SNAPSHOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssetTypeMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws
