/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace mgn
{
namespace MgnEndpoint
{
AWS_MGN_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace MgnEndpoint
} // namespace mgn
} // namespace Aws
