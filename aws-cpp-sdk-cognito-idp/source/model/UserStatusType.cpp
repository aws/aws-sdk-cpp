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
#include <aws/cognito-idp/model/UserStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace UserStatusTypeMapper
      {

        static const int UNCONFIRMED_HASH = HashingUtils::HashString("UNCONFIRMED");
        static const int CONFIRMED_HASH = HashingUtils::HashString("CONFIRMED");
        static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");
        static const int COMPROMISED_HASH = HashingUtils::HashString("COMPROMISED");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int RESET_REQUIRED_HASH = HashingUtils::HashString("RESET_REQUIRED");
        static const int FORCE_CHANGE_PASSWORD_HASH = HashingUtils::HashString("FORCE_CHANGE_PASSWORD");


        UserStatusType GetUserStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNCONFIRMED_HASH)
          {
            return UserStatusType::UNCONFIRMED;
          }
          else if (hashCode == CONFIRMED_HASH)
          {
            return UserStatusType::CONFIRMED;
          }
          else if (hashCode == ARCHIVED_HASH)
          {
            return UserStatusType::ARCHIVED;
          }
          else if (hashCode == COMPROMISED_HASH)
          {
            return UserStatusType::COMPROMISED;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return UserStatusType::UNKNOWN;
          }
          else if (hashCode == RESET_REQUIRED_HASH)
          {
            return UserStatusType::RESET_REQUIRED;
          }
          else if (hashCode == FORCE_CHANGE_PASSWORD_HASH)
          {
            return UserStatusType::FORCE_CHANGE_PASSWORD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserStatusType>(hashCode);
          }

          return UserStatusType::NOT_SET;
        }

        Aws::String GetNameForUserStatusType(UserStatusType enumValue)
        {
          switch(enumValue)
          {
          case UserStatusType::UNCONFIRMED:
            return "UNCONFIRMED";
          case UserStatusType::CONFIRMED:
            return "CONFIRMED";
          case UserStatusType::ARCHIVED:
            return "ARCHIVED";
          case UserStatusType::COMPROMISED:
            return "COMPROMISED";
          case UserStatusType::UNKNOWN:
            return "UNKNOWN";
          case UserStatusType::RESET_REQUIRED:
            return "RESET_REQUIRED";
          case UserStatusType::FORCE_CHANGE_PASSWORD:
            return "FORCE_CHANGE_PASSWORD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace UserStatusTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
