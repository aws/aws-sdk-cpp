/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyBuildDocumentContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace AutomatedReasoningPolicyBuildDocumentContentTypeMapper
      {

        static const int pdf_HASH = HashingUtils::HashString("pdf");
        static const int txt_HASH = HashingUtils::HashString("txt");


        AutomatedReasoningPolicyBuildDocumentContentType GetAutomatedReasoningPolicyBuildDocumentContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pdf_HASH)
          {
            return AutomatedReasoningPolicyBuildDocumentContentType::pdf;
          }
          else if (hashCode == txt_HASH)
          {
            return AutomatedReasoningPolicyBuildDocumentContentType::txt;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomatedReasoningPolicyBuildDocumentContentType>(hashCode);
          }

          return AutomatedReasoningPolicyBuildDocumentContentType::NOT_SET;
        }

        Aws::String GetNameForAutomatedReasoningPolicyBuildDocumentContentType(AutomatedReasoningPolicyBuildDocumentContentType enumValue)
        {
          switch(enumValue)
          {
          case AutomatedReasoningPolicyBuildDocumentContentType::NOT_SET:
            return {};
          case AutomatedReasoningPolicyBuildDocumentContentType::pdf:
            return "pdf";
          case AutomatedReasoningPolicyBuildDocumentContentType::txt:
            return "txt";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomatedReasoningPolicyBuildDocumentContentTypeMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
