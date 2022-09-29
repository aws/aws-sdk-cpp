/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class ServiceLimit
  {
    NOT_SET,
    FILE_SYSTEM_COUNT,
    TOTAL_THROUGHPUT_CAPACITY,
    TOTAL_STORAGE,
    TOTAL_USER_INITIATED_BACKUPS,
    TOTAL_USER_TAGS,
    TOTAL_IN_PROGRESS_COPY_BACKUPS,
    STORAGE_VIRTUAL_MACHINES_PER_FILE_SYSTEM,
    VOLUMES_PER_FILE_SYSTEM,
    TOTAL_SSD_IOPS,
    FILE_CACHE_COUNT
  };

namespace ServiceLimitMapper
{
AWS_FSX_API ServiceLimit GetServiceLimitForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForServiceLimit(ServiceLimit value);
} // namespace ServiceLimitMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
