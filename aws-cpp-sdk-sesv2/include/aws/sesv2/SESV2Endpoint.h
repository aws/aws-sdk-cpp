/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace SESV2
{
namespace SESV2Endpoint
{
AWS_SESV2_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace SESV2Endpoint
} // namespace SESV2
} // namespace Aws
