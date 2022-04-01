/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ServiceQuotas
{
namespace ServiceQuotasEndpoint
{
AWS_SERVICEQUOTAS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ServiceQuotasEndpoint
} // namespace ServiceQuotas
} // namespace Aws
