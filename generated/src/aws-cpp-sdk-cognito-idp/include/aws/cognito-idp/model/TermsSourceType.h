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
  enum class TermsSourceType
  {
    NOT_SET,
    LINK
  };

namespace TermsSourceTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API TermsSourceType GetTermsSourceTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForTermsSourceType(TermsSourceType value);
} // namespace TermsSourceTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
