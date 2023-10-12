/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/FailureReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACM
  {
    namespace Model
    {
      namespace FailureReasonMapper
      {

        static constexpr uint32_t NO_AVAILABLE_CONTACTS_HASH = ConstExprHashingUtils::HashString("NO_AVAILABLE_CONTACTS");
        static constexpr uint32_t ADDITIONAL_VERIFICATION_REQUIRED_HASH = ConstExprHashingUtils::HashString("ADDITIONAL_VERIFICATION_REQUIRED");
        static constexpr uint32_t DOMAIN_NOT_ALLOWED_HASH = ConstExprHashingUtils::HashString("DOMAIN_NOT_ALLOWED");
        static constexpr uint32_t INVALID_PUBLIC_DOMAIN_HASH = ConstExprHashingUtils::HashString("INVALID_PUBLIC_DOMAIN");
        static constexpr uint32_t DOMAIN_VALIDATION_DENIED_HASH = ConstExprHashingUtils::HashString("DOMAIN_VALIDATION_DENIED");
        static constexpr uint32_t CAA_ERROR_HASH = ConstExprHashingUtils::HashString("CAA_ERROR");
        static constexpr uint32_t PCA_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("PCA_LIMIT_EXCEEDED");
        static constexpr uint32_t PCA_INVALID_ARN_HASH = ConstExprHashingUtils::HashString("PCA_INVALID_ARN");
        static constexpr uint32_t PCA_INVALID_STATE_HASH = ConstExprHashingUtils::HashString("PCA_INVALID_STATE");
        static constexpr uint32_t PCA_REQUEST_FAILED_HASH = ConstExprHashingUtils::HashString("PCA_REQUEST_FAILED");
        static constexpr uint32_t PCA_NAME_CONSTRAINTS_VALIDATION_HASH = ConstExprHashingUtils::HashString("PCA_NAME_CONSTRAINTS_VALIDATION");
        static constexpr uint32_t PCA_RESOURCE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("PCA_RESOURCE_NOT_FOUND");
        static constexpr uint32_t PCA_INVALID_ARGS_HASH = ConstExprHashingUtils::HashString("PCA_INVALID_ARGS");
        static constexpr uint32_t PCA_INVALID_DURATION_HASH = ConstExprHashingUtils::HashString("PCA_INVALID_DURATION");
        static constexpr uint32_t PCA_ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("PCA_ACCESS_DENIED");
        static constexpr uint32_t SLR_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("SLR_NOT_FOUND");
        static constexpr uint32_t OTHER_HASH = ConstExprHashingUtils::HashString("OTHER");


        FailureReason GetFailureReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_AVAILABLE_CONTACTS_HASH)
          {
            return FailureReason::NO_AVAILABLE_CONTACTS;
          }
          else if (hashCode == ADDITIONAL_VERIFICATION_REQUIRED_HASH)
          {
            return FailureReason::ADDITIONAL_VERIFICATION_REQUIRED;
          }
          else if (hashCode == DOMAIN_NOT_ALLOWED_HASH)
          {
            return FailureReason::DOMAIN_NOT_ALLOWED;
          }
          else if (hashCode == INVALID_PUBLIC_DOMAIN_HASH)
          {
            return FailureReason::INVALID_PUBLIC_DOMAIN;
          }
          else if (hashCode == DOMAIN_VALIDATION_DENIED_HASH)
          {
            return FailureReason::DOMAIN_VALIDATION_DENIED;
          }
          else if (hashCode == CAA_ERROR_HASH)
          {
            return FailureReason::CAA_ERROR;
          }
          else if (hashCode == PCA_LIMIT_EXCEEDED_HASH)
          {
            return FailureReason::PCA_LIMIT_EXCEEDED;
          }
          else if (hashCode == PCA_INVALID_ARN_HASH)
          {
            return FailureReason::PCA_INVALID_ARN;
          }
          else if (hashCode == PCA_INVALID_STATE_HASH)
          {
            return FailureReason::PCA_INVALID_STATE;
          }
          else if (hashCode == PCA_REQUEST_FAILED_HASH)
          {
            return FailureReason::PCA_REQUEST_FAILED;
          }
          else if (hashCode == PCA_NAME_CONSTRAINTS_VALIDATION_HASH)
          {
            return FailureReason::PCA_NAME_CONSTRAINTS_VALIDATION;
          }
          else if (hashCode == PCA_RESOURCE_NOT_FOUND_HASH)
          {
            return FailureReason::PCA_RESOURCE_NOT_FOUND;
          }
          else if (hashCode == PCA_INVALID_ARGS_HASH)
          {
            return FailureReason::PCA_INVALID_ARGS;
          }
          else if (hashCode == PCA_INVALID_DURATION_HASH)
          {
            return FailureReason::PCA_INVALID_DURATION;
          }
          else if (hashCode == PCA_ACCESS_DENIED_HASH)
          {
            return FailureReason::PCA_ACCESS_DENIED;
          }
          else if (hashCode == SLR_NOT_FOUND_HASH)
          {
            return FailureReason::SLR_NOT_FOUND;
          }
          else if (hashCode == OTHER_HASH)
          {
            return FailureReason::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailureReason>(hashCode);
          }

          return FailureReason::NOT_SET;
        }

        Aws::String GetNameForFailureReason(FailureReason enumValue)
        {
          switch(enumValue)
          {
          case FailureReason::NOT_SET:
            return {};
          case FailureReason::NO_AVAILABLE_CONTACTS:
            return "NO_AVAILABLE_CONTACTS";
          case FailureReason::ADDITIONAL_VERIFICATION_REQUIRED:
            return "ADDITIONAL_VERIFICATION_REQUIRED";
          case FailureReason::DOMAIN_NOT_ALLOWED:
            return "DOMAIN_NOT_ALLOWED";
          case FailureReason::INVALID_PUBLIC_DOMAIN:
            return "INVALID_PUBLIC_DOMAIN";
          case FailureReason::DOMAIN_VALIDATION_DENIED:
            return "DOMAIN_VALIDATION_DENIED";
          case FailureReason::CAA_ERROR:
            return "CAA_ERROR";
          case FailureReason::PCA_LIMIT_EXCEEDED:
            return "PCA_LIMIT_EXCEEDED";
          case FailureReason::PCA_INVALID_ARN:
            return "PCA_INVALID_ARN";
          case FailureReason::PCA_INVALID_STATE:
            return "PCA_INVALID_STATE";
          case FailureReason::PCA_REQUEST_FAILED:
            return "PCA_REQUEST_FAILED";
          case FailureReason::PCA_NAME_CONSTRAINTS_VALIDATION:
            return "PCA_NAME_CONSTRAINTS_VALIDATION";
          case FailureReason::PCA_RESOURCE_NOT_FOUND:
            return "PCA_RESOURCE_NOT_FOUND";
          case FailureReason::PCA_INVALID_ARGS:
            return "PCA_INVALID_ARGS";
          case FailureReason::PCA_INVALID_DURATION:
            return "PCA_INVALID_DURATION";
          case FailureReason::PCA_ACCESS_DENIED:
            return "PCA_ACCESS_DENIED";
          case FailureReason::SLR_NOT_FOUND:
            return "SLR_NOT_FOUND";
          case FailureReason::OTHER:
            return "OTHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FailureReasonMapper
    } // namespace Model
  } // namespace ACM
} // namespace Aws
