/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/FieldType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectCases
  {
    namespace Model
    {
      namespace FieldTypeMapper
      {

        static const int Text_HASH = HashingUtils::HashString("Text");
        static const int Number_HASH = HashingUtils::HashString("Number");
        static const int Boolean_HASH = HashingUtils::HashString("Boolean");
        static const int DateTime_HASH = HashingUtils::HashString("DateTime");
        static const int SingleSelect_HASH = HashingUtils::HashString("SingleSelect");


        FieldType GetFieldTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Text_HASH)
          {
            return FieldType::Text;
          }
          else if (hashCode == Number_HASH)
          {
            return FieldType::Number;
          }
          else if (hashCode == Boolean_HASH)
          {
            return FieldType::Boolean;
          }
          else if (hashCode == DateTime_HASH)
          {
            return FieldType::DateTime;
          }
          else if (hashCode == SingleSelect_HASH)
          {
            return FieldType::SingleSelect;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FieldType>(hashCode);
          }

          return FieldType::NOT_SET;
        }

        Aws::String GetNameForFieldType(FieldType enumValue)
        {
          switch(enumValue)
          {
          case FieldType::Text:
            return "Text";
          case FieldType::Number:
            return "Number";
          case FieldType::Boolean:
            return "Boolean";
          case FieldType::DateTime:
            return "DateTime";
          case FieldType::SingleSelect:
            return "SingleSelect";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FieldTypeMapper
    } // namespace Model
  } // namespace ConnectCases
} // namespace Aws
