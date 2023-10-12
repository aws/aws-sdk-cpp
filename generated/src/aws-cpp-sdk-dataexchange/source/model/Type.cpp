/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/Type.h>
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
      namespace TypeMapper
      {

        static constexpr uint32_t IMPORT_ASSETS_FROM_S3_HASH = ConstExprHashingUtils::HashString("IMPORT_ASSETS_FROM_S3");
        static constexpr uint32_t IMPORT_ASSET_FROM_SIGNED_URL_HASH = ConstExprHashingUtils::HashString("IMPORT_ASSET_FROM_SIGNED_URL");
        static constexpr uint32_t EXPORT_ASSETS_TO_S3_HASH = ConstExprHashingUtils::HashString("EXPORT_ASSETS_TO_S3");
        static constexpr uint32_t EXPORT_ASSET_TO_SIGNED_URL_HASH = ConstExprHashingUtils::HashString("EXPORT_ASSET_TO_SIGNED_URL");
        static constexpr uint32_t EXPORT_REVISIONS_TO_S3_HASH = ConstExprHashingUtils::HashString("EXPORT_REVISIONS_TO_S3");
        static constexpr uint32_t IMPORT_ASSETS_FROM_REDSHIFT_DATA_SHARES_HASH = ConstExprHashingUtils::HashString("IMPORT_ASSETS_FROM_REDSHIFT_DATA_SHARES");
        static constexpr uint32_t IMPORT_ASSET_FROM_API_GATEWAY_API_HASH = ConstExprHashingUtils::HashString("IMPORT_ASSET_FROM_API_GATEWAY_API");
        static constexpr uint32_t CREATE_S3_DATA_ACCESS_FROM_S3_BUCKET_HASH = ConstExprHashingUtils::HashString("CREATE_S3_DATA_ACCESS_FROM_S3_BUCKET");
        static constexpr uint32_t IMPORT_ASSETS_FROM_LAKE_FORMATION_TAG_POLICY_HASH = ConstExprHashingUtils::HashString("IMPORT_ASSETS_FROM_LAKE_FORMATION_TAG_POLICY");


        Type GetTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMPORT_ASSETS_FROM_S3_HASH)
          {
            return Type::IMPORT_ASSETS_FROM_S3;
          }
          else if (hashCode == IMPORT_ASSET_FROM_SIGNED_URL_HASH)
          {
            return Type::IMPORT_ASSET_FROM_SIGNED_URL;
          }
          else if (hashCode == EXPORT_ASSETS_TO_S3_HASH)
          {
            return Type::EXPORT_ASSETS_TO_S3;
          }
          else if (hashCode == EXPORT_ASSET_TO_SIGNED_URL_HASH)
          {
            return Type::EXPORT_ASSET_TO_SIGNED_URL;
          }
          else if (hashCode == EXPORT_REVISIONS_TO_S3_HASH)
          {
            return Type::EXPORT_REVISIONS_TO_S3;
          }
          else if (hashCode == IMPORT_ASSETS_FROM_REDSHIFT_DATA_SHARES_HASH)
          {
            return Type::IMPORT_ASSETS_FROM_REDSHIFT_DATA_SHARES;
          }
          else if (hashCode == IMPORT_ASSET_FROM_API_GATEWAY_API_HASH)
          {
            return Type::IMPORT_ASSET_FROM_API_GATEWAY_API;
          }
          else if (hashCode == CREATE_S3_DATA_ACCESS_FROM_S3_BUCKET_HASH)
          {
            return Type::CREATE_S3_DATA_ACCESS_FROM_S3_BUCKET;
          }
          else if (hashCode == IMPORT_ASSETS_FROM_LAKE_FORMATION_TAG_POLICY_HASH)
          {
            return Type::IMPORT_ASSETS_FROM_LAKE_FORMATION_TAG_POLICY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Type>(hashCode);
          }

          return Type::NOT_SET;
        }

        Aws::String GetNameForType(Type enumValue)
        {
          switch(enumValue)
          {
          case Type::NOT_SET:
            return {};
          case Type::IMPORT_ASSETS_FROM_S3:
            return "IMPORT_ASSETS_FROM_S3";
          case Type::IMPORT_ASSET_FROM_SIGNED_URL:
            return "IMPORT_ASSET_FROM_SIGNED_URL";
          case Type::EXPORT_ASSETS_TO_S3:
            return "EXPORT_ASSETS_TO_S3";
          case Type::EXPORT_ASSET_TO_SIGNED_URL:
            return "EXPORT_ASSET_TO_SIGNED_URL";
          case Type::EXPORT_REVISIONS_TO_S3:
            return "EXPORT_REVISIONS_TO_S3";
          case Type::IMPORT_ASSETS_FROM_REDSHIFT_DATA_SHARES:
            return "IMPORT_ASSETS_FROM_REDSHIFT_DATA_SHARES";
          case Type::IMPORT_ASSET_FROM_API_GATEWAY_API:
            return "IMPORT_ASSET_FROM_API_GATEWAY_API";
          case Type::CREATE_S3_DATA_ACCESS_FROM_S3_BUCKET:
            return "CREATE_S3_DATA_ACCESS_FROM_S3_BUCKET";
          case Type::IMPORT_ASSETS_FROM_LAKE_FORMATION_TAG_POLICY:
            return "IMPORT_ASSETS_FROM_LAKE_FORMATION_TAG_POLICY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TypeMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws
