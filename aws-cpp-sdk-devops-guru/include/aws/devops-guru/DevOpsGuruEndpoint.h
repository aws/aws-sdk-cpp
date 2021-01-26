/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace DevOpsGuru
{
namespace DevOpsGuruEndpoint
{
AWS_DEVOPSGURU_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace DevOpsGuruEndpoint
} // namespace DevOpsGuru
} // namespace Aws
