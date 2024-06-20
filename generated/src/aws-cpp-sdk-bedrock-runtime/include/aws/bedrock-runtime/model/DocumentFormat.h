/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{
  enum class DocumentFormat
  {
    NOT_SET,
    pdf,
    csv,
    doc,
    docx,
    xls,
    xlsx,
    html,
    txt,
    md
  };

namespace DocumentFormatMapper
{
AWS_BEDROCKRUNTIME_API DocumentFormat GetDocumentFormatForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForDocumentFormat(DocumentFormat value);
} // namespace DocumentFormatMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
