/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMRContainers
{
namespace Model
{
  enum class FailureReason
  {
    NOT_SET,
    INTERNAL_ERROR,
    USER_ERROR,
    VALIDATION_ERROR,
    CLUSTER_UNAVAILABLE
  };

namespace FailureReasonMapper
{
AWS_EMRCONTAINERS_API FailureReason GetFailureReasonForName(const Aws::String& name);

AWS_EMRCONTAINERS_API Aws::String GetNameForFailureReason(FailureReason value);
} // namespace FailureReasonMapper
} // namespace Model
} // namespace EMRContainers
} // namespace Aws
