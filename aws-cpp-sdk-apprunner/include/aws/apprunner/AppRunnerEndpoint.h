/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace AppRunner
{
namespace AppRunnerEndpoint
{
AWS_APPRUNNER_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace AppRunnerEndpoint
} // namespace AppRunner
} // namespace Aws
