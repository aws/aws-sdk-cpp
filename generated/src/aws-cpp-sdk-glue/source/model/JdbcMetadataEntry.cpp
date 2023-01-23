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

        static const int COMMENTS_HASH = HashingUtils::HashString("COMMENTS");
        static const int RAWTYPES_HASH = HashingUtils::HashString("RAWTYPES");


        JdbcMetadataEntry GetJdbcMetadataEntryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
