/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace CloudSearchDomain
{
namespace CloudSearchDomainEndpoint
{
AWS_CLOUDSEARCHDOMAIN_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace CloudSearchDomainEndpoint
} // namespace CloudSearchDomain
} // namespace Aws
