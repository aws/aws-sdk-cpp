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
        static const int MASTER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED_HASH = HashingUtils::HashString("MASTER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED");
        static const int ACCOUNT_CREATION_RATE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ACCOUNT_CREATION_RATE_LIMIT_EXCEEDED");


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
          else if (hashCode == MASTER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED_HASH)
          {
            return ConstraintViolationExceptionReason::MASTER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED;
          }
          else if (hashCode == ACCOUNT_CREATION_RATE_LIMIT_EXCEEDED_HASH)
          {
            return ConstraintViolationExceptionReason::ACCOUNT_CREATION_RATE_LIMIT_EXCEEDED;
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
          case ConstraintViolationExceptionReason::MASTER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED:
            return "MASTER_ACCOUNT_PAYMENT_INSTRUMENT_REQUIRED";
          case ConstraintViolationExceptionReason::ACCOUNT_CREATION_RATE_LIMIT_EXCEEDED:
            return "ACCOUNT_CREATION_RATE_LIMIT_EXCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ConstraintViolationExceptionReasonMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
