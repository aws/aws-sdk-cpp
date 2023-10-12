/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DocumentReadAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace DocumentReadActionMapper
      {

        static constexpr uint32_t TEXTRACT_DETECT_DOCUMENT_TEXT_HASH = ConstExprHashingUtils::HashString("TEXTRACT_DETECT_DOCUMENT_TEXT");
        static constexpr uint32_t TEXTRACT_ANALYZE_DOCUMENT_HASH = ConstExprHashingUtils::HashString("TEXTRACT_ANALYZE_DOCUMENT");


        DocumentReadAction GetDocumentReadActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXTRACT_DETECT_DOCUMENT_TEXT_HASH)
          {
            return DocumentReadAction::TEXTRACT_DETECT_DOCUMENT_TEXT;
          }
          else if (hashCode == TEXTRACT_ANALYZE_DOCUMENT_HASH)
          {
            return DocumentReadAction::TEXTRACT_ANALYZE_DOCUMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentReadAction>(hashCode);
          }

          return DocumentReadAction::NOT_SET;
        }

        Aws::String GetNameForDocumentReadAction(DocumentReadAction enumValue)
        {
          switch(enumValue)
          {
          case DocumentReadAction::NOT_SET:
            return {};
          case DocumentReadAction::TEXTRACT_DETECT_DOCUMENT_TEXT:
            return "TEXTRACT_DETECT_DOCUMENT_TEXT";
          case DocumentReadAction::TEXTRACT_ANALYZE_DOCUMENT:
            return "TEXTRACT_ANALYZE_DOCUMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentReadActionMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
