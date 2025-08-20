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
  enum class TermsEnforcementType
  {
    NOT_SET,
    NONE
  };

namespace TermsEnforcementTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API TermsEnforcementType GetTermsEnforcementTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForTermsEnforcementType(TermsEnforcementType value);
} // namespace TermsEnforcementTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
