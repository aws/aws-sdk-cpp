/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Inspector
{
namespace InspectorEndpoint
{
AWS_INSPECTOR_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace InspectorEndpoint
} // namespace Inspector
} // namespace Aws
