/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace QLDBSession
{
namespace QLDBSessionEndpoint
{
AWS_QLDBSESSION_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace QLDBSessionEndpoint
} // namespace QLDBSession
} // namespace Aws
