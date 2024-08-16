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
  enum class AdvancedSecurityEnabledModeType
  {
    NOT_SET,
    AUDIT,
    ENFORCED
  };

namespace AdvancedSecurityEnabledModeTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API AdvancedSecurityEnabledModeType GetAdvancedSecurityEnabledModeTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForAdvancedSecurityEnabledModeType(AdvancedSecurityEnabledModeType value);
} // namespace AdvancedSecurityEnabledModeTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
