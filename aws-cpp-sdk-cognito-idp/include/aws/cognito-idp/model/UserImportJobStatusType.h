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
  enum class UserImportJobStatusType
  {
    NOT_SET,
    Created,
    Pending,
    InProgress,
    Stopping,
    Expired,
    Stopped,
    Failed,
    Succeeded
  };

namespace UserImportJobStatusTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API UserImportJobStatusType GetUserImportJobStatusTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForUserImportJobStatusType(UserImportJobStatusType value);
} // namespace UserImportJobStatusTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
