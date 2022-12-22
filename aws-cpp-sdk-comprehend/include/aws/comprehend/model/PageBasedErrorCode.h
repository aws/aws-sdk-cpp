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
  enum class PageBasedErrorCode
  {
    NOT_SET,
    TEXTRACT_BAD_PAGE,
    TEXTRACT_PROVISIONED_THROUGHPUT_EXCEEDED,
    PAGE_CHARACTERS_EXCEEDED,
    PAGE_SIZE_EXCEEDED,
    INTERNAL_SERVER_ERROR
  };

namespace PageBasedErrorCodeMapper
{
AWS_COMPREHEND_API PageBasedErrorCode GetPageBasedErrorCodeForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForPageBasedErrorCode(PageBasedErrorCode value);
} // namespace PageBasedErrorCodeMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
