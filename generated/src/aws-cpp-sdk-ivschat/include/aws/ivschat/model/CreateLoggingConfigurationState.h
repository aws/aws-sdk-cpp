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
enum class CreateLoggingConfigurationState { NOT_SET, ACTIVE };

namespace CreateLoggingConfigurationStateMapper {
AWS_IVSCHAT_API CreateLoggingConfigurationState GetCreateLoggingConfigurationStateForName(const Aws::String& name);

AWS_IVSCHAT_API Aws::String GetNameForCreateLoggingConfigurationState(CreateLoggingConfigurationState value);
}  // namespace CreateLoggingConfigurationStateMapper
}  // namespace Model
}  // namespace ivschat
}  // namespace Aws
