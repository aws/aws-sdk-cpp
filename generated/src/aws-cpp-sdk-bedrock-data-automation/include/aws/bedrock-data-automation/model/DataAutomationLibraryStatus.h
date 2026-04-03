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
enum class DataAutomationLibraryStatus { NOT_SET, ACTIVE, DELETING };

namespace DataAutomationLibraryStatusMapper {
AWS_BEDROCKDATAAUTOMATION_API DataAutomationLibraryStatus GetDataAutomationLibraryStatusForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForDataAutomationLibraryStatus(DataAutomationLibraryStatus value);
}  // namespace DataAutomationLibraryStatusMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
