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
enum class PatchFormat { NOT_SET, GIT_MAILBOX_PATCH, GIT_BINARY_DIFF, GIT_DIFF };

namespace PatchFormatMapper {
AWS_CONTINUUM_API PatchFormat GetPatchFormatForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForPatchFormat(PatchFormat value);
}  // namespace PatchFormatMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
