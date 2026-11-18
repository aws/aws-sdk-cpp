/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
enum class RestoreStatusType {
  NOT_SET,
  PREVIEW_GENERATING,
  PREVIEW_GENERATED,
  PREVIEW_CANCELLED,
  PREVIEW_GENERATION_FAILED,
  PREVIEW_EXPIRED,
  RESTORING,
  RESTORE_COMPLETED,
  TEMPORARY_INTERNAL_ERROR_SEE_SUPPORT_CASE,
  AWS_ABORTED
};

namespace RestoreStatusTypeMapper {
AWS_COGNITOIDENTITYPROVIDER_API RestoreStatusType GetRestoreStatusTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForRestoreStatusType(RestoreStatusType value);
}  // namespace RestoreStatusTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
