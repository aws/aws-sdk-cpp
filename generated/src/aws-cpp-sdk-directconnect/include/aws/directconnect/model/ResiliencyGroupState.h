/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>

namespace Aws {
namespace DirectConnect {
namespace Model {
enum class ResiliencyGroupState { NOT_SET, pending, available, deleting, deleted };

namespace ResiliencyGroupStateMapper {
AWS_DIRECTCONNECT_API ResiliencyGroupState GetResiliencyGroupStateForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForResiliencyGroupState(ResiliencyGroupState value);
}  // namespace ResiliencyGroupStateMapper
}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
