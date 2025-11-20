/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {
enum class DataAutomationProjectType { NOT_SET, ASYNC, SYNC };

namespace DataAutomationProjectTypeMapper {
AWS_BEDROCKDATAAUTOMATION_API DataAutomationProjectType GetDataAutomationProjectTypeForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForDataAutomationProjectType(DataAutomationProjectType value);
}  // namespace DataAutomationProjectTypeMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
