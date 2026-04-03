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
enum class LibraryIngestionJobOperationType { NOT_SET, UPSERT, DELETE_ };

namespace LibraryIngestionJobOperationTypeMapper {
AWS_BEDROCKDATAAUTOMATION_API LibraryIngestionJobOperationType GetLibraryIngestionJobOperationTypeForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForLibraryIngestionJobOperationType(LibraryIngestionJobOperationType value);
}  // namespace LibraryIngestionJobOperationTypeMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
