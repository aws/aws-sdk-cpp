/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Organizations
{
namespace OrganizationsEndpoint
{
AWS_ORGANIZATIONS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace OrganizationsEndpoint
} // namespace Organizations
} // namespace Aws
