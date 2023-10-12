/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/PropertyDataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace PropertyDataTypeMapper
      {

        static constexpr uint32_t STRING_HASH = ConstExprHashingUtils::HashString("STRING");
        static constexpr uint32_t INTEGER_HASH = ConstExprHashingUtils::HashString("INTEGER");
        static constexpr uint32_t DOUBLE_HASH = ConstExprHashingUtils::HashString("DOUBLE");
        static constexpr uint32_t BOOLEAN_HASH = ConstExprHashingUtils::HashString("BOOLEAN");
        static constexpr uint32_t STRUCT_HASH = ConstExprHashingUtils::HashString("STRUCT");


        PropertyDataType GetPropertyDataTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRING_HASH)
          {
            return PropertyDataType::STRING;
          }
          else if (hashCode == INTEGER_HASH)
          {
            return PropertyDataType::INTEGER;
          }
          else if (hashCode == DOUBLE_HASH)
          {
            return PropertyDataType::DOUBLE;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return PropertyDataType::BOOLEAN;
          }
          else if (hashCode == STRUCT_HASH)
          {
            return PropertyDataType::STRUCT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PropertyDataType>(hashCode);
          }

          return PropertyDataType::NOT_SET;
        }

        Aws::String GetNameForPropertyDataType(PropertyDataType enumValue)
        {
          switch(enumValue)
          {
          case PropertyDataType::NOT_SET:
            return {};
          case PropertyDataType::STRING:
            return "STRING";
          case PropertyDataType::INTEGER:
            return "INTEGER";
          case PropertyDataType::DOUBLE:
            return "DOUBLE";
          case PropertyDataType::BOOLEAN:
            return "BOOLEAN";
          case PropertyDataType::STRUCT:
            return "STRUCT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PropertyDataTypeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
