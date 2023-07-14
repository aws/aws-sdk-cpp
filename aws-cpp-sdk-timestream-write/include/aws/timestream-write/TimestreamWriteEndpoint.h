/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace TimestreamWrite
{
namespace TimestreamWriteEndpoint
{
AWS_TIMESTREAMWRITE_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace TimestreamWriteEndpoint
} // namespace TimestreamWrite
} // namespace Aws
