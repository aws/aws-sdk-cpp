/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SearchResourcesSortAttributeName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace SearchResourcesSortAttributeNameMapper
      {

        static constexpr uint32_t ACCOUNT_ID_HASH = ConstExprHashingUtils::HashString("ACCOUNT_ID");
        static constexpr uint32_t RESOURCE_NAME_HASH = ConstExprHashingUtils::HashString("RESOURCE_NAME");
        static constexpr uint32_t S3_CLASSIFIABLE_OBJECT_COUNT_HASH = ConstExprHashingUtils::HashString("S3_CLASSIFIABLE_OBJECT_COUNT");
        static constexpr uint32_t S3_CLASSIFIABLE_SIZE_IN_BYTES_HASH = ConstExprHashingUtils::HashString("S3_CLASSIFIABLE_SIZE_IN_BYTES");


        SearchResourcesSortAttributeName GetSearchResourcesSortAttributeNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_ID_HASH)
          {
            return SearchResourcesSortAttributeName::ACCOUNT_ID;
          }
          else if (hashCode == RESOURCE_NAME_HASH)
          {
            return SearchResourcesSortAttributeName::RESOURCE_NAME;
          }
          else if (hashCode == S3_CLASSIFIABLE_OBJECT_COUNT_HASH)
          {
            return SearchResourcesSortAttributeName::S3_CLASSIFIABLE_OBJECT_COUNT;
          }
          else if (hashCode == S3_CLASSIFIABLE_SIZE_IN_BYTES_HASH)
          {
            return SearchResourcesSortAttributeName::S3_CLASSIFIABLE_SIZE_IN_BYTES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchResourcesSortAttributeName>(hashCode);
          }

          return SearchResourcesSortAttributeName::NOT_SET;
        }

        Aws::String GetNameForSearchResourcesSortAttributeName(SearchResourcesSortAttributeName enumValue)
        {
          switch(enumValue)
          {
          case SearchResourcesSortAttributeName::NOT_SET:
            return {};
          case SearchResourcesSortAttributeName::ACCOUNT_ID:
            return "ACCOUNT_ID";
          case SearchResourcesSortAttributeName::RESOURCE_NAME:
            return "RESOURCE_NAME";
          case SearchResourcesSortAttributeName::S3_CLASSIFIABLE_OBJECT_COUNT:
            return "S3_CLASSIFIABLE_OBJECT_COUNT";
          case SearchResourcesSortAttributeName::S3_CLASSIFIABLE_SIZE_IN_BYTES:
            return "S3_CLASSIFIABLE_SIZE_IN_BYTES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SearchResourcesSortAttributeNameMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
