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
  enum class DocumentClassifierDataFormat
  {
    NOT_SET,
    COMPREHEND_CSV,
    AUGMENTED_MANIFEST
  };

namespace DocumentClassifierDataFormatMapper
{
AWS_COMPREHEND_API DocumentClassifierDataFormat GetDocumentClassifierDataFormatForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForDocumentClassifierDataFormat(DocumentClassifierDataFormat value);
} // namespace DocumentClassifierDataFormatMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
