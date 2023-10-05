/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class DataAssetActivityStatus
  {
    NOT_SET,
    FAILED,
    PUBLISHING_FAILED,
    SUCCEEDED_CREATED,
    SUCCEEDED_UPDATED,
    SKIPPED_ALREADY_IMPORTED,
    SKIPPED_ARCHIVED,
    SKIPPED_NO_ACCESS,
    UNCHANGED
  };

namespace DataAssetActivityStatusMapper
{
AWS_DATAZONE_API DataAssetActivityStatus GetDataAssetActivityStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForDataAssetActivityStatus(DataAssetActivityStatus value);
} // namespace DataAssetActivityStatusMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
