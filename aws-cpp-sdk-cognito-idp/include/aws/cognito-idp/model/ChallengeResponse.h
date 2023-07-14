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
  enum class ChallengeResponse
  {
    NOT_SET,
    Success,
    Failure
  };

namespace ChallengeResponseMapper
{
AWS_COGNITOIDENTITYPROVIDER_API ChallengeResponse GetChallengeResponseForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForChallengeResponse(ChallengeResponse value);
} // namespace ChallengeResponseMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
