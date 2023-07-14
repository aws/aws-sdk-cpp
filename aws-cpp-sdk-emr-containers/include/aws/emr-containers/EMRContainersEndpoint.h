/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace EMRContainers
{
namespace EMRContainersEndpoint
{
AWS_EMRCONTAINERS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace EMRContainersEndpoint
} // namespace EMRContainers
} // namespace Aws
