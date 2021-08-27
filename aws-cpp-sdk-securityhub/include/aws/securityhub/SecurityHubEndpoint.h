/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace SecurityHub
{
namespace SecurityHubEndpoint
{
AWS_SECURITYHUB_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace SecurityHubEndpoint
} // namespace SecurityHub
} // namespace Aws
