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
enum class LoggingConfigurationState { NOT_SET, CREATING, CREATE_FAILED, DELETING, DELETE_FAILED, UPDATING, UPDATE_FAILED, ACTIVE };

namespace LoggingConfigurationStateMapper {
AWS_IVSCHAT_API LoggingConfigurationState GetLoggingConfigurationStateForName(const Aws::String& name);

AWS_IVSCHAT_API Aws::String GetNameForLoggingConfigurationState(LoggingConfigurationState value);
}  // namespace LoggingConfigurationStateMapper
}  // namespace Model
}  // namespace ivschat
}  // namespace Aws
