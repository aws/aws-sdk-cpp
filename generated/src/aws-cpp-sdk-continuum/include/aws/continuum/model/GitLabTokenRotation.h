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
enum class GitLabTokenRotation { NOT_SET, AUTOMATIC, NONE };

namespace GitLabTokenRotationMapper {
AWS_CONTINUUM_API GitLabTokenRotation GetGitLabTokenRotationForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForGitLabTokenRotation(GitLabTokenRotation value);
}  // namespace GitLabTokenRotationMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
