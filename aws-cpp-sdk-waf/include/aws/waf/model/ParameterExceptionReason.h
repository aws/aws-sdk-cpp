/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAF
{
namespace Model
{
  enum class ParameterExceptionReason
  {
    NOT_SET,
    INVALID_OPTION,
    ILLEGAL_COMBINATION,
    ILLEGAL_ARGUMENT,
    INVALID_TAG_KEY
  };

namespace ParameterExceptionReasonMapper
{
AWS_WAF_API ParameterExceptionReason GetParameterExceptionReasonForName(const Aws::String& name);

AWS_WAF_API Aws::String GetNameForParameterExceptionReason(ParameterExceptionReason value);
} // namespace ParameterExceptionReasonMapper
} // namespace Model
} // namespace WAF
} // namespace Aws
