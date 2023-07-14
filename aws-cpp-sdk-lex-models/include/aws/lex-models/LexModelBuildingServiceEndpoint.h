/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace LexModelBuildingService
{
namespace LexModelBuildingServiceEndpoint
{
AWS_LEXMODELBUILDINGSERVICE_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace LexModelBuildingServiceEndpoint
} // namespace LexModelBuildingService
} // namespace Aws
