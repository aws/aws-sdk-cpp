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
  enum class LineageEventProcessingStatus
  {
    NOT_SET,
    REQUESTED,
    PROCESSING,
    SUCCESS,
    FAILED
  };

namespace LineageEventProcessingStatusMapper
{
AWS_DATAZONE_API LineageEventProcessingStatus GetLineageEventProcessingStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForLineageEventProcessingStatus(LineageEventProcessingStatus value);
} // namespace LineageEventProcessingStatusMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
