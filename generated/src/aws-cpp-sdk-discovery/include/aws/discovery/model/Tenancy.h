/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{
  enum class Tenancy
  {
    NOT_SET,
    DEDICATED,
    SHARED
  };

namespace TenancyMapper
{
AWS_APPLICATIONDISCOVERYSERVICE_API Tenancy GetTenancyForName(const Aws::String& name);

AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String GetNameForTenancy(Tenancy value);
} // namespace TenancyMapper
} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
