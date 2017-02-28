/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/organizations/model/HandshakeConstraintViolationExceptionReason.h>
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
      namespace HandshakeConstraintViolationExceptionReasonMapper
      {

        static const int ACCOUNT_NUMBER_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ACCOUNT_NUMBER_LIMIT_EXCEEDED");
        static const int HANDSHAKE_RATE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("HANDSHAKE_RATE_LIMIT_EXCEEDED");
        static const int ALREADY_IN_AN_ORGANIZATION_HASH = HashingUtils::HashString("ALREADY_IN_AN_ORGANIZATION");
        static const int ORGANIZATION_ALREADY_HAS_ALL_FEATURES_HASH = HashingUtils::HashString("ORGANIZATION_ALREADY_HAS_ALL_FEATURES");
        static const int INVITE_DISABLED_DURING_ENABLE_ALL_FEATURES_HASH = HashingUtils::HashString("INVITE_DISABLED_DURING_ENABLE_ALL_FEATURES");
        static const int PAYMENT_INSTRUMENT_REQUIRED_HASH = HashingUtils::HashString("PAYMENT_INSTRUMENT_REQUIRED");
        static const int ORGANIZATION_FROM_DIFFERENT_SELLER_OF_RECORD_HASH = HashingUtils::HashString("ORGANIZATION_FROM_DIFFERENT_SELLER_OF_RECORD");
        static const int ORGANIZATION_MEMBERSHIP_CHANGE_RATE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ORGANIZATION_MEMBERSHIP_CHANGE_RATE_LIMIT_EXCEEDED");


        HandshakeConstraintViolationExceptionReason GetHandshakeConstraintViolationExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_NUMBER_LIMIT_EXCEEDED_HASH)
          {
            return HandshakeConstraintViolationExceptionReason::ACCOUNT_NUMBER_LIMIT_EXCEEDED;
          }
          else if (hashCode == HANDSHAKE_RATE_LIMIT_EXCEEDED_HASH)
          {
            return HandshakeConstraintViolationExceptionReason::HANDSHAKE_RATE_LIMIT_EXCEEDED;
          }
          else if (hashCode == ALREADY_IN_AN_ORGANIZATION_HASH)
          {
            return HandshakeConstraintViolationExceptionReason::ALREADY_IN_AN_ORGANIZATION;
          }
          else if (hashCode == ORGANIZATION_ALREADY_HAS_ALL_FEATURES_HASH)
          {
            return HandshakeConstraintViolationExceptionReason::ORGANIZATION_ALREADY_HAS_ALL_FEATURES;
          }
          else if (hashCode == INVITE_DISABLED_DURING_ENABLE_ALL_FEATURES_HASH)
          {
            return HandshakeConstraintViolationExceptionReason::INVITE_DISABLED_DURING_ENABLE_ALL_FEATURES;
          }
          else if (hashCode == PAYMENT_INSTRUMENT_REQUIRED_HASH)
          {
            return HandshakeConstraintViolationExceptionReason::PAYMENT_INSTRUMENT_REQUIRED;
          }
          else if (hashCode == ORGANIZATION_FROM_DIFFERENT_SELLER_OF_RECORD_HASH)
          {
            return HandshakeConstraintViolationExceptionReason::ORGANIZATION_FROM_DIFFERENT_SELLER_OF_RECORD;
          }
          else if (hashCode == ORGANIZATION_MEMBERSHIP_CHANGE_RATE_LIMIT_EXCEEDED_HASH)
          {
            return HandshakeConstraintViolationExceptionReason::ORGANIZATION_MEMBERSHIP_CHANGE_RATE_LIMIT_EXCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HandshakeConstraintViolationExceptionReason>(hashCode);
          }

          return HandshakeConstraintViolationExceptionReason::NOT_SET;
        }

        Aws::String GetNameForHandshakeConstraintViolationExceptionReason(HandshakeConstraintViolationExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case HandshakeConstraintViolationExceptionReason::ACCOUNT_NUMBER_LIMIT_EXCEEDED:
            return "ACCOUNT_NUMBER_LIMIT_EXCEEDED";
          case HandshakeConstraintViolationExceptionReason::HANDSHAKE_RATE_LIMIT_EXCEEDED:
            return "HANDSHAKE_RATE_LIMIT_EXCEEDED";
          case HandshakeConstraintViolationExceptionReason::ALREADY_IN_AN_ORGANIZATION:
            return "ALREADY_IN_AN_ORGANIZATION";
          case HandshakeConstraintViolationExceptionReason::ORGANIZATION_ALREADY_HAS_ALL_FEATURES:
            return "ORGANIZATION_ALREADY_HAS_ALL_FEATURES";
          case HandshakeConstraintViolationExceptionReason::INVITE_DISABLED_DURING_ENABLE_ALL_FEATURES:
            return "INVITE_DISABLED_DURING_ENABLE_ALL_FEATURES";
          case HandshakeConstraintViolationExceptionReason::PAYMENT_INSTRUMENT_REQUIRED:
            return "PAYMENT_INSTRUMENT_REQUIRED";
          case HandshakeConstraintViolationExceptionReason::ORGANIZATION_FROM_DIFFERENT_SELLER_OF_RECORD:
            return "ORGANIZATION_FROM_DIFFERENT_SELLER_OF_RECORD";
          case HandshakeConstraintViolationExceptionReason::ORGANIZATION_MEMBERSHIP_CHANGE_RATE_LIMIT_EXCEEDED:
            return "ORGANIZATION_MEMBERSHIP_CHANGE_RATE_LIMIT_EXCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace HandshakeConstraintViolationExceptionReasonMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
