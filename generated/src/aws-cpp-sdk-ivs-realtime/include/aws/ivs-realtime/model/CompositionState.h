/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>

namespace Aws {
namespace ivsrealtime {
namespace Model {
enum class CompositionState { NOT_SET, STARTING, ACTIVE, STOPPING, FAILED, STOPPED };

namespace CompositionStateMapper {
AWS_IVSREALTIME_API CompositionState GetCompositionStateForName(const Aws::String& name);

AWS_IVSREALTIME_API Aws::String GetNameForCompositionState(CompositionState value);
}  // namespace CompositionStateMapper
}  // namespace Model
}  // namespace ivsrealtime
}  // namespace Aws
