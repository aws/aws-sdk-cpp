/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace CognitoIdentity
{
namespace CognitoIdentityEndpoint
{
AWS_COGNITOIDENTITY_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace CognitoIdentityEndpoint
} // namespace CognitoIdentity
} // namespace Aws
