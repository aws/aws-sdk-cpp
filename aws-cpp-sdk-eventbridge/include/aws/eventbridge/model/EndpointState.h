/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EventBridge
{
namespace Model
{
  enum class EndpointState
  {
    NOT_SET,
    ACTIVE,
    CREATING,
    UPDATING,
    DELETING,
    CREATE_FAILED,
    UPDATE_FAILED,
    DELETE_FAILED
  };

namespace EndpointStateMapper
{
AWS_EVENTBRIDGE_API EndpointState GetEndpointStateForName(const Aws::String& name);

AWS_EVENTBRIDGE_API Aws::String GetNameForEndpointState(EndpointState value);
} // namespace EndpointStateMapper
} // namespace Model
} // namespace EventBridge
} // namespace Aws
