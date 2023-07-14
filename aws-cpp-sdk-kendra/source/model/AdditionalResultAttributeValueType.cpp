/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/AdditionalResultAttributeValueType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace AdditionalResultAttributeValueTypeMapper
      {

        static const int TEXT_WITH_HIGHLIGHTS_VALUE_HASH = HashingUtils::HashString("TEXT_WITH_HIGHLIGHTS_VALUE");


        AdditionalResultAttributeValueType GetAdditionalResultAttributeValueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXT_WITH_HIGHLIGHTS_VALUE_HASH)
          {
            return AdditionalResultAttributeValueType::TEXT_WITH_HIGHLIGHTS_VALUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdditionalResultAttributeValueType>(hashCode);
          }

          return AdditionalResultAttributeValueType::NOT_SET;
        }

        Aws::String GetNameForAdditionalResultAttributeValueType(AdditionalResultAttributeValueType enumValue)
        {
          switch(enumValue)
          {
          case AdditionalResultAttributeValueType::TEXT_WITH_HIGHLIGHTS_VALUE:
            return "TEXT_WITH_HIGHLIGHTS_VALUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdditionalResultAttributeValueTypeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
