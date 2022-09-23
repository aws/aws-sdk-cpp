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
  enum class OperationType
  {
    NOT_SET,
    DeleteKnownHostKeys,
    DeleteInstance,
    CreateInstance,
    StopInstance,
    StartInstance,
    RebootInstance,
    OpenInstancePublicPorts,
    PutInstancePublicPorts,
    CloseInstancePublicPorts,
    AllocateStaticIp,
    ReleaseStaticIp,
    AttachStaticIp,
    DetachStaticIp,
    UpdateDomainEntry,
    DeleteDomainEntry,
    CreateDomain,
    DeleteDomain,
    CreateInstanceSnapshot,
    DeleteInstanceSnapshot,
    CreateInstancesFromSnapshot,
    CreateLoadBalancer,
    DeleteLoadBalancer,
    AttachInstancesToLoadBalancer,
    DetachInstancesFromLoadBalancer,
    UpdateLoadBalancerAttribute,
    CreateLoadBalancerTlsCertificate,
    DeleteLoadBalancerTlsCertificate,
    AttachLoadBalancerTlsCertificate,
    CreateDisk,
    DeleteDisk,
    AttachDisk,
    DetachDisk,
    CreateDiskSnapshot,
    DeleteDiskSnapshot,
    CreateDiskFromSnapshot,
    CreateRelationalDatabase,
    UpdateRelationalDatabase,
    DeleteRelationalDatabase,
    CreateRelationalDatabaseFromSnapshot,
    CreateRelationalDatabaseSnapshot,
    DeleteRelationalDatabaseSnapshot,
    UpdateRelationalDatabaseParameters,
    StartRelationalDatabase,
    RebootRelationalDatabase,
    StopRelationalDatabase,
    EnableAddOn,
    DisableAddOn,
    PutAlarm,
    GetAlarms,
    DeleteAlarm,
    TestAlarm,
    CreateContactMethod,
    GetContactMethods,
    SendContactMethodVerification,
    DeleteContactMethod,
    CreateDistribution,
    UpdateDistribution,
    DeleteDistribution,
    ResetDistributionCache,
    AttachCertificateToDistribution,
    DetachCertificateFromDistribution,
    UpdateDistributionBundle,
    SetIpAddressType,
    CreateCertificate,
    DeleteCertificate,
    CreateContainerService,
    UpdateContainerService,
    DeleteContainerService,
    CreateContainerServiceDeployment,
    CreateContainerServiceRegistryLogin,
    RegisterContainerImage,
    DeleteContainerImage,
    CreateBucket,
    DeleteBucket,
    CreateBucketAccessKey,
    DeleteBucketAccessKey,
    UpdateBucketBundle,
    UpdateBucket,
    SetResourceAccessForBucket,
    UpdateInstanceMetadataOptions
  };

namespace OperationTypeMapper
{
AWS_LIGHTSAIL_API OperationType GetOperationTypeForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForOperationType(OperationType value);
} // namespace OperationTypeMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
