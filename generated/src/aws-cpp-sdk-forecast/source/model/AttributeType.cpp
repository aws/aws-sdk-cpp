/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/AttributeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ForecastService
  {
    namespace Model
    {
      namespace AttributeTypeMapper
      {

        static constexpr uint32_t string_HASH = ConstExprHashingUtils::HashString("string");
        static constexpr uint32_t integer_HASH = ConstExprHashingUtils::HashString("integer");
        static constexpr uint32_t float__HASH = ConstExprHashingUtils::HashString("float");
        static constexpr uint32_t timestamp_HASH = ConstExprHashingUtils::HashString("timestamp");
        static constexpr uint32_t geolocation_HASH = ConstExprHashingUtils::HashString("geolocation");


        AttributeType GetAttributeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == string_HASH)
          {
            return AttributeType::string;
          }
          else if (hashCode == integer_HASH)
          {
            return AttributeType::integer;
          }
          else if (hashCode == float__HASH)
          {
            return AttributeType::float_;
          }
          else if (hashCode == timestamp_HASH)
          {
            return AttributeType::timestamp;
          }
          else if (hashCode == geolocation_HASH)
          {
            return AttributeType::geolocation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttributeType>(hashCode);
          }

          return AttributeType::NOT_SET;
        }

        Aws::String GetNameForAttributeType(AttributeType enumValue)
        {
          switch(enumValue)
          {
          case AttributeType::NOT_SET:
            return {};
          case AttributeType::string:
            return "string";
          case AttributeType::integer:
            return "integer";
          case AttributeType::float_:
            return "float";
          case AttributeType::timestamp:
            return "timestamp";
          case AttributeType::geolocation:
            return "geolocation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttributeTypeMapper
    } // namespace Model
  } // namespace ForecastService
} // namespace Aws
