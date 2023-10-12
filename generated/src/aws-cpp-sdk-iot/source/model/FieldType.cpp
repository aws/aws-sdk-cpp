/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/FieldType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace FieldTypeMapper
      {

        static constexpr uint32_t Number_HASH = ConstExprHashingUtils::HashString("Number");
        static constexpr uint32_t String_HASH = ConstExprHashingUtils::HashString("String");
        static constexpr uint32_t Boolean_HASH = ConstExprHashingUtils::HashString("Boolean");


        FieldType GetFieldTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Number_HASH)
          {
            return FieldType::Number;
          }
          else if (hashCode == String_HASH)
          {
            return FieldType::String;
          }
          else if (hashCode == Boolean_HASH)
          {
            return FieldType::Boolean;
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
          case FieldType::Number:
            return "Number";
          case FieldType::String:
            return "String";
          case FieldType::Boolean:
            return "Boolean";
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
  } // namespace IoT
} // namespace Aws
