/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FlowNodeIODataType.h>
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
      namespace FlowNodeIODataTypeMapper
      {

        static const int String_HASH = HashingUtils::HashString("String");
        static const int Number_HASH = HashingUtils::HashString("Number");
        static const int Boolean_HASH = HashingUtils::HashString("Boolean");
        static const int Object_HASH = HashingUtils::HashString("Object");
        static const int Array_HASH = HashingUtils::HashString("Array");


        FlowNodeIODataType GetFlowNodeIODataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == String_HASH)
          {
            return FlowNodeIODataType::String;
          }
          else if (hashCode == Number_HASH)
          {
            return FlowNodeIODataType::Number;
          }
          else if (hashCode == Boolean_HASH)
          {
            return FlowNodeIODataType::Boolean;
          }
          else if (hashCode == Object_HASH)
          {
            return FlowNodeIODataType::Object;
          }
          else if (hashCode == Array_HASH)
          {
            return FlowNodeIODataType::Array;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowNodeIODataType>(hashCode);
          }

          return FlowNodeIODataType::NOT_SET;
        }

        Aws::String GetNameForFlowNodeIODataType(FlowNodeIODataType enumValue)
        {
          switch(enumValue)
          {
          case FlowNodeIODataType::NOT_SET:
            return {};
          case FlowNodeIODataType::String:
            return "String";
          case FlowNodeIODataType::Number:
            return "Number";
          case FlowNodeIODataType::Boolean:
            return "Boolean";
          case FlowNodeIODataType::Object:
            return "Object";
          case FlowNodeIODataType::Array:
            return "Array";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowNodeIODataTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
