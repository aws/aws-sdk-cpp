/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector-scan/Inspectorscan_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace inspectorscan
{
namespace Model
{
  enum class InternalServerExceptionReason
  {
    NOT_SET,
    FAILED_TO_GENERATE_SBOM,
    OTHER
  };

namespace InternalServerExceptionReasonMapper
{
AWS_INSPECTORSCAN_API InternalServerExceptionReason GetInternalServerExceptionReasonForName(const Aws::String& name);

AWS_INSPECTORSCAN_API Aws::String GetNameForInternalServerExceptionReason(InternalServerExceptionReason value);
} // namespace InternalServerExceptionReasonMapper
} // namespace Model
} // namespace inspectorscan
} // namespace Aws
