/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace MemoryDB
{
namespace MemoryDBEndpoint
{
AWS_MEMORYDB_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace MemoryDBEndpoint
} // namespace MemoryDB
} // namespace Aws
