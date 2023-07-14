/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Batch
{
namespace BatchEndpoint
{
AWS_BATCH_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace BatchEndpoint
} // namespace Batch
} // namespace Aws
