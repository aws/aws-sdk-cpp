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
#include <aws/cognito-idp/model/ChallengeNameType.h>
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
      namespace ChallengeNameTypeMapper
      {

        static const int SMS_MFA_HASH = HashingUtils::HashString("SMS_MFA");
        static const int PASSWORD_VERIFIER_HASH = HashingUtils::HashString("PASSWORD_VERIFIER");
        static const int CUSTOM_CHALLENGE_HASH = HashingUtils::HashString("CUSTOM_CHALLENGE");
        static const int DEVICE_SRP_AUTH_HASH = HashingUtils::HashString("DEVICE_SRP_AUTH");
        static const int DEVICE_PASSWORD_VERIFIER_HASH = HashingUtils::HashString("DEVICE_PASSWORD_VERIFIER");
        static const int ADMIN_NO_SRP_AUTH_HASH = HashingUtils::HashString("ADMIN_NO_SRP_AUTH");
        static const int NEW_PASSWORD_REQUIRED_HASH = HashingUtils::HashString("NEW_PASSWORD_REQUIRED");


        ChallengeNameType GetChallengeNameTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SMS_MFA_HASH)
          {
            return ChallengeNameType::SMS_MFA;
          }
          else if (hashCode == PASSWORD_VERIFIER_HASH)
          {
            return ChallengeNameType::PASSWORD_VERIFIER;
          }
          else if (hashCode == CUSTOM_CHALLENGE_HASH)
          {
            return ChallengeNameType::CUSTOM_CHALLENGE;
          }
          else if (hashCode == DEVICE_SRP_AUTH_HASH)
          {
            return ChallengeNameType::DEVICE_SRP_AUTH;
          }
          else if (hashCode == DEVICE_PASSWORD_VERIFIER_HASH)
          {
            return ChallengeNameType::DEVICE_PASSWORD_VERIFIER;
          }
          else if (hashCode == ADMIN_NO_SRP_AUTH_HASH)
          {
            return ChallengeNameType::ADMIN_NO_SRP_AUTH;
          }
          else if (hashCode == NEW_PASSWORD_REQUIRED_HASH)
          {
            return ChallengeNameType::NEW_PASSWORD_REQUIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChallengeNameType>(hashCode);
          }

          return ChallengeNameType::NOT_SET;
        }

        Aws::String GetNameForChallengeNameType(ChallengeNameType enumValue)
        {
          switch(enumValue)
          {
          case ChallengeNameType::SMS_MFA:
            return "SMS_MFA";
          case ChallengeNameType::PASSWORD_VERIFIER:
            return "PASSWORD_VERIFIER";
          case ChallengeNameType::CUSTOM_CHALLENGE:
            return "CUSTOM_CHALLENGE";
          case ChallengeNameType::DEVICE_SRP_AUTH:
            return "DEVICE_SRP_AUTH";
          case ChallengeNameType::DEVICE_PASSWORD_VERIFIER:
            return "DEVICE_PASSWORD_VERIFIER";
          case ChallengeNameType::ADMIN_NO_SRP_AUTH:
            return "ADMIN_NO_SRP_AUTH";
          case ChallengeNameType::NEW_PASSWORD_REQUIRED:
            return "NEW_PASSWORD_REQUIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ChallengeNameTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
