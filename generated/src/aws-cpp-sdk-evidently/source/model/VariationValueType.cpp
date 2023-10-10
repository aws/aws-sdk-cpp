/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/VariationValueType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchEvidently
  {
    namespace Model
    {
      namespace VariationValueTypeMapper
      {

        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int LONG_HASH = HashingUtils::HashString("LONG");
        static const int DOUBLE_HASH = HashingUtils::HashString("DOUBLE");
        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");


        VariationValueType GetVariationValueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRING_HASH)
          {
            return VariationValueType::STRING;
          }
          else if (hashCode == LONG_HASH)
          {
            return VariationValueType::LONG;
          }
          else if (hashCode == DOUBLE_HASH)
          {
            return VariationValueType::DOUBLE;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return VariationValueType::BOOLEAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VariationValueType>(hashCode);
          }

          return VariationValueType::NOT_SET;
        }

        Aws::String GetNameForVariationValueType(VariationValueType enumValue)
        {
          switch(enumValue)
          {
          case VariationValueType::NOT_SET:
            return {};
          case VariationValueType::STRING:
            return "STRING";
          case VariationValueType::LONG:
            return "LONG";
          case VariationValueType::DOUBLE:
            return "DOUBLE";
          case VariationValueType::BOOLEAN:
            return "BOOLEAN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VariationValueTypeMapper
    } // namespace Model
  } // namespace CloudWatchEvidently
} // namespace Aws
