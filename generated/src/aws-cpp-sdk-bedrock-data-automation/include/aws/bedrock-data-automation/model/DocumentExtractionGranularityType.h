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
  enum class DocumentExtractionGranularityType
  {
    NOT_SET,
    DOCUMENT,
    PAGE,
    ELEMENT,
    WORD,
    LINE
  };

namespace DocumentExtractionGranularityTypeMapper
{
AWS_BEDROCKDATAAUTOMATION_API DocumentExtractionGranularityType GetDocumentExtractionGranularityTypeForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForDocumentExtractionGranularityType(DocumentExtractionGranularityType value);
} // namespace DocumentExtractionGranularityTypeMapper
} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
