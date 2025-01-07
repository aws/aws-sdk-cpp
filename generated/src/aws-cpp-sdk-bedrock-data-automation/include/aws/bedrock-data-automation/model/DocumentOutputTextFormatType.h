/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{
  enum class DocumentOutputTextFormatType
  {
    NOT_SET,
    PLAIN_TEXT,
    MARKDOWN,
    HTML,
    CSV
  };

namespace DocumentOutputTextFormatTypeMapper
{
AWS_BEDROCKDATAAUTOMATION_API DocumentOutputTextFormatType GetDocumentOutputTextFormatTypeForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForDocumentOutputTextFormatType(DocumentOutputTextFormatType value);
} // namespace DocumentOutputTextFormatTypeMapper
} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
