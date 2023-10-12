/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/NodeDataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetWise
  {
    namespace Model
    {
      namespace NodeDataTypeMapper
      {

        static constexpr uint32_t INT8_HASH = ConstExprHashingUtils::HashString("INT8");
        static constexpr uint32_t UINT8_HASH = ConstExprHashingUtils::HashString("UINT8");
        static constexpr uint32_t INT16_HASH = ConstExprHashingUtils::HashString("INT16");
        static constexpr uint32_t UINT16_HASH = ConstExprHashingUtils::HashString("UINT16");
        static constexpr uint32_t INT32_HASH = ConstExprHashingUtils::HashString("INT32");
        static constexpr uint32_t UINT32_HASH = ConstExprHashingUtils::HashString("UINT32");
        static constexpr uint32_t INT64_HASH = ConstExprHashingUtils::HashString("INT64");
        static constexpr uint32_t UINT64_HASH = ConstExprHashingUtils::HashString("UINT64");
        static constexpr uint32_t BOOLEAN_HASH = ConstExprHashingUtils::HashString("BOOLEAN");
        static constexpr uint32_t FLOAT_HASH = ConstExprHashingUtils::HashString("FLOAT");
        static constexpr uint32_t DOUBLE_HASH = ConstExprHashingUtils::HashString("DOUBLE");
        static constexpr uint32_t STRING_HASH = ConstExprHashingUtils::HashString("STRING");
        static constexpr uint32_t UNIX_TIMESTAMP_HASH = ConstExprHashingUtils::HashString("UNIX_TIMESTAMP");
        static constexpr uint32_t INT8_ARRAY_HASH = ConstExprHashingUtils::HashString("INT8_ARRAY");
        static constexpr uint32_t UINT8_ARRAY_HASH = ConstExprHashingUtils::HashString("UINT8_ARRAY");
        static constexpr uint32_t INT16_ARRAY_HASH = ConstExprHashingUtils::HashString("INT16_ARRAY");
        static constexpr uint32_t UINT16_ARRAY_HASH = ConstExprHashingUtils::HashString("UINT16_ARRAY");
        static constexpr uint32_t INT32_ARRAY_HASH = ConstExprHashingUtils::HashString("INT32_ARRAY");
        static constexpr uint32_t UINT32_ARRAY_HASH = ConstExprHashingUtils::HashString("UINT32_ARRAY");
        static constexpr uint32_t INT64_ARRAY_HASH = ConstExprHashingUtils::HashString("INT64_ARRAY");
        static constexpr uint32_t UINT64_ARRAY_HASH = ConstExprHashingUtils::HashString("UINT64_ARRAY");
        static constexpr uint32_t BOOLEAN_ARRAY_HASH = ConstExprHashingUtils::HashString("BOOLEAN_ARRAY");
        static constexpr uint32_t FLOAT_ARRAY_HASH = ConstExprHashingUtils::HashString("FLOAT_ARRAY");
        static constexpr uint32_t DOUBLE_ARRAY_HASH = ConstExprHashingUtils::HashString("DOUBLE_ARRAY");
        static constexpr uint32_t STRING_ARRAY_HASH = ConstExprHashingUtils::HashString("STRING_ARRAY");
        static constexpr uint32_t UNIX_TIMESTAMP_ARRAY_HASH = ConstExprHashingUtils::HashString("UNIX_TIMESTAMP_ARRAY");
        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");


        NodeDataType GetNodeDataTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INT8_HASH)
          {
            return NodeDataType::INT8;
          }
          else if (hashCode == UINT8_HASH)
          {
            return NodeDataType::UINT8;
          }
          else if (hashCode == INT16_HASH)
          {
            return NodeDataType::INT16;
          }
          else if (hashCode == UINT16_HASH)
          {
            return NodeDataType::UINT16;
          }
          else if (hashCode == INT32_HASH)
          {
            return NodeDataType::INT32;
          }
          else if (hashCode == UINT32_HASH)
          {
            return NodeDataType::UINT32;
          }
          else if (hashCode == INT64_HASH)
          {
            return NodeDataType::INT64;
          }
          else if (hashCode == UINT64_HASH)
          {
            return NodeDataType::UINT64;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return NodeDataType::BOOLEAN;
          }
          else if (hashCode == FLOAT_HASH)
          {
            return NodeDataType::FLOAT;
          }
          else if (hashCode == DOUBLE_HASH)
          {
            return NodeDataType::DOUBLE;
          }
          else if (hashCode == STRING_HASH)
          {
            return NodeDataType::STRING;
          }
          else if (hashCode == UNIX_TIMESTAMP_HASH)
          {
            return NodeDataType::UNIX_TIMESTAMP;
          }
          else if (hashCode == INT8_ARRAY_HASH)
          {
            return NodeDataType::INT8_ARRAY;
          }
          else if (hashCode == UINT8_ARRAY_HASH)
          {
            return NodeDataType::UINT8_ARRAY;
          }
          else if (hashCode == INT16_ARRAY_HASH)
          {
            return NodeDataType::INT16_ARRAY;
          }
          else if (hashCode == UINT16_ARRAY_HASH)
          {
            return NodeDataType::UINT16_ARRAY;
          }
          else if (hashCode == INT32_ARRAY_HASH)
          {
            return NodeDataType::INT32_ARRAY;
          }
          else if (hashCode == UINT32_ARRAY_HASH)
          {
            return NodeDataType::UINT32_ARRAY;
          }
          else if (hashCode == INT64_ARRAY_HASH)
          {
            return NodeDataType::INT64_ARRAY;
          }
          else if (hashCode == UINT64_ARRAY_HASH)
          {
            return NodeDataType::UINT64_ARRAY;
          }
          else if (hashCode == BOOLEAN_ARRAY_HASH)
          {
            return NodeDataType::BOOLEAN_ARRAY;
          }
          else if (hashCode == FLOAT_ARRAY_HASH)
          {
            return NodeDataType::FLOAT_ARRAY;
          }
          else if (hashCode == DOUBLE_ARRAY_HASH)
          {
            return NodeDataType::DOUBLE_ARRAY;
          }
          else if (hashCode == STRING_ARRAY_HASH)
          {
            return NodeDataType::STRING_ARRAY;
          }
          else if (hashCode == UNIX_TIMESTAMP_ARRAY_HASH)
          {
            return NodeDataType::UNIX_TIMESTAMP_ARRAY;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return NodeDataType::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeDataType>(hashCode);
          }

          return NodeDataType::NOT_SET;
        }

        Aws::String GetNameForNodeDataType(NodeDataType enumValue)
        {
          switch(enumValue)
          {
          case NodeDataType::NOT_SET:
            return {};
          case NodeDataType::INT8:
            return "INT8";
          case NodeDataType::UINT8:
            return "UINT8";
          case NodeDataType::INT16:
            return "INT16";
          case NodeDataType::UINT16:
            return "UINT16";
          case NodeDataType::INT32:
            return "INT32";
          case NodeDataType::UINT32:
            return "UINT32";
          case NodeDataType::INT64:
            return "INT64";
          case NodeDataType::UINT64:
            return "UINT64";
          case NodeDataType::BOOLEAN:
            return "BOOLEAN";
          case NodeDataType::FLOAT:
            return "FLOAT";
          case NodeDataType::DOUBLE:
            return "DOUBLE";
          case NodeDataType::STRING:
            return "STRING";
          case NodeDataType::UNIX_TIMESTAMP:
            return "UNIX_TIMESTAMP";
          case NodeDataType::INT8_ARRAY:
            return "INT8_ARRAY";
          case NodeDataType::UINT8_ARRAY:
            return "UINT8_ARRAY";
          case NodeDataType::INT16_ARRAY:
            return "INT16_ARRAY";
          case NodeDataType::UINT16_ARRAY:
            return "UINT16_ARRAY";
          case NodeDataType::INT32_ARRAY:
            return "INT32_ARRAY";
          case NodeDataType::UINT32_ARRAY:
            return "UINT32_ARRAY";
          case NodeDataType::INT64_ARRAY:
            return "INT64_ARRAY";
          case NodeDataType::UINT64_ARRAY:
            return "UINT64_ARRAY";
          case NodeDataType::BOOLEAN_ARRAY:
            return "BOOLEAN_ARRAY";
          case NodeDataType::FLOAT_ARRAY:
            return "FLOAT_ARRAY";
          case NodeDataType::DOUBLE_ARRAY:
            return "DOUBLE_ARRAY";
          case NodeDataType::STRING_ARRAY:
            return "STRING_ARRAY";
          case NodeDataType::UNIX_TIMESTAMP_ARRAY:
            return "UNIX_TIMESTAMP_ARRAY";
          case NodeDataType::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeDataTypeMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
