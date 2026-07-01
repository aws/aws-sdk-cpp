/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Artifact {
namespace Model {
enum class InputSource { NOT_SET, TEXT, FILE };

namespace InputSourceMapper {
AWS_ARTIFACT_API InputSource GetInputSourceForName(const Aws::String& name);

AWS_ARTIFACT_API Aws::String GetNameForInputSource(InputSource value);
}  // namespace InputSourceMapper
}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
