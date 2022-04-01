/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Braket
{
namespace BraketEndpoint
{
AWS_BRAKET_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace BraketEndpoint
} // namespace Braket
} // namespace Aws
