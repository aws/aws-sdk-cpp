/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Appflow
{
namespace AppflowEndpoint
{
AWS_APPFLOW_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace AppflowEndpoint
} // namespace Appflow
} // namespace Aws
