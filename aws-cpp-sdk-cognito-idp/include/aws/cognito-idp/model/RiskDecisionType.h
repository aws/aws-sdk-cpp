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
  enum class RiskDecisionType
  {
    NOT_SET,
    NoRisk,
    AccountTakeover,
    Block
  };

namespace RiskDecisionTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API RiskDecisionType GetRiskDecisionTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForRiskDecisionType(RiskDecisionType value);
} // namespace RiskDecisionTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
