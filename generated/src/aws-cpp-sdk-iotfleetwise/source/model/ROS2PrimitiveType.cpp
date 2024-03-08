/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/ROS2PrimitiveType.h>
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
      namespace ROS2PrimitiveTypeMapper
      {

        static const int BOOL__HASH = HashingUtils::HashString("BOOL");
        static const int BYTE_HASH = HashingUtils::HashString("BYTE");
        static const int CHAR__HASH = HashingUtils::HashString("CHAR");
        static const int FLOAT32_HASH = HashingUtils::HashString("FLOAT32");
        static const int FLOAT64_HASH = HashingUtils::HashString("FLOAT64");
        static const int INT8_HASH = HashingUtils::HashString("INT8");
        static const int UINT8_HASH = HashingUtils::HashString("UINT8");
        static const int INT16_HASH = HashingUtils::HashString("INT16");
        static const int UINT16_HASH = HashingUtils::HashString("UINT16");
        static const int INT32_HASH = HashingUtils::HashString("INT32");
        static const int UINT32_HASH = HashingUtils::HashString("UINT32");
        static const int INT64_HASH = HashingUtils::HashString("INT64");
        static const int UINT64_HASH = HashingUtils::HashString("UINT64");
        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int WSTRING_HASH = HashingUtils::HashString("WSTRING");


        ROS2PrimitiveType GetROS2PrimitiveTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BOOL__HASH)
          {
            return ROS2PrimitiveType::BOOL_;
          }
          else if (hashCode == BYTE_HASH)
          {
            return ROS2PrimitiveType::BYTE;
          }
          else if (hashCode == CHAR__HASH)
          {
            return ROS2PrimitiveType::CHAR_;
          }
          else if (hashCode == FLOAT32_HASH)
          {
            return ROS2PrimitiveType::FLOAT32;
          }
          else if (hashCode == FLOAT64_HASH)
          {
            return ROS2PrimitiveType::FLOAT64;
          }
          else if (hashCode == INT8_HASH)
          {
            return ROS2PrimitiveType::INT8;
          }
          else if (hashCode == UINT8_HASH)
          {
            return ROS2PrimitiveType::UINT8;
          }
          else if (hashCode == INT16_HASH)
          {
            return ROS2PrimitiveType::INT16;
          }
          else if (hashCode == UINT16_HASH)
          {
            return ROS2PrimitiveType::UINT16;
          }
          else if (hashCode == INT32_HASH)
          {
            return ROS2PrimitiveType::INT32;
          }
          else if (hashCode == UINT32_HASH)
          {
            return ROS2PrimitiveType::UINT32;
          }
          else if (hashCode == INT64_HASH)
          {
            return ROS2PrimitiveType::INT64;
          }
          else if (hashCode == UINT64_HASH)
          {
            return ROS2PrimitiveType::UINT64;
          }
          else if (hashCode == STRING_HASH)
          {
            return ROS2PrimitiveType::STRING;
          }
          else if (hashCode == WSTRING_HASH)
          {
            return ROS2PrimitiveType::WSTRING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ROS2PrimitiveType>(hashCode);
          }

          return ROS2PrimitiveType::NOT_SET;
        }

        Aws::String GetNameForROS2PrimitiveType(ROS2PrimitiveType enumValue)
        {
          switch(enumValue)
          {
          case ROS2PrimitiveType::NOT_SET:
            return {};
          case ROS2PrimitiveType::BOOL_:
            return "BOOL";
          case ROS2PrimitiveType::BYTE:
            return "BYTE";
          case ROS2PrimitiveType::CHAR_:
            return "CHAR";
          case ROS2PrimitiveType::FLOAT32:
            return "FLOAT32";
          case ROS2PrimitiveType::FLOAT64:
            return "FLOAT64";
          case ROS2PrimitiveType::INT8:
            return "INT8";
          case ROS2PrimitiveType::UINT8:
            return "UINT8";
          case ROS2PrimitiveType::INT16:
            return "INT16";
          case ROS2PrimitiveType::UINT16:
            return "UINT16";
          case ROS2PrimitiveType::INT32:
            return "INT32";
          case ROS2PrimitiveType::UINT32:
            return "UINT32";
          case ROS2PrimitiveType::INT64:
            return "INT64";
          case ROS2PrimitiveType::UINT64:
            return "UINT64";
          case ROS2PrimitiveType::STRING:
            return "STRING";
          case ROS2PrimitiveType::WSTRING:
            return "WSTRING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ROS2PrimitiveTypeMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
