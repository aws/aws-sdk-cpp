/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Cloud9
{
namespace Cloud9Endpoint
{
AWS_CLOUD9_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace Cloud9Endpoint
} // namespace Cloud9
} // namespace Aws
