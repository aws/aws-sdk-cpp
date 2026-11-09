/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Continuum {
namespace Model {
enum class PatchCreationPolicy { NOT_SET, ENABLED, DISABLED };

namespace PatchCreationPolicyMapper {
AWS_CONTINUUM_API PatchCreationPolicy GetPatchCreationPolicyForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForPatchCreationPolicy(PatchCreationPolicy value);
}  // namespace PatchCreationPolicyMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
