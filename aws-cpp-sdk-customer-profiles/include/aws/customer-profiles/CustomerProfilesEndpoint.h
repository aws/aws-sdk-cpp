﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace CustomerProfiles
{
namespace CustomerProfilesEndpoint
{
AWS_CUSTOMERPROFILES_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace CustomerProfilesEndpoint
} // namespace CustomerProfiles
} // namespace Aws
