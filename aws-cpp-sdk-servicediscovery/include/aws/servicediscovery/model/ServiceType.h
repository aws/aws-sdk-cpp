/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{
  enum class ServiceType
  {
    NOT_SET,
    HTTP,
    DNS_HTTP,
    DNS
  };

namespace ServiceTypeMapper
{
AWS_SERVICEDISCOVERY_API ServiceType GetServiceTypeForName(const Aws::String& name);

AWS_SERVICEDISCOVERY_API Aws::String GetNameForServiceType(ServiceType value);
} // namespace ServiceTypeMapper
} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
