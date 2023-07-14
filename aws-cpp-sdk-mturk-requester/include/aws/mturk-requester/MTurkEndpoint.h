/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace MTurk
{
namespace MTurkEndpoint
{
AWS_MTURK_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace MTurkEndpoint
} // namespace MTurk
} // namespace Aws
