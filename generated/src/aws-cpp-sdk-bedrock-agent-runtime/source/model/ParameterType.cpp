/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ParameterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentRuntime
  {
    namespace Model
    {
      namespace ParameterTypeMapper
      {

        static const int string_HASH = HashingUtils::HashString("string");
        static const int number_HASH = HashingUtils::HashString("number");
        static const int integer_HASH = HashingUtils::HashString("integer");
        static const int boolean_HASH = HashingUtils::HashString("boolean");
        static const int array_HASH = HashingUtils::HashString("array");


        ParameterType GetParameterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == string_HASH)
          {
            return ParameterType::string;
          }
          else if (hashCode == number_HASH)
          {
            return ParameterType::number;
          }
          else if (hashCode == integer_HASH)
          {
            return ParameterType::integer;
          }
          else if (hashCode == boolean_HASH)
          {
            return ParameterType::boolean;
          }
          else if (hashCode == array_HASH)
          {
            return ParameterType::array;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParameterType>(hashCode);
          }

          return ParameterType::NOT_SET;
        }

        Aws::String GetNameForParameterType(ParameterType enumValue)
        {
          switch(enumValue)
          {
          case ParameterType::NOT_SET:
            return {};
          case ParameterType::string:
            return "string";
          case ParameterType::number:
            return "number";
          case ParameterType::integer:
            return "integer";
          case ParameterType::boolean:
            return "boolean";
          case ParameterType::array:
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

      } // namespace ParameterTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
