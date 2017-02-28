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
#include <aws/organizations/model/CreateAccountFailureReason.h>
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
      namespace CreateAccountFailureReasonMapper
      {

        static const int ACCOUNT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ACCOUNT_LIMIT_EXCEEDED");
        static const int EMAIL_ALREADY_EXISTS_HASH = HashingUtils::HashString("EMAIL_ALREADY_EXISTS");
        static const int INVALID_ADDRESS_HASH = HashingUtils::HashString("INVALID_ADDRESS");
        static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");


        CreateAccountFailureReason GetCreateAccountFailureReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_LIMIT_EXCEEDED_HASH)
          {
            return CreateAccountFailureReason::ACCOUNT_LIMIT_EXCEEDED;
          }
          else if (hashCode == EMAIL_ALREADY_EXISTS_HASH)
          {
            return CreateAccountFailureReason::EMAIL_ALREADY_EXISTS;
          }
          else if (hashCode == INVALID_ADDRESS_HASH)
          {
            return CreateAccountFailureReason::INVALID_ADDRESS;
          }
          else if (hashCode == INTERNAL_FAILURE_HASH)
          {
            return CreateAccountFailureReason::INTERNAL_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CreateAccountFailureReason>(hashCode);
          }

          return CreateAccountFailureReason::NOT_SET;
        }

        Aws::String GetNameForCreateAccountFailureReason(CreateAccountFailureReason enumValue)
        {
          switch(enumValue)
          {
          case CreateAccountFailureReason::ACCOUNT_LIMIT_EXCEEDED:
            return "ACCOUNT_LIMIT_EXCEEDED";
          case CreateAccountFailureReason::EMAIL_ALREADY_EXISTS:
            return "EMAIL_ALREADY_EXISTS";
          case CreateAccountFailureReason::INVALID_ADDRESS:
            return "INVALID_ADDRESS";
          case CreateAccountFailureReason::INTERNAL_FAILURE:
            return "INTERNAL_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace CreateAccountFailureReasonMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
