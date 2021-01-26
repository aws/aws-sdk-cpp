/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
        static const int INVALID_BLOCK_HASH = HashingUtils::HashString("INVALID_BLOCK");
        static const int INVALID_CONTENT_ENCODING_HASH = HashingUtils::HashString("INVALID_CONTENT_ENCODING");
        static const int INVALID_TAG_HASH = HashingUtils::HashString("INVALID_TAG");
        static const int INVALID_DEPENDENCY_REQUEST_HASH = HashingUtils::HashString("INVALID_DEPENDENCY_REQUEST");
        static const int INVALID_PARAMETER_VALUE_HASH = HashingUtils::HashString("INVALID_PARAMETER_VALUE");
        static const int INVALID_VOLUME_SIZE_HASH = HashingUtils::HashString("INVALID_VOLUME_SIZE");


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
          else if (hashCode == INVALID_BLOCK_HASH)
          {
            return ValidationExceptionReason::INVALID_BLOCK;
          }
          else if (hashCode == INVALID_CONTENT_ENCODING_HASH)
          {
            return ValidationExceptionReason::INVALID_CONTENT_ENCODING;
          }
          else if (hashCode == INVALID_TAG_HASH)
          {
            return ValidationExceptionReason::INVALID_TAG;
          }
          else if (hashCode == INVALID_DEPENDENCY_REQUEST_HASH)
          {
            return ValidationExceptionReason::INVALID_DEPENDENCY_REQUEST;
          }
          else if (hashCode == INVALID_PARAMETER_VALUE_HASH)
          {
            return ValidationExceptionReason::INVALID_PARAMETER_VALUE;
          }
          else if (hashCode == INVALID_VOLUME_SIZE_HASH)
          {
            return ValidationExceptionReason::INVALID_VOLUME_SIZE;
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
          case ValidationExceptionReason::INVALID_BLOCK:
            return "INVALID_BLOCK";
          case ValidationExceptionReason::INVALID_CONTENT_ENCODING:
            return "INVALID_CONTENT_ENCODING";
          case ValidationExceptionReason::INVALID_TAG:
            return "INVALID_TAG";
          case ValidationExceptionReason::INVALID_DEPENDENCY_REQUEST:
            return "INVALID_DEPENDENCY_REQUEST";
          case ValidationExceptionReason::INVALID_PARAMETER_VALUE:
            return "INVALID_PARAMETER_VALUE";
          case ValidationExceptionReason::INVALID_VOLUME_SIZE:
            return "INVALID_VOLUME_SIZE";
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
