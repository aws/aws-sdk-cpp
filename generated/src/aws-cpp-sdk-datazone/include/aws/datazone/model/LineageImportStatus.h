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
  enum class LineageImportStatus
  {
    NOT_SET,
    IN_PROGRESS,
    SUCCESS,
    FAILED,
    PARTIALLY_SUCCEEDED
  };

namespace LineageImportStatusMapper
{
AWS_DATAZONE_API LineageImportStatus GetLineageImportStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForLineageImportStatus(LineageImportStatus value);
} // namespace LineageImportStatusMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
