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
enum class ShaderCacheStatus { NOT_SET, INITIALIZED, PROCESSING, READY, DELETING, ERROR_ };

namespace ShaderCacheStatusMapper {
AWS_GAMELIFTSTREAMS_API ShaderCacheStatus GetShaderCacheStatusForName(const Aws::String& name);

AWS_GAMELIFTSTREAMS_API Aws::String GetNameForShaderCacheStatus(ShaderCacheStatus value);
}  // namespace ShaderCacheStatusMapper
}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
