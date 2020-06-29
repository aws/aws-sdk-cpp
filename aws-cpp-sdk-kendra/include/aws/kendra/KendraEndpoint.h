/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace kendra
{
namespace KendraEndpoint
{
AWS_KENDRA_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace KendraEndpoint
} // namespace kendra
} // namespace Aws
