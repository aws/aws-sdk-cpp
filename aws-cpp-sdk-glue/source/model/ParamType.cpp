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

        static const int str_HASH = HashingUtils::HashString("str");
        static const int int__HASH = HashingUtils::HashString("int");
        static const int float__HASH = HashingUtils::HashString("float");
        static const int complex_HASH = HashingUtils::HashString("complex");
        static const int bool__HASH = HashingUtils::HashString("bool");
        static const int list_HASH = HashingUtils::HashString("list");
        static const int null_HASH = HashingUtils::HashString("null");


        ParamType GetParamTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
