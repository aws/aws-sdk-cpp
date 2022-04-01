/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace GuardDuty
{
namespace GuardDutyEndpoint
{
AWS_GUARDDUTY_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace GuardDutyEndpoint
} // namespace GuardDuty
} // namespace Aws
