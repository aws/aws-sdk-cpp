/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DocumentAttributeValueType.h>
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
      namespace DocumentAttributeValueTypeMapper
      {

        static constexpr uint32_t STRING_VALUE_HASH = ConstExprHashingUtils::HashString("STRING_VALUE");
        static constexpr uint32_t STRING_LIST_VALUE_HASH = ConstExprHashingUtils::HashString("STRING_LIST_VALUE");
        static constexpr uint32_t LONG_VALUE_HASH = ConstExprHashingUtils::HashString("LONG_VALUE");
        static constexpr uint32_t DATE_VALUE_HASH = ConstExprHashingUtils::HashString("DATE_VALUE");


        DocumentAttributeValueType GetDocumentAttributeValueTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRING_VALUE_HASH)
          {
            return DocumentAttributeValueType::STRING_VALUE;
          }
          else if (hashCode == STRING_LIST_VALUE_HASH)
          {
            return DocumentAttributeValueType::STRING_LIST_VALUE;
          }
          else if (hashCode == LONG_VALUE_HASH)
          {
            return DocumentAttributeValueType::LONG_VALUE;
          }
          else if (hashCode == DATE_VALUE_HASH)
          {
            return DocumentAttributeValueType::DATE_VALUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentAttributeValueType>(hashCode);
          }

          return DocumentAttributeValueType::NOT_SET;
        }

        Aws::String GetNameForDocumentAttributeValueType(DocumentAttributeValueType enumValue)
        {
          switch(enumValue)
          {
          case DocumentAttributeValueType::NOT_SET:
            return {};
          case DocumentAttributeValueType::STRING_VALUE:
            return "STRING_VALUE";
          case DocumentAttributeValueType::STRING_LIST_VALUE:
            return "STRING_LIST_VALUE";
          case DocumentAttributeValueType::LONG_VALUE:
            return "LONG_VALUE";
          case DocumentAttributeValueType::DATE_VALUE:
            return "DATE_VALUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentAttributeValueTypeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
