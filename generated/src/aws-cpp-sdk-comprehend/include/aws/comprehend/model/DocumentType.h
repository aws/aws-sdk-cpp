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
  enum class DocumentType
  {
    NOT_SET,
    NATIVE_PDF,
    SCANNED_PDF,
    MS_WORD,
    IMAGE,
    PLAIN_TEXT,
    TEXTRACT_DETECT_DOCUMENT_TEXT_JSON,
    TEXTRACT_ANALYZE_DOCUMENT_JSON
  };

namespace DocumentTypeMapper
{
AWS_COMPREHEND_API DocumentType GetDocumentTypeForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForDocumentType(DocumentType value);
} // namespace DocumentTypeMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
