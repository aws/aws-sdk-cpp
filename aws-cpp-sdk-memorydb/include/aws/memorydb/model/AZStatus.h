/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{
  enum class AZStatus
  {
    NOT_SET,
    singleaz,
    multiaz
  };

namespace AZStatusMapper
{
AWS_MEMORYDB_API AZStatus GetAZStatusForName(const Aws::String& name);

AWS_MEMORYDB_API Aws::String GetNameForAZStatus(AZStatus value);
} // namespace AZStatusMapper
} // namespace Model
} // namespace MemoryDB
} // namespace Aws
