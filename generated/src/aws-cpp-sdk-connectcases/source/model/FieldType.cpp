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

        static constexpr uint32_t Text_HASH = ConstExprHashingUtils::HashString("Text");
        static constexpr uint32_t Number_HASH = ConstExprHashingUtils::HashString("Number");
        static constexpr uint32_t Boolean_HASH = ConstExprHashingUtils::HashString("Boolean");
        static constexpr uint32_t DateTime_HASH = ConstExprHashingUtils::HashString("DateTime");
        static constexpr uint32_t SingleSelect_HASH = ConstExprHashingUtils::HashString("SingleSelect");
        static constexpr uint32_t Url_HASH = ConstExprHashingUtils::HashString("Url");


        FieldType GetFieldTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == Url_HASH)
          {
            return FieldType::Url;
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
          case FieldType::NOT_SET:
            return {};
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
          case FieldType::Url:
            return "Url";
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
