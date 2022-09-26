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

        static const int INT8_HASH = HashingUtils::HashString("INT8");
        static const int UINT8_HASH = HashingUtils::HashString("UINT8");
        static const int INT16_HASH = HashingUtils::HashString("INT16");
        static const int UINT16_HASH = HashingUtils::HashString("UINT16");
        static const int INT32_HASH = HashingUtils::HashString("INT32");
        static const int UINT32_HASH = HashingUtils::HashString("UINT32");
        static const int INT64_HASH = HashingUtils::HashString("INT64");
        static const int UINT64_HASH = HashingUtils::HashString("UINT64");
        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
        static const int FLOAT_HASH = HashingUtils::HashString("FLOAT");
        static const int DOUBLE_HASH = HashingUtils::HashString("DOUBLE");
        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int UNIX_TIMESTAMP_HASH = HashingUtils::HashString("UNIX_TIMESTAMP");
        static const int INT8_ARRAY_HASH = HashingUtils::HashString("INT8_ARRAY");
        static const int UINT8_ARRAY_HASH = HashingUtils::HashString("UINT8_ARRAY");
        static const int INT16_ARRAY_HASH = HashingUtils::HashString("INT16_ARRAY");
        static const int UINT16_ARRAY_HASH = HashingUtils::HashString("UINT16_ARRAY");
        static const int INT32_ARRAY_HASH = HashingUtils::HashString("INT32_ARRAY");
        static const int UINT32_ARRAY_HASH = HashingUtils::HashString("UINT32_ARRAY");
        static const int INT64_ARRAY_HASH = HashingUtils::HashString("INT64_ARRAY");
        static const int UINT64_ARRAY_HASH = HashingUtils::HashString("UINT64_ARRAY");
        static const int BOOLEAN_ARRAY_HASH = HashingUtils::HashString("BOOLEAN_ARRAY");
        static const int FLOAT_ARRAY_HASH = HashingUtils::HashString("FLOAT_ARRAY");
        static const int DOUBLE_ARRAY_HASH = HashingUtils::HashString("DOUBLE_ARRAY");
        static const int STRING_ARRAY_HASH = HashingUtils::HashString("STRING_ARRAY");
        static const int UNIX_TIMESTAMP_ARRAY_HASH = HashingUtils::HashString("UNIX_TIMESTAMP_ARRAY");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        NodeDataType GetNodeDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
