/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    ContainerService,
    Instance,
    StaticIp,
    KeyPair,
    InstanceSnapshot,
    Domain,
    PeeredVpc,
    LoadBalancer,
    LoadBalancerTlsCertificate,
    Disk,
    DiskSnapshot,
    RelationalDatabase,
    RelationalDatabaseSnapshot,
    ExportSnapshotRecord,
    CloudFormationStackRecord,
    Alarm,
    ContactMethod,
    Distribution,
    Certificate
  };

namespace ResourceTypeMapper
{
AWS_LIGHTSAIL_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
