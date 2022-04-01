/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace OpsWorks
{
namespace OpsWorksEndpoint
{
AWS_OPSWORKS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace OpsWorksEndpoint
} // namespace OpsWorks
} // namespace Aws
