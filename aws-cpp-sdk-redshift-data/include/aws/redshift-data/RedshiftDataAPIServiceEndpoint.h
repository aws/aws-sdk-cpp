/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace RedshiftDataAPIService
{
namespace RedshiftDataAPIServiceEndpoint
{
AWS_REDSHIFTDATAAPISERVICE_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace RedshiftDataAPIServiceEndpoint
} // namespace RedshiftDataAPIService
} // namespace Aws
