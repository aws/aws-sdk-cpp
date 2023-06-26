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
  enum class InvalidRequestReason
  {
    NOT_SET,
    INVALID_DOCUMENT
  };

namespace InvalidRequestReasonMapper
{
AWS_COMPREHEND_API InvalidRequestReason GetInvalidRequestReasonForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForInvalidRequestReason(InvalidRequestReason value);
} // namespace InvalidRequestReasonMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
