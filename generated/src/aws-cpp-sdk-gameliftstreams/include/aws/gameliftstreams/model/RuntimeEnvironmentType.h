/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>

namespace Aws {
namespace GameLiftStreams {
namespace Model {
enum class RuntimeEnvironmentType { NOT_SET, PROTON, WINDOWS, UBUNTU };

namespace RuntimeEnvironmentTypeMapper {
AWS_GAMELIFTSTREAMS_API RuntimeEnvironmentType GetRuntimeEnvironmentTypeForName(const Aws::String& name);

AWS_GAMELIFTSTREAMS_API Aws::String GetNameForRuntimeEnvironmentType(RuntimeEnvironmentType value);
}  // namespace RuntimeEnvironmentTypeMapper
}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
