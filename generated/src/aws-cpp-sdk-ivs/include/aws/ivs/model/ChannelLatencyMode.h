/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/IVS_EXPORTS.h>

namespace Aws {
namespace IVS {
namespace Model {
enum class ChannelLatencyMode { NOT_SET, NORMAL, LOW };

namespace ChannelLatencyModeMapper {
AWS_IVS_API ChannelLatencyMode GetChannelLatencyModeForName(const Aws::String& name);

AWS_IVS_API Aws::String GetNameForChannelLatencyMode(ChannelLatencyMode value);
}  // namespace ChannelLatencyModeMapper
}  // namespace Model
}  // namespace IVS
}  // namespace Aws
