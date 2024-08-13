/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TableAttributes.h>
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
      namespace TableAttributesMapper
      {

        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int TABLE_TYPE_HASH = HashingUtils::HashString("TABLE_TYPE");


        TableAttributes GetTableAttributesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return TableAttributes::NAME;
          }
          else if (hashCode == TABLE_TYPE_HASH)
          {
            return TableAttributes::TABLE_TYPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableAttributes>(hashCode);
          }

          return TableAttributes::NOT_SET;
        }

        Aws::String GetNameForTableAttributes(TableAttributes enumValue)
        {
          switch(enumValue)
          {
          case TableAttributes::NOT_SET:
            return {};
          case TableAttributes::NAME:
            return "NAME";
          case TableAttributes::TABLE_TYPE:
            return "TABLE_TYPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TableAttributesMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
