/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace LexRuntimeV2
{
namespace LexRuntimeV2Endpoint
{
AWS_LEXRUNTIMEV2_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace LexRuntimeV2Endpoint
} // namespace LexRuntimeV2
} // namespace Aws
