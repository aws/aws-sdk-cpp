/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class EvaluationStatus
  {
    NOT_SET,
    DRAFT,
    SUBMITTED
  };

namespace EvaluationStatusMapper
{
AWS_CONNECT_API EvaluationStatus GetEvaluationStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationStatus(EvaluationStatus value);
} // namespace EvaluationStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
