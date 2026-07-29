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
enum class RevocationMode { NOT_SET, REVOKE_URL, REVOKE_AND_TERMINATE_SESSIONS };

namespace RevocationModeMapper {
AWS_GAMELIFTSTREAMS_API RevocationMode GetRevocationModeForName(const Aws::String& name);

AWS_GAMELIFTSTREAMS_API Aws::String GetNameForRevocationMode(RevocationMode value);
}  // namespace RevocationModeMapper
}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
