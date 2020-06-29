/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppSync
{
namespace Model
{
  enum class AuthenticationType
  {
    NOT_SET,
    API_KEY,
    AWS_IAM,
    AMAZON_COGNITO_USER_POOLS,
    OPENID_CONNECT
  };

namespace AuthenticationTypeMapper
{
AWS_APPSYNC_API AuthenticationType GetAuthenticationTypeForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForAuthenticationType(AuthenticationType value);
} // namespace AuthenticationTypeMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
