/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Macie2
{
namespace Macie2Endpoint
{
AWS_MACIE2_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace Macie2Endpoint
} // namespace Macie2
} // namespace Aws
