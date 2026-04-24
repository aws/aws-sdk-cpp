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
enum class LibraryIngestionJobStatus { NOT_SET, IN_PROGRESS, COMPLETED, COMPLETED_WITH_ERRORS, FAILED };

namespace LibraryIngestionJobStatusMapper {
AWS_BEDROCKDATAAUTOMATION_API LibraryIngestionJobStatus GetLibraryIngestionJobStatusForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForLibraryIngestionJobStatus(LibraryIngestionJobStatus value);
}  // namespace LibraryIngestionJobStatusMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
