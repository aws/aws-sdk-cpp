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
  enum class DocumentClassifierMode
  {
    NOT_SET,
    MULTI_CLASS,
    MULTI_LABEL
  };

namespace DocumentClassifierModeMapper
{
AWS_COMPREHEND_API DocumentClassifierMode GetDocumentClassifierModeForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForDocumentClassifierMode(DocumentClassifierMode value);
} // namespace DocumentClassifierModeMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
