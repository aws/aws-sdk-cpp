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
  enum class EmailSendingAccountType
  {
    NOT_SET,
    COGNITO_DEFAULT,
    DEVELOPER
  };

namespace EmailSendingAccountTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API EmailSendingAccountType GetEmailSendingAccountTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForEmailSendingAccountType(EmailSendingAccountType value);
} // namespace EmailSendingAccountTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
