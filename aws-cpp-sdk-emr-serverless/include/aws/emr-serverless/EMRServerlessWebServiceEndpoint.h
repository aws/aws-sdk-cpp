/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerlessWebService_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace EMRServerlessWebService
{
namespace EMRServerlessWebServiceEndpoint
{
AWS_EMRSERVERLESSWEBSERVICE_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace EMRServerlessWebServiceEndpoint
} // namespace EMRServerlessWebService
} // namespace Aws
