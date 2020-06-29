/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace DirectConnect
{
namespace DirectConnectEndpoint
{
AWS_DIRECTCONNECT_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace DirectConnectEndpoint
} // namespace DirectConnect
} // namespace Aws
