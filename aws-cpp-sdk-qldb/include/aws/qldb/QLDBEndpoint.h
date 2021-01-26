/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace QLDB
{
namespace QLDBEndpoint
{
AWS_QLDB_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace QLDBEndpoint
} // namespace QLDB
} // namespace Aws
