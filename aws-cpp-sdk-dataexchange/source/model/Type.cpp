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

        static const int IMPORT_ASSETS_FROM_S3_HASH = HashingUtils::HashString("IMPORT_ASSETS_FROM_S3");
        static const int IMPORT_ASSET_FROM_SIGNED_URL_HASH = HashingUtils::HashString("IMPORT_ASSET_FROM_SIGNED_URL");
        static const int EXPORT_ASSETS_TO_S3_HASH = HashingUtils::HashString("EXPORT_ASSETS_TO_S3");
        static const int EXPORT_ASSET_TO_SIGNED_URL_HASH = HashingUtils::HashString("EXPORT_ASSET_TO_SIGNED_URL");


        Type GetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          case Type::IMPORT_ASSETS_FROM_S3:
            return "IMPORT_ASSETS_FROM_S3";
          case Type::IMPORT_ASSET_FROM_SIGNED_URL:
            return "IMPORT_ASSET_FROM_SIGNED_URL";
          case Type::EXPORT_ASSETS_TO_S3:
            return "EXPORT_ASSETS_TO_S3";
          case Type::EXPORT_ASSET_TO_SIGNED_URL:
            return "EXPORT_ASSET_TO_SIGNED_URL";
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
