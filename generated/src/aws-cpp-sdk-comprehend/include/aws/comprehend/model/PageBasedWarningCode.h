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
  enum class PageBasedWarningCode
  {
    NOT_SET,
    INFERENCING_PLAINTEXT_WITH_NATIVE_TRAINED_MODEL,
    INFERENCING_NATIVE_DOCUMENT_WITH_PLAINTEXT_TRAINED_MODEL
  };

namespace PageBasedWarningCodeMapper
{
AWS_COMPREHEND_API PageBasedWarningCode GetPageBasedWarningCodeForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForPageBasedWarningCode(PageBasedWarningCode value);
} // namespace PageBasedWarningCodeMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
