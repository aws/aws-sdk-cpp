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

#include <aws/organizations/model/ConstraintViolationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace ConstraintViolationExceptionReasonMapper
      {

        static const int ACCOUNT_NUMBER_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ACCOUNT_NUMBER_LIMIT_EXCEEDED");
        static const int HANDSHAKE_RATE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("HANDSHAKE_RATE_LIMIT_EXCEEDED");
        static const int OU_NUMBER_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("OU_NUMBER_LIMIT_EXCEEDED");
        static const int OU_DEPTH_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("OU_DEPTH_LIMIT_EXCEEDED");
        static const int POLICY_NUMBER_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("POLICY_NUMBER_LIMIT_EXCEEDED");
        static const int MAX_POLICY_TYPE_ATTACHMENT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("MAX_POLICY_TYPE_ATTACHMENT_LIMIT_EXCEEDED");
        static const int MIN_POLICY_TYPE_ATTACHMENT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("MIN_POLICY_TYPE_ATTACHMENT_LIMIT_EXCEEDED");
        static const int ACCOUNT_CANNOT_LEAVE_ORGANIZATION_HASH = HashingUtils::HashString("ACCOUNT_CANNOT_LEAVE_ORGANIZATION");
        static const int ACCOUNT_CANNOT_LEAVE_WITHOUT_EULA_HASH = HashingUtils::HashString("ACCOUNT_CANNOT_LEAVE_WITHOUT_EULA");
        static const int ACCOUNT_CANNOT_LEAVE_WITHOUT_PHONE_VERIFICATION_HASH = HashingUtils::HashString("ACCOUNT_CANNOT_LEAVE_WITHOUT_PHONE_VERIFICATION");
        static const int MASTER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED_HASH = HashingUtils::HashString("MASTER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED");
        static const int MEMBER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED_HASH = HashingUtils::HashString("MEMBER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED");
        static const int ACCOUNT_CREATION_RATE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ACCOUNT_CREATION_RATE_LIMIT_EXCEEDED");
        static const int MASTER_ACCOUNT_ADDRESS_DOES_NOT_MATCH_MARKETPLACE_HASH = HashingUtils::HashString("MASTER_ACCOUNT_ADDRESS_DOES_NOT_MATCH_MARKETPLACE");
        static const int MASTER_ACCOUNT_MISSING_CONTACT_INFO_HASH = HashingUtils::HashString("MASTER_ACCOUNT_MISSING_CONTACT_INFO");
        static const int MASTER_ACCOUNT_NOT_GOVCLOUD_ENABLED_HASH = HashingUtils::HashString("MASTER_ACCOUNT_NOT_GOVCLOUD_ENABLED");
        static const int ORGANIZATION_NOT_IN_ALL_FEATURES_MODE_HASH = HashingUtils::HashString("ORGANIZATION_NOT_IN_ALL_FEATURES_MODE");
        static const int CREATE_ORGANIZATION_IN_BILLING_MODE_UNSUPPORTED_REGION_HASH = HashingUtils::HashString("CREATE_ORGANIZATION_IN_BILLING_MODE_UNSUPPORTED_REGION");
        static const int EMAIL_VERIFICATION_CODE_EXPIRED_HASH = HashingUtils::HashString("EMAIL_VERIFICATION_CODE_EXPIRED");
        static const int WAIT_PERIOD_ACTIVE_HASH = HashingUtils::HashString("WAIT_PERIOD_ACTIVE");
        static const int MAX_TAG_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("MAX_TAG_LIMIT_EXCEEDED");
        static const int TAG_POLICY_VIOLATION_HASH = HashingUtils::HashString("TAG_POLICY_VIOLATION");


        ConstraintViolationExceptionReason GetConstraintViolationExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_NUMBER_LIMIT_EXCEEDED_HASH)
          {
            return ConstraintViolationExceptionReason::ACCOUNT_NUMBER_LIMIT_EXCEEDED;
          }
          else if (hashCode == HANDSHAKE_RATE_LIMIT_EXCEEDED_HASH)
          {
            return ConstraintViolationExceptionReason::HANDSHAKE_RATE_LIMIT_EXCEEDED;
          }
          else if (hashCode == OU_NUMBER_LIMIT_EXCEEDED_HASH)
          {
            return ConstraintViolationExceptionReason::OU_NUMBER_LIMIT_EXCEEDED;
          }
          else if (hashCode == OU_DEPTH_LIMIT_EXCEEDED_HASH)
          {
            return ConstraintViolationExceptionReason::OU_DEPTH_LIMIT_EXCEEDED;
          }
          else if (hashCode == POLICY_NUMBER_LIMIT_EXCEEDED_HASH)
          {
            return ConstraintViolationExceptionReason::POLICY_NUMBER_LIMIT_EXCEEDED;
          }
          else if (hashCode == MAX_POLICY_TYPE_ATTACHMENT_LIMIT_EXCEEDED_HASH)
          {
            return ConstraintViolationExceptionReason::MAX_POLICY_TYPE_ATTACHMENT_LIMIT_EXCEEDED;
          }
          else if (hashCode == MIN_POLICY_TYPE_ATTACHMENT_LIMIT_EXCEEDED_HASH)
          {
            return ConstraintViolationExceptionReason::MIN_POLICY_TYPE_ATTACHMENT_LIMIT_EXCEEDED;
          }
          else if (hashCode == ACCOUNT_CANNOT_LEAVE_ORGANIZATION_HASH)
          {
            return ConstraintViolationExceptionReason::ACCOUNT_CANNOT_LEAVE_ORGANIZATION;
          }
          else if (hashCode == ACCOUNT_CANNOT_LEAVE_WITHOUT_EULA_HASH)
          {
            return ConstraintViolationExceptionReason::ACCOUNT_CANNOT_LEAVE_WITHOUT_EULA;
          }
          else if (hashCode == ACCOUNT_CANNOT_LEAVE_WITHOUT_PHONE_VERIFICATION_HASH)
          {
            return ConstraintViolationExceptionReason::ACCOUNT_CANNOT_LEAVE_WITHOUT_PHONE_VERIFICATION;
          }
          else if (hashCode == MASTER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED_HASH)
          {
            return ConstraintViolationExceptionReason::MASTER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED;
          }
          else if (hashCode == MEMBER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED_HASH)
          {
            return ConstraintViolationExceptionReason::MEMBER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED;
          }
          else if (hashCode == ACCOUNT_CREATION_RATE_LIMIT_EXCEEDED_HASH)
          {
            return ConstraintViolationExceptionReason::ACCOUNT_CREATION_RATE_LIMIT_EXCEEDED;
          }
          else if (hashCode == MASTER_ACCOUNT_ADDRESS_DOES_NOT_MATCH_MARKETPLACE_HASH)
          {
            return ConstraintViolationExceptionReason::MASTER_ACCOUNT_ADDRESS_DOES_NOT_MATCH_MARKETPLACE;
          }
          else if (hashCode == MASTER_ACCOUNT_MISSING_CONTACT_INFO_HASH)
          {
            return ConstraintViolationExceptionReason::MASTER_ACCOUNT_MISSING_CONTACT_INFO;
          }
          else if (hashCode == MASTER_ACCOUNT_NOT_GOVCLOUD_ENABLED_HASH)
          {
            return ConstraintViolationExceptionReason::MASTER_ACCOUNT_NOT_GOVCLOUD_ENABLED;
          }
          else if (hashCode == ORGANIZATION_NOT_IN_ALL_FEATURES_MODE_HASH)
          {
            return ConstraintViolationExceptionReason::ORGANIZATION_NOT_IN_ALL_FEATURES_MODE;
          }
          else if (hashCode == CREATE_ORGANIZATION_IN_BILLING_MODE_UNSUPPORTED_REGION_HASH)
          {
            return ConstraintViolationExceptionReason::CREATE_ORGANIZATION_IN_BILLING_MODE_UNSUPPORTED_REGION;
          }
          else if (hashCode == EMAIL_VERIFICATION_CODE_EXPIRED_HASH)
          {
            return ConstraintViolationExceptionReason::EMAIL_VERIFICATION_CODE_EXPIRED;
          }
          else if (hashCode == WAIT_PERIOD_ACTIVE_HASH)
          {
            return ConstraintViolationExceptionReason::WAIT_PERIOD_ACTIVE;
          }
          else if (hashCode == MAX_TAG_LIMIT_EXCEEDED_HASH)
          {
            return ConstraintViolationExceptionReason::MAX_TAG_LIMIT_EXCEEDED;
          }
          else if (hashCode == TAG_POLICY_VIOLATION_HASH)
          {
            return ConstraintViolationExceptionReason::TAG_POLICY_VIOLATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConstraintViolationExceptionReason>(hashCode);
          }

          return ConstraintViolationExceptionReason::NOT_SET;
        }

        Aws::String GetNameForConstraintViolationExceptionReason(ConstraintViolationExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ConstraintViolationExceptionReason::ACCOUNT_NUMBER_LIMIT_EXCEEDED:
            return "ACCOUNT_NUMBER_LIMIT_EXCEEDED";
          case ConstraintViolationExceptionReason::HANDSHAKE_RATE_LIMIT_EXCEEDED:
            return "HANDSHAKE_RATE_LIMIT_EXCEEDED";
          case ConstraintViolationExceptionReason::OU_NUMBER_LIMIT_EXCEEDED:
            return "OU_NUMBER_LIMIT_EXCEEDED";
          case ConstraintViolationExceptionReason::OU_DEPTH_LIMIT_EXCEEDED:
            return "OU_DEPTH_LIMIT_EXCEEDED";
          case ConstraintViolationExceptionReason::POLICY_NUMBER_LIMIT_EXCEEDED:
            return "POLICY_NUMBER_LIMIT_EXCEEDED";
          case ConstraintViolationExceptionReason::MAX_POLICY_TYPE_ATTACHMENT_LIMIT_EXCEEDED:
            return "MAX_POLICY_TYPE_ATTACHMENT_LIMIT_EXCEEDED";
          case ConstraintViolationExceptionReason::MIN_POLICY_TYPE_ATTACHMENT_LIMIT_EXCEEDED:
            return "MIN_POLICY_TYPE_ATTACHMENT_LIMIT_EXCEEDED";
          case ConstraintViolationExceptionReason::ACCOUNT_CANNOT_LEAVE_ORGANIZATION:
            return "ACCOUNT_CANNOT_LEAVE_ORGANIZATION";
          case ConstraintViolationExceptionReason::ACCOUNT_CANNOT_LEAVE_WITHOUT_EULA:
            return "ACCOUNT_CANNOT_LEAVE_WITHOUT_EULA";
          case ConstraintViolationExceptionReason::ACCOUNT_CANNOT_LEAVE_WITHOUT_PHONE_VERIFICATION:
            return "ACCOUNT_CANNOT_LEAVE_WITHOUT_PHONE_VERIFICATION";
          case ConstraintViolationExceptionReason::MASTER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED:
            return "MASTER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED";
          case ConstraintViolationExceptionReason::MEMBER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED:
            return "MEMBER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED";
          case ConstraintViolationExceptionReason::ACCOUNT_CREATION_RATE_LIMIT_EXCEEDED:
            return "ACCOUNT_CREATION_RATE_LIMIT_EXCEEDED";
          case ConstraintViolationExceptionReason::MASTER_ACCOUNT_ADDRESS_DOES_NOT_MATCH_MARKETPLACE:
            return "MASTER_ACCOUNT_ADDRESS_DOES_NOT_MATCH_MARKETPLACE";
          case ConstraintViolationExceptionReason::MASTER_ACCOUNT_MISSING_CONTACT_INFO:
            return "MASTER_ACCOUNT_MISSING_CONTACT_INFO";
          case ConstraintViolationExceptionReason::MASTER_ACCOUNT_NOT_GOVCLOUD_ENABLED:
            return "MASTER_ACCOUNT_NOT_GOVCLOUD_ENABLED";
          case ConstraintViolationExceptionReason::ORGANIZATION_NOT_IN_ALL_FEATURES_MODE:
            return "ORGANIZATION_NOT_IN_ALL_FEATURES_MODE";
          case ConstraintViolationExceptionReason::CREATE_ORGANIZATION_IN_BILLING_MODE_UNSUPPORTED_REGION:
            return "CREATE_ORGANIZATION_IN_BILLING_MODE_UNSUPPORTED_REGION";
          case ConstraintViolationExceptionReason::EMAIL_VERIFICATION_CODE_EXPIRED:
            return "EMAIL_VERIFICATION_CODE_EXPIRED";
          case ConstraintViolationExceptionReason::WAIT_PERIOD_ACTIVE:
            return "WAIT_PERIOD_ACTIVE";
          case ConstraintViolationExceptionReason::MAX_TAG_LIMIT_EXCEEDED:
            return "MAX_TAG_LIMIT_EXCEEDED";
          case ConstraintViolationExceptionReason::TAG_POLICY_VIOLATION:
            return "TAG_POLICY_VIOLATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConstraintViolationExceptionReasonMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
