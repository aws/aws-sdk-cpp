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
  enum class MetadataGenerationRunStatus
  {
    NOT_SET,
    SUBMITTED,
    IN_PROGRESS,
    CANCELED,
    SUCCEEDED,
    FAILED
  };

namespace MetadataGenerationRunStatusMapper
{
AWS_DATAZONE_API MetadataGenerationRunStatus GetMetadataGenerationRunStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForMetadataGenerationRunStatus(MetadataGenerationRunStatus value);
} // namespace MetadataGenerationRunStatusMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
