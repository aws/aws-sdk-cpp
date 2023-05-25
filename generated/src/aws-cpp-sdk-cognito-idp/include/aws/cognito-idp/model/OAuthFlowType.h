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
  enum class OAuthFlowType
  {
    NOT_SET,
    code,
    implicit,
    client_credentials
  };

namespace OAuthFlowTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API OAuthFlowType GetOAuthFlowTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForOAuthFlowType(OAuthFlowType value);
} // namespace OAuthFlowTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
