/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{
  enum class ExportFilesStatus
  {
    NOT_SET,
    SUCCEEDED,
    FAILED,
    PENDING
  };

namespace ExportFilesStatusMapper
{
AWS_GAMELIFTSTREAMS_API ExportFilesStatus GetExportFilesStatusForName(const Aws::String& name);

AWS_GAMELIFTSTREAMS_API Aws::String GetNameForExportFilesStatus(ExportFilesStatus value);
} // namespace ExportFilesStatusMapper
} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
