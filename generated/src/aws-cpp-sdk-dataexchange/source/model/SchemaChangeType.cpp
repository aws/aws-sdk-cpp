/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/SchemaChangeType.h>
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
      namespace SchemaChangeTypeMapper
      {

        static const int ADD_HASH = HashingUtils::HashString("ADD");
        static const int REMOVE_HASH = HashingUtils::HashString("REMOVE");
        static const int MODIFY_HASH = HashingUtils::HashString("MODIFY");


        SchemaChangeType GetSchemaChangeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADD_HASH)
          {
            return SchemaChangeType::ADD;
          }
          else if (hashCode == REMOVE_HASH)
          {
            return SchemaChangeType::REMOVE;
          }
          else if (hashCode == MODIFY_HASH)
          {
            return SchemaChangeType::MODIFY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchemaChangeType>(hashCode);
          }

          return SchemaChangeType::NOT_SET;
        }

        Aws::String GetNameForSchemaChangeType(SchemaChangeType enumValue)
        {
          switch(enumValue)
          {
          case SchemaChangeType::NOT_SET:
            return {};
          case SchemaChangeType::ADD:
            return "ADD";
          case SchemaChangeType::REMOVE:
            return "REMOVE";
          case SchemaChangeType::MODIFY:
            return "MODIFY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchemaChangeTypeMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws
