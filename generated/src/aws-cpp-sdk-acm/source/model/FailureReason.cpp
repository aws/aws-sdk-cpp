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

        static const int NO_AVAILABLE_CONTACTS_HASH = HashingUtils::HashString("NO_AVAILABLE_CONTACTS");
        static const int ADDITIONAL_VERIFICATION_REQUIRED_HASH = HashingUtils::HashString("ADDITIONAL_VERIFICATION_REQUIRED");
        static const int DOMAIN_NOT_ALLOWED_HASH = HashingUtils::HashString("DOMAIN_NOT_ALLOWED");
        static const int INVALID_PUBLIC_DOMAIN_HASH = HashingUtils::HashString("INVALID_PUBLIC_DOMAIN");
        static const int DOMAIN_VALIDATION_DENIED_HASH = HashingUtils::HashString("DOMAIN_VALIDATION_DENIED");
        static const int CAA_ERROR_HASH = HashingUtils::HashString("CAA_ERROR");
        static const int PCA_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("PCA_LIMIT_EXCEEDED");
        static const int PCA_INVALID_ARN_HASH = HashingUtils::HashString("PCA_INVALID_ARN");
        static const int PCA_INVALID_STATE_HASH = HashingUtils::HashString("PCA_INVALID_STATE");
        static const int PCA_REQUEST_FAILED_HASH = HashingUtils::HashString("PCA_REQUEST_FAILED");
        static const int PCA_NAME_CONSTRAINTS_VALIDATION_HASH = HashingUtils::HashString("PCA_NAME_CONSTRAINTS_VALIDATION");
        static const int PCA_RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("PCA_RESOURCE_NOT_FOUND");
        static const int PCA_INVALID_ARGS_HASH = HashingUtils::HashString("PCA_INVALID_ARGS");
        static const int PCA_INVALID_DURATION_HASH = HashingUtils::HashString("PCA_INVALID_DURATION");
        static const int PCA_ACCESS_DENIED_HASH = HashingUtils::HashString("PCA_ACCESS_DENIED");
        static const int SLR_NOT_FOUND_HASH = HashingUtils::HashString("SLR_NOT_FOUND");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        FailureReason GetFailureReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
