/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivschat/Ivschat_EXPORTS.h>

namespace Aws {
namespace ivschat {
namespace Model {
enum class UpdateLoggingConfigurationState { NOT_SET, ACTIVE };

namespace UpdateLoggingConfigurationStateMapper {
AWS_IVSCHAT_API UpdateLoggingConfigurationState GetUpdateLoggingConfigurationStateForName(const Aws::String& name);

AWS_IVSCHAT_API Aws::String GetNameForUpdateLoggingConfigurationState(UpdateLoggingConfigurationState value);
}  // namespace UpdateLoggingConfigurationStateMapper
}  // namespace Model
}  // namespace ivschat
}  // namespace Aws
