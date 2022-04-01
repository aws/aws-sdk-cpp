/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace WorkLink
{
namespace WorkLinkEndpoint
{
AWS_WORKLINK_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace WorkLinkEndpoint
} // namespace WorkLink
} // namespace Aws
