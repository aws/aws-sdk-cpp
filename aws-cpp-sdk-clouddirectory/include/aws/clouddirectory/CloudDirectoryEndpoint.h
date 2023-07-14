/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace CloudDirectory
{
namespace CloudDirectoryEndpoint
{
AWS_CLOUDDIRECTORY_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace CloudDirectoryEndpoint
} // namespace CloudDirectory
} // namespace Aws
