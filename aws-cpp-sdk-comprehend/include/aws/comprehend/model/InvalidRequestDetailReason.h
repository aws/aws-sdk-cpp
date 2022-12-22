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
  enum class InvalidRequestDetailReason
  {
    NOT_SET,
    DOCUMENT_SIZE_EXCEEDED,
    UNSUPPORTED_DOC_TYPE,
    PAGE_LIMIT_EXCEEDED,
    TEXTRACT_ACCESS_DENIED
  };

namespace InvalidRequestDetailReasonMapper
{
AWS_COMPREHEND_API InvalidRequestDetailReason GetInvalidRequestDetailReasonForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForInvalidRequestDetailReason(InvalidRequestDetailReason value);
} // namespace InvalidRequestDetailReasonMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
