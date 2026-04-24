/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>

namespace Aws {
namespace LakeFormation {
namespace Model {
enum class CredentialsScope { NOT_SET, READ, READWRITE };

namespace CredentialsScopeMapper {
AWS_LAKEFORMATION_API CredentialsScope GetCredentialsScopeForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForCredentialsScope(CredentialsScope value);
}  // namespace CredentialsScopeMapper
}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
