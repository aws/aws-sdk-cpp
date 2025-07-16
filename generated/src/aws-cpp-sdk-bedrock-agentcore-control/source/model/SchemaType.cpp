/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SchemaType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCoreControl
  {
    namespace Model
    {
      namespace SchemaTypeMapper
      {

        static const int string_HASH = HashingUtils::HashString("string");
        static const int number_HASH = HashingUtils::HashString("number");
        static const int object_HASH = HashingUtils::HashString("object");
        static const int array_HASH = HashingUtils::HashString("array");
        static const int boolean_HASH = HashingUtils::HashString("boolean");
        static const int integer_HASH = HashingUtils::HashString("integer");


        SchemaType GetSchemaTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == string_HASH)
          {
            return SchemaType::string;
          }
          else if (hashCode == number_HASH)
          {
            return SchemaType::number;
          }
          else if (hashCode == object_HASH)
          {
            return SchemaType::object;
          }
          else if (hashCode == array_HASH)
          {
            return SchemaType::array;
          }
          else if (hashCode == boolean_HASH)
          {
            return SchemaType::boolean;
          }
          else if (hashCode == integer_HASH)
          {
            return SchemaType::integer;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchemaType>(hashCode);
          }

          return SchemaType::NOT_SET;
        }

        Aws::String GetNameForSchemaType(SchemaType enumValue)
        {
          switch(enumValue)
          {
          case SchemaType::NOT_SET:
            return {};
          case SchemaType::string:
            return "string";
          case SchemaType::number:
            return "number";
          case SchemaType::object:
            return "object";
          case SchemaType::array:
            return "array";
          case SchemaType::boolean:
            return "boolean";
          case SchemaType::integer:
            return "integer";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchemaTypeMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
