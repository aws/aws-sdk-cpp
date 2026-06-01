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
enum class UpdateReplicaStatusType { NOT_SET, ACTIVE, INACTIVE };

namespace UpdateReplicaStatusTypeMapper {
AWS_COGNITOIDENTITYPROVIDER_API UpdateReplicaStatusType GetUpdateReplicaStatusTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForUpdateReplicaStatusType(UpdateReplicaStatusType value);
}  // namespace UpdateReplicaStatusTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
