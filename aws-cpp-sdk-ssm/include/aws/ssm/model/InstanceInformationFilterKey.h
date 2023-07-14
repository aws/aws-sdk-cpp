/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class InstanceInformationFilterKey
  {
    NOT_SET,
    InstanceIds,
    AgentVersion,
    PingStatus,
    PlatformTypes,
    ActivationIds,
    IamRole,
    ResourceType,
    AssociationStatus
  };

namespace InstanceInformationFilterKeyMapper
{
AWS_SSM_API InstanceInformationFilterKey GetInstanceInformationFilterKeyForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForInstanceInformationFilterKey(InstanceInformationFilterKey value);
} // namespace InstanceInformationFilterKeyMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
