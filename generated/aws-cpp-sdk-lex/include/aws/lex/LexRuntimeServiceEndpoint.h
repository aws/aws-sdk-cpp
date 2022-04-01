/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace LexRuntimeService
{
namespace LexRuntimeServiceEndpoint
{
AWS_LEXRUNTIMESERVICE_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace LexRuntimeServiceEndpoint
} // namespace LexRuntimeService
} // namespace Aws
