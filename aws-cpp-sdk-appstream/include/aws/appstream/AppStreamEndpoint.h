/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace AppStream
{
namespace AppStreamEndpoint
{
AWS_APPSTREAM_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace AppStreamEndpoint
} // namespace AppStream
} // namespace Aws
