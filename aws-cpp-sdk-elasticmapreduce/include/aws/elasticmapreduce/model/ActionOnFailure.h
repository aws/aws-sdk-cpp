/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class ActionOnFailure
  {
    NOT_SET,
    TERMINATE_JOB_FLOW,
    TERMINATE_CLUSTER,
    CANCEL_AND_WAIT,
    CONTINUE
  };

namespace ActionOnFailureMapper
{
AWS_EMR_API ActionOnFailure GetActionOnFailureForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForActionOnFailure(ActionOnFailure value);
} // namespace ActionOnFailureMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
