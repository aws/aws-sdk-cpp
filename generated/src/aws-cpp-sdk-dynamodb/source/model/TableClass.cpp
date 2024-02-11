/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/TableClass.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace TableClassMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int STANDARD_INFREQUENT_ACCESS_HASH = HashingUtils::HashString("STANDARD_INFREQUENT_ACCESS");


        TableClass GetTableClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return TableClass::STANDARD;
          }
          else if (hashCode == STANDARD_INFREQUENT_ACCESS_HASH)
          {
            return TableClass::STANDARD_INFREQUENT_ACCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableClass>(hashCode);
          }

          return TableClass::NOT_SET;
        }

        Aws::String GetNameForTableClass(TableClass enumValue)
        {
          switch(enumValue)
          {
          case TableClass::NOT_SET:
            return {};
          case TableClass::STANDARD:
            return "STANDARD";
          case TableClass::STANDARD_INFREQUENT_ACCESS:
            return "STANDARD_INFREQUENT_ACCESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TableClassMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
