/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectHealth {
namespace Model {
enum class ProviderRole { NOT_SET, CLINICIAN };

namespace ProviderRoleMapper {
AWS_CONNECTHEALTH_API ProviderRole GetProviderRoleForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForProviderRole(ProviderRole value);
}  // namespace ProviderRoleMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
