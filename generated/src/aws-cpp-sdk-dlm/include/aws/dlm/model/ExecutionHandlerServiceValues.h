/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DLM
{
namespace Model
{
  enum class ExecutionHandlerServiceValues
  {
    NOT_SET,
    AWS_SYSTEMS_MANAGER
  };

namespace ExecutionHandlerServiceValuesMapper
{
AWS_DLM_API ExecutionHandlerServiceValues GetExecutionHandlerServiceValuesForName(const Aws::String& name);

AWS_DLM_API Aws::String GetNameForExecutionHandlerServiceValues(ExecutionHandlerServiceValues value);
} // namespace ExecutionHandlerServiceValuesMapper
} // namespace Model
} // namespace DLM
} // namespace Aws
