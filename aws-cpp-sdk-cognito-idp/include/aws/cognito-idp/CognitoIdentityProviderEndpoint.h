/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace CognitoIdentityProvider
{
namespace CognitoIdentityProviderEndpoint
{
AWS_COGNITOIDENTITYPROVIDER_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace CognitoIdentityProviderEndpoint
} // namespace CognitoIdentityProvider
} // namespace Aws
