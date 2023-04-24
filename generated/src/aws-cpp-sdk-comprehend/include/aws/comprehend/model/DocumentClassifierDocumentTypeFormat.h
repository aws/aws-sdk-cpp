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
  enum class DocumentClassifierDocumentTypeFormat
  {
    NOT_SET,
    PLAIN_TEXT_DOCUMENT,
    SEMI_STRUCTURED_DOCUMENT
  };

namespace DocumentClassifierDocumentTypeFormatMapper
{
AWS_COMPREHEND_API DocumentClassifierDocumentTypeFormat GetDocumentClassifierDocumentTypeFormatForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForDocumentClassifierDocumentTypeFormat(DocumentClassifierDocumentTypeFormat value);
} // namespace DocumentClassifierDocumentTypeFormatMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
