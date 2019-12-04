/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ebs/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EBS
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static const int INVALID_CUSTOMER_KEY_HASH = HashingUtils::HashString("INVALID_CUSTOMER_KEY");
        static const int INVALID_PAGE_TOKEN_HASH = HashingUtils::HashString("INVALID_PAGE_TOKEN");
        static const int INVALID_BLOCK_TOKEN_HASH = HashingUtils::HashString("INVALID_BLOCK_TOKEN");
        static const int INVALID_SNAPSHOT_ID_HASH = HashingUtils::HashString("INVALID_SNAPSHOT_ID");
        static const int UNRELATED_SNAPSHOTS_HASH = HashingUtils::HashString("UNRELATED_SNAPSHOTS");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_CUSTOMER_KEY_HASH)
          {
            return ValidationExceptionReason::INVALID_CUSTOMER_KEY;
          }
          else if (hashCode == INVALID_PAGE_TOKEN_HASH)
          {
            return ValidationExceptionReason::INVALID_PAGE_TOKEN;
          }
          else if (hashCode == INVALID_BLOCK_TOKEN_HASH)
          {
            return ValidationExceptionReason::INVALID_BLOCK_TOKEN;
          }
          else if (hashCode == INVALID_SNAPSHOT_ID_HASH)
          {
            return ValidationExceptionReason::INVALID_SNAPSHOT_ID;
          }
          else if (hashCode == UNRELATED_SNAPSHOTS_HASH)
          {
            return ValidationExceptionReason::UNRELATED_SNAPSHOTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationExceptionReason>(hashCode);
          }

          return ValidationExceptionReason::NOT_SET;
        }

        Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ValidationExceptionReason::INVALID_CUSTOMER_KEY:
            return "INVALID_CUSTOMER_KEY";
          case ValidationExceptionReason::INVALID_PAGE_TOKEN:
            return "INVALID_PAGE_TOKEN";
          case ValidationExceptionReason::INVALID_BLOCK_TOKEN:
            return "INVALID_BLOCK_TOKEN";
          case ValidationExceptionReason::INVALID_SNAPSHOT_ID:
            return "INVALID_SNAPSHOT_ID";
          case ValidationExceptionReason::UNRELATED_SNAPSHOTS:
            return "UNRELATED_SNAPSHOTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidationExceptionReasonMapper
    } // namespace Model
  } // namespace EBS
} // namespace Aws
