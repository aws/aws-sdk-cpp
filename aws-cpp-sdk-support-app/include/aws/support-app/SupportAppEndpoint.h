/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace SupportApp
{
namespace SupportAppEndpoint
{
AWS_SUPPORTAPP_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace SupportAppEndpoint
} // namespace SupportApp
} // namespace Aws
