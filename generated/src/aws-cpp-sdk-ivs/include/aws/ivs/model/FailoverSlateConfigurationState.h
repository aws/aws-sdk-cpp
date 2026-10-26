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
enum class FailoverSlateConfigurationState { NOT_SET, CREATING, CREATE_FAILED, CREATED, UPDATING };

namespace FailoverSlateConfigurationStateMapper {
AWS_IVS_API FailoverSlateConfigurationState GetFailoverSlateConfigurationStateForName(const Aws::String& name);

AWS_IVS_API Aws::String GetNameForFailoverSlateConfigurationState(FailoverSlateConfigurationState value);
}  // namespace FailoverSlateConfigurationStateMapper
}  // namespace Model
}  // namespace IVS
}  // namespace Aws
