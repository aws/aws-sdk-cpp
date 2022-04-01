/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace CloudHSM
{
namespace CloudHSMEndpoint
{
AWS_CLOUDHSM_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace CloudHSMEndpoint
} // namespace CloudHSM
} // namespace Aws
