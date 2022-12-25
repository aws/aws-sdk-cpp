/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/InvalidRequestReason.h>
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
      namespace InvalidRequestReasonMapper
      {

        static const int INVALID_DOCUMENT_HASH = HashingUtils::HashString("INVALID_DOCUMENT");


        InvalidRequestReason GetInvalidRequestReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_DOCUMENT_HASH)
          {
            return InvalidRequestReason::INVALID_DOCUMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InvalidRequestReason>(hashCode);
          }

          return InvalidRequestReason::NOT_SET;
        }

        Aws::String GetNameForInvalidRequestReason(InvalidRequestReason enumValue)
        {
          switch(enumValue)
          {
          case InvalidRequestReason::INVALID_DOCUMENT:
            return "INVALID_DOCUMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InvalidRequestReasonMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
