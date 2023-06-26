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
        static const int REDSHIFT_DATA_SHARE_HASH = HashingUtils::HashString("REDSHIFT_DATA_SHARE");
        static const int API_GATEWAY_API_HASH = HashingUtils::HashString("API_GATEWAY_API");
        static const int S3_DATA_ACCESS_HASH = HashingUtils::HashString("S3_DATA_ACCESS");
        static const int LAKE_FORMATION_DATA_PERMISSION_HASH = HashingUtils::HashString("LAKE_FORMATION_DATA_PERMISSION");


        AssetType GetAssetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_SNAPSHOT_HASH)
          {
            return AssetType::S3_SNAPSHOT;
          }
          else if (hashCode == REDSHIFT_DATA_SHARE_HASH)
          {
            return AssetType::REDSHIFT_DATA_SHARE;
          }
          else if (hashCode == API_GATEWAY_API_HASH)
          {
            return AssetType::API_GATEWAY_API;
          }
          else if (hashCode == S3_DATA_ACCESS_HASH)
          {
            return AssetType::S3_DATA_ACCESS;
          }
          else if (hashCode == LAKE_FORMATION_DATA_PERMISSION_HASH)
          {
            return AssetType::LAKE_FORMATION_DATA_PERMISSION;
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
          case AssetType::REDSHIFT_DATA_SHARE:
            return "REDSHIFT_DATA_SHARE";
          case AssetType::API_GATEWAY_API:
            return "API_GATEWAY_API";
          case AssetType::S3_DATA_ACCESS:
            return "S3_DATA_ACCESS";
          case AssetType::LAKE_FORMATION_DATA_PERMISSION:
            return "LAKE_FORMATION_DATA_PERMISSION";
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
