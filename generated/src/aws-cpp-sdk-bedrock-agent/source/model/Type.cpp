/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/Type.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace TypeMapper
      {

        static const int string_HASH = HashingUtils::HashString("string");
        static const int number_HASH = HashingUtils::HashString("number");
        static const int integer_HASH = HashingUtils::HashString("integer");
        static const int boolean_HASH = HashingUtils::HashString("boolean");
        static const int array_HASH = HashingUtils::HashString("array");


        Type GetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == string_HASH)
          {
            return Type::string;
          }
          else if (hashCode == number_HASH)
          {
            return Type::number;
          }
          else if (hashCode == integer_HASH)
          {
            return Type::integer;
          }
          else if (hashCode == boolean_HASH)
          {
            return Type::boolean;
          }
          else if (hashCode == array_HASH)
          {
            return Type::array;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Type>(hashCode);
          }

          return Type::NOT_SET;
        }

        Aws::String GetNameForType(Type enumValue)
        {
          switch(enumValue)
          {
          case Type::NOT_SET:
            return {};
          case Type::string:
            return "string";
          case Type::number:
            return "number";
          case Type::integer:
            return "integer";
          case Type::boolean:
            return "boolean";
          case Type::array:
            return "array";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
