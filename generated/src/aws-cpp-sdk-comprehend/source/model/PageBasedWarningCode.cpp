/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/PageBasedWarningCode.h>
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
      namespace PageBasedWarningCodeMapper
      {

        static constexpr uint32_t INFERENCING_PLAINTEXT_WITH_NATIVE_TRAINED_MODEL_HASH = ConstExprHashingUtils::HashString("INFERENCING_PLAINTEXT_WITH_NATIVE_TRAINED_MODEL");
        static constexpr uint32_t INFERENCING_NATIVE_DOCUMENT_WITH_PLAINTEXT_TRAINED_MODEL_HASH = ConstExprHashingUtils::HashString("INFERENCING_NATIVE_DOCUMENT_WITH_PLAINTEXT_TRAINED_MODEL");


        PageBasedWarningCode GetPageBasedWarningCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INFERENCING_PLAINTEXT_WITH_NATIVE_TRAINED_MODEL_HASH)
          {
            return PageBasedWarningCode::INFERENCING_PLAINTEXT_WITH_NATIVE_TRAINED_MODEL;
          }
          else if (hashCode == INFERENCING_NATIVE_DOCUMENT_WITH_PLAINTEXT_TRAINED_MODEL_HASH)
          {
            return PageBasedWarningCode::INFERENCING_NATIVE_DOCUMENT_WITH_PLAINTEXT_TRAINED_MODEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PageBasedWarningCode>(hashCode);
          }

          return PageBasedWarningCode::NOT_SET;
        }

        Aws::String GetNameForPageBasedWarningCode(PageBasedWarningCode enumValue)
        {
          switch(enumValue)
          {
          case PageBasedWarningCode::NOT_SET:
            return {};
          case PageBasedWarningCode::INFERENCING_PLAINTEXT_WITH_NATIVE_TRAINED_MODEL:
            return "INFERENCING_PLAINTEXT_WITH_NATIVE_TRAINED_MODEL";
          case PageBasedWarningCode::INFERENCING_NATIVE_DOCUMENT_WITH_PLAINTEXT_TRAINED_MODEL:
            return "INFERENCING_NATIVE_DOCUMENT_WITH_PLAINTEXT_TRAINED_MODEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PageBasedWarningCodeMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
