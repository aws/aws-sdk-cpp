/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t SMS_MFA_HASH = ConstExprHashingUtils::HashString("SMS_MFA");
        static constexpr uint32_t SOFTWARE_TOKEN_MFA_HASH = ConstExprHashingUtils::HashString("SOFTWARE_TOKEN_MFA");
        static constexpr uint32_t SELECT_MFA_TYPE_HASH = ConstExprHashingUtils::HashString("SELECT_MFA_TYPE");
        static constexpr uint32_t MFA_SETUP_HASH = ConstExprHashingUtils::HashString("MFA_SETUP");
        static constexpr uint32_t PASSWORD_VERIFIER_HASH = ConstExprHashingUtils::HashString("PASSWORD_VERIFIER");
        static constexpr uint32_t CUSTOM_CHALLENGE_HASH = ConstExprHashingUtils::HashString("CUSTOM_CHALLENGE");
        static constexpr uint32_t DEVICE_SRP_AUTH_HASH = ConstExprHashingUtils::HashString("DEVICE_SRP_AUTH");
        static constexpr uint32_t DEVICE_PASSWORD_VERIFIER_HASH = ConstExprHashingUtils::HashString("DEVICE_PASSWORD_VERIFIER");
        static constexpr uint32_t ADMIN_NO_SRP_AUTH_HASH = ConstExprHashingUtils::HashString("ADMIN_NO_SRP_AUTH");
        static constexpr uint32_t NEW_PASSWORD_REQUIRED_HASH = ConstExprHashingUtils::HashString("NEW_PASSWORD_REQUIRED");


        ChallengeNameType GetChallengeNameTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SMS_MFA_HASH)
          {
            return ChallengeNameType::SMS_MFA;
          }
          else if (hashCode == SOFTWARE_TOKEN_MFA_HASH)
          {
            return ChallengeNameType::SOFTWARE_TOKEN_MFA;
          }
          else if (hashCode == SELECT_MFA_TYPE_HASH)
          {
            return ChallengeNameType::SELECT_MFA_TYPE;
          }
          else if (hashCode == MFA_SETUP_HASH)
          {
            return ChallengeNameType::MFA_SETUP;
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
          case ChallengeNameType::NOT_SET:
            return {};
          case ChallengeNameType::SMS_MFA:
            return "SMS_MFA";
          case ChallengeNameType::SOFTWARE_TOKEN_MFA:
            return "SOFTWARE_TOKEN_MFA";
          case ChallengeNameType::SELECT_MFA_TYPE:
            return "SELECT_MFA_TYPE";
          case ChallengeNameType::MFA_SETUP:
            return "MFA_SETUP";
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

            return {};
          }
        }

      } // namespace ChallengeNameTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
