/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace DLM
{
namespace DLMEndpoint
{
AWS_DLM_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace DLMEndpoint
} // namespace DLM
} // namespace Aws
