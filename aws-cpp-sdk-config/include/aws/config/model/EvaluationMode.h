/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class EvaluationMode
  {
    NOT_SET,
    DETECTIVE,
    PROACTIVE
  };

namespace EvaluationModeMapper
{
AWS_CONFIGSERVICE_API EvaluationMode GetEvaluationModeForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForEvaluationMode(EvaluationMode value);
} // namespace EvaluationModeMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
