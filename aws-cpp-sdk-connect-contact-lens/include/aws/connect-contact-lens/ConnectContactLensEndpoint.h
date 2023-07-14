/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ConnectContactLens
{
namespace ConnectContactLensEndpoint
{
AWS_CONNECTCONTACTLENS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ConnectContactLensEndpoint
} // namespace ConnectContactLens
} // namespace Aws
