/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/JdbcMetadataEntry.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace JdbcMetadataEntryMapper
      {

        static constexpr uint32_t COMMENTS_HASH = ConstExprHashingUtils::HashString("COMMENTS");
        static constexpr uint32_t RAWTYPES_HASH = ConstExprHashingUtils::HashString("RAWTYPES");


        JdbcMetadataEntry GetJdbcMetadataEntryForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMMENTS_HASH)
          {
            return JdbcMetadataEntry::COMMENTS;
          }
          else if (hashCode == RAWTYPES_HASH)
          {
            return JdbcMetadataEntry::RAWTYPES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JdbcMetadataEntry>(hashCode);
          }

          return JdbcMetadataEntry::NOT_SET;
        }

        Aws::String GetNameForJdbcMetadataEntry(JdbcMetadataEntry enumValue)
        {
          switch(enumValue)
          {
          case JdbcMetadataEntry::NOT_SET:
            return {};
          case JdbcMetadataEntry::COMMENTS:
            return "COMMENTS";
          case JdbcMetadataEntry::RAWTYPES:
            return "RAWTYPES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JdbcMetadataEntryMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
