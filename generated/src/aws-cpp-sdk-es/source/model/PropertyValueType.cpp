/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/PropertyValueType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace PropertyValueTypeMapper
      {

        static const int PLAIN_TEXT_HASH = HashingUtils::HashString("PLAIN_TEXT");
        static const int STRINGIFIED_JSON_HASH = HashingUtils::HashString("STRINGIFIED_JSON");


        PropertyValueType GetPropertyValueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PLAIN_TEXT_HASH)
          {
            return PropertyValueType::PLAIN_TEXT;
          }
          else if (hashCode == STRINGIFIED_JSON_HASH)
          {
            return PropertyValueType::STRINGIFIED_JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PropertyValueType>(hashCode);
          }

          return PropertyValueType::NOT_SET;
        }

        Aws::String GetNameForPropertyValueType(PropertyValueType enumValue)
        {
          switch(enumValue)
          {
          case PropertyValueType::NOT_SET:
            return {};
          case PropertyValueType::PLAIN_TEXT:
            return "PLAIN_TEXT";
          case PropertyValueType::STRINGIFIED_JSON:
            return "STRINGIFIED_JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PropertyValueTypeMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
