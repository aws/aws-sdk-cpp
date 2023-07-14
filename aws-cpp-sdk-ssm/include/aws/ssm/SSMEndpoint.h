/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace SSM
{
namespace SSMEndpoint
{
AWS_SSM_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace SSMEndpoint
} // namespace SSM
} // namespace Aws
