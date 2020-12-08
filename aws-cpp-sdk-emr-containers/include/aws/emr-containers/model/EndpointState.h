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
  enum class EndpointState
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    TERMINATING,
    TERMINATED,
    TERMINATED_WITH_ERRORS
  };

namespace EndpointStateMapper
{
AWS_EMRCONTAINERS_API EndpointState GetEndpointStateForName(const Aws::String& name);

AWS_EMRCONTAINERS_API Aws::String GetNameForEndpointState(EndpointState value);
} // namespace EndpointStateMapper
} // namespace Model
} // namespace EMRContainers
} // namespace Aws
