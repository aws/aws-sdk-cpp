/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
