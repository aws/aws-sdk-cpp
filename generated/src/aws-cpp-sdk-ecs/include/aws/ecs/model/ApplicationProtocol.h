/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{
  enum class ApplicationProtocol
  {
    NOT_SET,
    http,
    http2,
    grpc
  };

namespace ApplicationProtocolMapper
{
AWS_ECS_API ApplicationProtocol GetApplicationProtocolForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForApplicationProtocol(ApplicationProtocol value);
} // namespace ApplicationProtocolMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
