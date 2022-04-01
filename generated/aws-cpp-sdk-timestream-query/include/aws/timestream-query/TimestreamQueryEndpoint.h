/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace TimestreamQuery
{
namespace TimestreamQueryEndpoint
{
AWS_TIMESTREAMQUERY_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace TimestreamQueryEndpoint
} // namespace TimestreamQuery
} // namespace Aws
