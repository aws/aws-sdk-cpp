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
  enum class AdvancedSecurityModeType
  {
    NOT_SET,
    OFF,
    AUDIT,
    ENFORCED
  };

namespace AdvancedSecurityModeTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API AdvancedSecurityModeType GetAdvancedSecurityModeTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForAdvancedSecurityModeType(AdvancedSecurityModeType value);
} // namespace AdvancedSecurityModeTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
