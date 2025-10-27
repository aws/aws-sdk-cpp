/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/GameLift_EXPORTS.h>

namespace Aws {
namespace GameLift {
namespace Model {
enum class InstanceRoleCredentialsProvider { NOT_SET, SHARED_CREDENTIAL_FILE };

namespace InstanceRoleCredentialsProviderMapper {
AWS_GAMELIFT_API InstanceRoleCredentialsProvider GetInstanceRoleCredentialsProviderForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForInstanceRoleCredentialsProvider(InstanceRoleCredentialsProvider value);
}  // namespace InstanceRoleCredentialsProviderMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
