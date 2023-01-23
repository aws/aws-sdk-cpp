/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/InvalidRequestDetailReason.h>
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
      namespace InvalidRequestDetailReasonMapper
      {

        static const int DOCUMENT_SIZE_EXCEEDED_HASH = HashingUtils::HashString("DOCUMENT_SIZE_EXCEEDED");
        static const int UNSUPPORTED_DOC_TYPE_HASH = HashingUtils::HashString("UNSUPPORTED_DOC_TYPE");
        static const int PAGE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("PAGE_LIMIT_EXCEEDED");
        static const int TEXTRACT_ACCESS_DENIED_HASH = HashingUtils::HashString("TEXTRACT_ACCESS_DENIED");


        InvalidRequestDetailReason GetInvalidRequestDetailReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOCUMENT_SIZE_EXCEEDED_HASH)
          {
            return InvalidRequestDetailReason::DOCUMENT_SIZE_EXCEEDED;
          }
          else if (hashCode == UNSUPPORTED_DOC_TYPE_HASH)
          {
            return InvalidRequestDetailReason::UNSUPPORTED_DOC_TYPE;
          }
          else if (hashCode == PAGE_LIMIT_EXCEEDED_HASH)
          {
            return InvalidRequestDetailReason::PAGE_LIMIT_EXCEEDED;
          }
          else if (hashCode == TEXTRACT_ACCESS_DENIED_HASH)
          {
            return InvalidRequestDetailReason::TEXTRACT_ACCESS_DENIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InvalidRequestDetailReason>(hashCode);
          }

          return InvalidRequestDetailReason::NOT_SET;
        }

        Aws::String GetNameForInvalidRequestDetailReason(InvalidRequestDetailReason enumValue)
        {
          switch(enumValue)
          {
          case InvalidRequestDetailReason::DOCUMENT_SIZE_EXCEEDED:
            return "DOCUMENT_SIZE_EXCEEDED";
          case InvalidRequestDetailReason::UNSUPPORTED_DOC_TYPE:
            return "UNSUPPORTED_DOC_TYPE";
          case InvalidRequestDetailReason::PAGE_LIMIT_EXCEEDED:
            return "PAGE_LIMIT_EXCEEDED";
          case InvalidRequestDetailReason::TEXTRACT_ACCESS_DENIED:
            return "TEXTRACT_ACCESS_DENIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InvalidRequestDetailReasonMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
