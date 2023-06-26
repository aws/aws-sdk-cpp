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
  enum class EvaluationFormVersionStatus
  {
    NOT_SET,
    DRAFT,
    ACTIVE
  };

namespace EvaluationFormVersionStatusMapper
{
AWS_CONNECT_API EvaluationFormVersionStatus GetEvaluationFormVersionStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormVersionStatus(EvaluationFormVersionStatus value);
} // namespace EvaluationFormVersionStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
