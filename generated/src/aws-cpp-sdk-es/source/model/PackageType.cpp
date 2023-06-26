/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/PackageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace PackageTypeMapper
      {

        static const int TXT_DICTIONARY_HASH = HashingUtils::HashString("TXT-DICTIONARY");


        PackageType GetPackageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TXT_DICTIONARY_HASH)
          {
            return PackageType::TXT_DICTIONARY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageType>(hashCode);
          }

          return PackageType::NOT_SET;
        }

        Aws::String GetNameForPackageType(PackageType enumValue)
        {
          switch(enumValue)
          {
          case PackageType::TXT_DICTIONARY:
            return "TXT-DICTIONARY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PackageTypeMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
