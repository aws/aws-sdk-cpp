/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace CloudSearch
{
namespace CloudSearchEndpoint
{
AWS_CLOUDSEARCH_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace CloudSearchEndpoint
} // namespace CloudSearch
} // namespace Aws
