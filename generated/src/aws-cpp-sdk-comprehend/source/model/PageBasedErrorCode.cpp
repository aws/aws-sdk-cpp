/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/PageBasedErrorCode.h>
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
      namespace PageBasedErrorCodeMapper
      {

        static const int TEXTRACT_BAD_PAGE_HASH = HashingUtils::HashString("TEXTRACT_BAD_PAGE");
        static const int TEXTRACT_PROVISIONED_THROUGHPUT_EXCEEDED_HASH = HashingUtils::HashString("TEXTRACT_PROVISIONED_THROUGHPUT_EXCEEDED");
        static const int PAGE_CHARACTERS_EXCEEDED_HASH = HashingUtils::HashString("PAGE_CHARACTERS_EXCEEDED");
        static const int PAGE_SIZE_EXCEEDED_HASH = HashingUtils::HashString("PAGE_SIZE_EXCEEDED");
        static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVER_ERROR");


        PageBasedErrorCode GetPageBasedErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXTRACT_BAD_PAGE_HASH)
          {
            return PageBasedErrorCode::TEXTRACT_BAD_PAGE;
          }
          else if (hashCode == TEXTRACT_PROVISIONED_THROUGHPUT_EXCEEDED_HASH)
          {
            return PageBasedErrorCode::TEXTRACT_PROVISIONED_THROUGHPUT_EXCEEDED;
          }
          else if (hashCode == PAGE_CHARACTERS_EXCEEDED_HASH)
          {
            return PageBasedErrorCode::PAGE_CHARACTERS_EXCEEDED;
          }
          else if (hashCode == PAGE_SIZE_EXCEEDED_HASH)
          {
            return PageBasedErrorCode::PAGE_SIZE_EXCEEDED;
          }
          else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
          {
            return PageBasedErrorCode::INTERNAL_SERVER_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PageBasedErrorCode>(hashCode);
          }

          return PageBasedErrorCode::NOT_SET;
        }

        Aws::String GetNameForPageBasedErrorCode(PageBasedErrorCode enumValue)
        {
          switch(enumValue)
          {
          case PageBasedErrorCode::TEXTRACT_BAD_PAGE:
            return "TEXTRACT_BAD_PAGE";
          case PageBasedErrorCode::TEXTRACT_PROVISIONED_THROUGHPUT_EXCEEDED:
            return "TEXTRACT_PROVISIONED_THROUGHPUT_EXCEEDED";
          case PageBasedErrorCode::PAGE_CHARACTERS_EXCEEDED:
            return "PAGE_CHARACTERS_EXCEEDED";
          case PageBasedErrorCode::PAGE_SIZE_EXCEEDED:
            return "PAGE_SIZE_EXCEEDED";
          case PageBasedErrorCode::INTERNAL_SERVER_ERROR:
            return "INTERNAL_SERVER_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PageBasedErrorCodeMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
