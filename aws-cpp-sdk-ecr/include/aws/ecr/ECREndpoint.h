/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ECR
{
namespace ECREndpoint
{
AWS_ECR_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ECREndpoint
} // namespace ECR
} // namespace Aws
