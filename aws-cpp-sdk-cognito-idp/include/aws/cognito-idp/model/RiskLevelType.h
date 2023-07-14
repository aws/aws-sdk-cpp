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
  enum class RiskLevelType
  {
    NOT_SET,
    Low,
    Medium,
    High
  };

namespace RiskLevelTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API RiskLevelType GetRiskLevelTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForRiskLevelType(RiskLevelType value);
} // namespace RiskLevelTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
