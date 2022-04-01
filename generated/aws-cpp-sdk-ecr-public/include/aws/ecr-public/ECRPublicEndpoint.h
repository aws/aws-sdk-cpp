/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ECRPublic
{
namespace ECRPublicEndpoint
{
AWS_ECRPUBLIC_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ECRPublicEndpoint
} // namespace ECRPublic
} // namespace Aws
