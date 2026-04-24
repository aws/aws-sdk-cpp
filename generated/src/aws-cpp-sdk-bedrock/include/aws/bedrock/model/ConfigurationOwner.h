/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Bedrock {
namespace Model {
enum class ConfigurationOwner { NOT_SET, ACCOUNT };

namespace ConfigurationOwnerMapper {
AWS_BEDROCK_API ConfigurationOwner GetConfigurationOwnerForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForConfigurationOwner(ConfigurationOwner value);
}  // namespace ConfigurationOwnerMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
