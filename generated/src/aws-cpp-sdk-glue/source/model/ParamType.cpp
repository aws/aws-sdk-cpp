/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ParamType.h>
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
      namespace ParamTypeMapper
      {

        static constexpr uint32_t str_HASH = ConstExprHashingUtils::HashString("str");
        static constexpr uint32_t int__HASH = ConstExprHashingUtils::HashString("int");
        static constexpr uint32_t float__HASH = ConstExprHashingUtils::HashString("float");
        static constexpr uint32_t complex_HASH = ConstExprHashingUtils::HashString("complex");
        static constexpr uint32_t bool__HASH = ConstExprHashingUtils::HashString("bool");
        static constexpr uint32_t list_HASH = ConstExprHashingUtils::HashString("list");
        static constexpr uint32_t null_HASH = ConstExprHashingUtils::HashString("null");


        ParamType GetParamTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == str_HASH)
          {
            return ParamType::str;
          }
          else if (hashCode == int__HASH)
          {
            return ParamType::int_;
          }
          else if (hashCode == float__HASH)
          {
            return ParamType::float_;
          }
          else if (hashCode == complex_HASH)
          {
            return ParamType::complex;
          }
          else if (hashCode == bool__HASH)
          {
            return ParamType::bool_;
          }
          else if (hashCode == list_HASH)
          {
            return ParamType::list;
          }
          else if (hashCode == null_HASH)
          {
            return ParamType::null;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParamType>(hashCode);
          }

          return ParamType::NOT_SET;
        }

        Aws::String GetNameForParamType(ParamType enumValue)
        {
          switch(enumValue)
          {
          case ParamType::NOT_SET:
            return {};
          case ParamType::str:
            return "str";
          case ParamType::int_:
            return "int";
          case ParamType::float_:
            return "float";
          case ParamType::complex:
            return "complex";
          case ParamType::bool_:
            return "bool";
          case ParamType::list:
            return "list";
          case ParamType::null:
            return "null";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParamTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
