/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ACM
{
namespace ACMEndpoint
{
AWS_ACM_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ACMEndpoint
} // namespace ACM
} // namespace Aws
