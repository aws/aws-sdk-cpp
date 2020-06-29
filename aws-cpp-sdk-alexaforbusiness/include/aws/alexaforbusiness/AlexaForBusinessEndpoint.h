/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace AlexaForBusiness
{
namespace AlexaForBusinessEndpoint
{
AWS_ALEXAFORBUSINESS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace AlexaForBusinessEndpoint
} // namespace AlexaForBusiness
} // namespace Aws
