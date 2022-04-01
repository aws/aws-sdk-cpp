/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace OpsWorksCM
{
namespace OpsWorksCMEndpoint
{
AWS_OPSWORKSCM_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace OpsWorksCMEndpoint
} // namespace OpsWorksCM
} // namespace Aws
