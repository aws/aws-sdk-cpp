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
enum class StreamState { NOT_SET, LIVE, OFFLINE };

namespace StreamStateMapper {
AWS_IVS_API StreamState GetStreamStateForName(const Aws::String& name);

AWS_IVS_API Aws::String GetNameForStreamState(StreamState value);
}  // namespace StreamStateMapper
}  // namespace Model
}  // namespace IVS
}  // namespace Aws
