/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
enum class IntegrationType { NOT_SET, AWS_CONFIG_SLREC, SLACK, EXTERNAL_AGENT, AWS_INTEGRATION };

namespace IntegrationTypeMapper {
AWS_CLOUDWATCHOMNI_API IntegrationType GetIntegrationTypeForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForIntegrationType(IntegrationType value);
}  // namespace IntegrationTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
