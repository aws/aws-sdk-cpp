/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class ConfigurationSource { NOT_SET, catalog, table };

namespace ConfigurationSourceMapper {
AWS_GLUE_API ConfigurationSource GetConfigurationSourceForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForConfigurationSource(ConfigurationSource value);
}  // namespace ConfigurationSourceMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
