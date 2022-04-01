/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace CloudHSMV2
{
namespace CloudHSMV2Endpoint
{
AWS_CLOUDHSMV2_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace CloudHSMV2Endpoint
} // namespace CloudHSMV2
} // namespace Aws
