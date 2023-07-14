/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Chime
{
namespace ChimeEndpoint
{
AWS_CHIME_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ChimeEndpoint
} // namespace Chime
} // namespace Aws
