/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{
  enum class EvaluationType
  {
    NOT_SET,
    PeriodBased,
    RequestBased
  };

namespace EvaluationTypeMapper
{
AWS_APPLICATIONSIGNALS_API EvaluationType GetEvaluationTypeForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForEvaluationType(EvaluationType value);
} // namespace EvaluationTypeMapper
} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
