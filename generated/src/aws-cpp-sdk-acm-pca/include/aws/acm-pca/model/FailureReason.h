/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{
  enum class FailureReason
  {
    NOT_SET,
    REQUEST_TIMED_OUT,
    UNSUPPORTED_ALGORITHM,
    OTHER
  };

namespace FailureReasonMapper
{
AWS_ACMPCA_API FailureReason GetFailureReasonForName(const Aws::String& name);

AWS_ACMPCA_API Aws::String GetNameForFailureReason(FailureReason value);
} // namespace FailureReasonMapper
} // namespace Model
} // namespace ACMPCA
} // namespace Aws
