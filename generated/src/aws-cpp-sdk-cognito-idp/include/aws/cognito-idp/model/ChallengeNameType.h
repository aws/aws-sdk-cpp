/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{
  enum class ChallengeNameType
  {
    NOT_SET,
    SMS_MFA,
    SOFTWARE_TOKEN_MFA,
    SELECT_MFA_TYPE,
    MFA_SETUP,
    PASSWORD_VERIFIER,
    CUSTOM_CHALLENGE,
    DEVICE_SRP_AUTH,
    DEVICE_PASSWORD_VERIFIER,
    ADMIN_NO_SRP_AUTH,
    NEW_PASSWORD_REQUIRED
  };

namespace ChallengeNameTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API ChallengeNameType GetChallengeNameTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForChallengeNameType(ChallengeNameType value);
} // namespace ChallengeNameTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
