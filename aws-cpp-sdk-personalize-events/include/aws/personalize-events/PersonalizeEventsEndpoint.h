/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace PersonalizeEvents
{
namespace PersonalizeEventsEndpoint
{
AWS_PERSONALIZEEVENTS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace PersonalizeEventsEndpoint
} // namespace PersonalizeEvents
} // namespace Aws
