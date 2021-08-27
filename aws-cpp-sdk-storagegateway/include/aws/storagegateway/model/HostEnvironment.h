/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{
  enum class HostEnvironment
  {
    NOT_SET,
    VMWARE,
    HYPER_V,
    EC2,
    KVM,
    OTHER
  };

namespace HostEnvironmentMapper
{
AWS_STORAGEGATEWAY_API HostEnvironment GetHostEnvironmentForName(const Aws::String& name);

AWS_STORAGEGATEWAY_API Aws::String GetNameForHostEnvironment(HostEnvironment value);
} // namespace HostEnvironmentMapper
} // namespace Model
} // namespace StorageGateway
} // namespace Aws
