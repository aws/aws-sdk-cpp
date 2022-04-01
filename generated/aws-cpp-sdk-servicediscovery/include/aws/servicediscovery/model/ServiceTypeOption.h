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
  enum class ServiceTypeOption
  {
    NOT_SET,
    HTTP
  };

namespace ServiceTypeOptionMapper
{
AWS_SERVICEDISCOVERY_API ServiceTypeOption GetServiceTypeOptionForName(const Aws::String& name);

AWS_SERVICEDISCOVERY_API Aws::String GetNameForServiceTypeOption(ServiceTypeOption value);
} // namespace ServiceTypeOptionMapper
} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
