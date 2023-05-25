/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{
  enum class OAuthScopesElement
  {
    NOT_SET,
    PHONE,
    EMAIL,
    OPENID,
    PROFILE,
    AWS_COGNITO_SIGNIN_USER_ADMIN
  };

namespace OAuthScopesElementMapper
{
AWS_AMPLIFYBACKEND_API OAuthScopesElement GetOAuthScopesElementForName(const Aws::String& name);

AWS_AMPLIFYBACKEND_API Aws::String GetNameForOAuthScopesElement(OAuthScopesElement value);
} // namespace OAuthScopesElementMapper
} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
