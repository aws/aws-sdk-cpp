/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{
  enum class DocumentReadAction
  {
    NOT_SET,
    TEXTRACT_DETECT_DOCUMENT_TEXT,
    TEXTRACT_ANALYZE_DOCUMENT
  };

namespace DocumentReadActionMapper
{
AWS_COMPREHEND_API DocumentReadAction GetDocumentReadActionForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForDocumentReadAction(DocumentReadAction value);
} // namespace DocumentReadActionMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
