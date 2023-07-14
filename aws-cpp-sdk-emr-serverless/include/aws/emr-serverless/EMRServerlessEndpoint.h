/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace EMRServerless
{
namespace EMRServerlessEndpoint
{
AWS_EMRSERVERLESS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace EMRServerlessEndpoint
} // namespace EMRServerless
} // namespace Aws
