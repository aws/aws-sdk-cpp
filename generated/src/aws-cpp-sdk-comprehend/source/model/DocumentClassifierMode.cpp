/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DocumentClassifierMode.h>
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
      namespace DocumentClassifierModeMapper
      {

        static constexpr uint32_t MULTI_CLASS_HASH = ConstExprHashingUtils::HashString("MULTI_CLASS");
        static constexpr uint32_t MULTI_LABEL_HASH = ConstExprHashingUtils::HashString("MULTI_LABEL");


        DocumentClassifierMode GetDocumentClassifierModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MULTI_CLASS_HASH)
          {
            return DocumentClassifierMode::MULTI_CLASS;
          }
          else if (hashCode == MULTI_LABEL_HASH)
          {
            return DocumentClassifierMode::MULTI_LABEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentClassifierMode>(hashCode);
          }

          return DocumentClassifierMode::NOT_SET;
        }

        Aws::String GetNameForDocumentClassifierMode(DocumentClassifierMode enumValue)
        {
          switch(enumValue)
          {
          case DocumentClassifierMode::NOT_SET:
            return {};
          case DocumentClassifierMode::MULTI_CLASS:
            return "MULTI_CLASS";
          case DocumentClassifierMode::MULTI_LABEL:
            return "MULTI_LABEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentClassifierModeMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
