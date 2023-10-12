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

        static constexpr uint32_t INVALID_CUSTOMER_KEY_HASH = ConstExprHashingUtils::HashString("INVALID_CUSTOMER_KEY");
        static constexpr uint32_t INVALID_PAGE_TOKEN_HASH = ConstExprHashingUtils::HashString("INVALID_PAGE_TOKEN");
        static constexpr uint32_t INVALID_BLOCK_TOKEN_HASH = ConstExprHashingUtils::HashString("INVALID_BLOCK_TOKEN");
        static constexpr uint32_t INVALID_GRANT_TOKEN_HASH = ConstExprHashingUtils::HashString("INVALID_GRANT_TOKEN");
        static constexpr uint32_t INVALID_SNAPSHOT_ID_HASH = ConstExprHashingUtils::HashString("INVALID_SNAPSHOT_ID");
        static constexpr uint32_t UNRELATED_SNAPSHOTS_HASH = ConstExprHashingUtils::HashString("UNRELATED_SNAPSHOTS");
        static constexpr uint32_t INVALID_BLOCK_HASH = ConstExprHashingUtils::HashString("INVALID_BLOCK");
        static constexpr uint32_t INVALID_CONTENT_ENCODING_HASH = ConstExprHashingUtils::HashString("INVALID_CONTENT_ENCODING");
        static constexpr uint32_t INVALID_TAG_HASH = ConstExprHashingUtils::HashString("INVALID_TAG");
        static constexpr uint32_t INVALID_DEPENDENCY_REQUEST_HASH = ConstExprHashingUtils::HashString("INVALID_DEPENDENCY_REQUEST");
        static constexpr uint32_t INVALID_PARAMETER_VALUE_HASH = ConstExprHashingUtils::HashString("INVALID_PARAMETER_VALUE");
        static constexpr uint32_t INVALID_VOLUME_SIZE_HASH = ConstExprHashingUtils::HashString("INVALID_VOLUME_SIZE");
        static constexpr uint32_t CONFLICTING_BLOCK_UPDATE_HASH = ConstExprHashingUtils::HashString("CONFLICTING_BLOCK_UPDATE");
        static constexpr uint32_t INVALID_IMAGE_ID_HASH = ConstExprHashingUtils::HashString("INVALID_IMAGE_ID");
        static constexpr uint32_t WRITE_REQUEST_TIMEOUT_HASH = ConstExprHashingUtils::HashString("WRITE_REQUEST_TIMEOUT");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == INVALID_GRANT_TOKEN_HASH)
          {
            return ValidationExceptionReason::INVALID_GRANT_TOKEN;
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
          else if (hashCode == CONFLICTING_BLOCK_UPDATE_HASH)
          {
            return ValidationExceptionReason::CONFLICTING_BLOCK_UPDATE;
          }
          else if (hashCode == INVALID_IMAGE_ID_HASH)
          {
            return ValidationExceptionReason::INVALID_IMAGE_ID;
          }
          else if (hashCode == WRITE_REQUEST_TIMEOUT_HASH)
          {
            return ValidationExceptionReason::WRITE_REQUEST_TIMEOUT;
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
          case ValidationExceptionReason::NOT_SET:
            return {};
          case ValidationExceptionReason::INVALID_CUSTOMER_KEY:
            return "INVALID_CUSTOMER_KEY";
          case ValidationExceptionReason::INVALID_PAGE_TOKEN:
            return "INVALID_PAGE_TOKEN";
          case ValidationExceptionReason::INVALID_BLOCK_TOKEN:
            return "INVALID_BLOCK_TOKEN";
          case ValidationExceptionReason::INVALID_GRANT_TOKEN:
            return "INVALID_GRANT_TOKEN";
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
          case ValidationExceptionReason::CONFLICTING_BLOCK_UPDATE:
            return "CONFLICTING_BLOCK_UPDATE";
          case ValidationExceptionReason::INVALID_IMAGE_ID:
            return "INVALID_IMAGE_ID";
          case ValidationExceptionReason::WRITE_REQUEST_TIMEOUT:
            return "WRITE_REQUEST_TIMEOUT";
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
