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
  enum class ProxyConfigurationType
  {
    NOT_SET,
    APPMESH
  };

namespace ProxyConfigurationTypeMapper
{
AWS_ECS_API ProxyConfigurationType GetProxyConfigurationTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForProxyConfigurationType(ProxyConfigurationType value);
} // namespace ProxyConfigurationTypeMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
