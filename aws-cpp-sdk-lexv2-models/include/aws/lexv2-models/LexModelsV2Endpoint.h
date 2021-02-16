/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace LexModelsV2
{
namespace LexModelsV2Endpoint
{
AWS_LEXMODELSV2_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace LexModelsV2Endpoint
} // namespace LexModelsV2
} // namespace Aws
