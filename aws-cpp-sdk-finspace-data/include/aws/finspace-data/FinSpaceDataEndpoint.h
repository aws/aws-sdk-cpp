/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace FinSpaceData
{
namespace FinSpaceDataEndpoint
{
AWS_FINSPACEDATA_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace FinSpaceDataEndpoint
} // namespace FinSpaceData
} // namespace Aws
