/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{
  enum class DirectoryStage
  {
    NOT_SET,
    Requested,
    Creating,
    Created,
    Active,
    Inoperable,
    Impaired,
    Restoring,
    RestoreFailed,
    Deleting,
    Deleted,
    Failed
  };

namespace DirectoryStageMapper
{
AWS_DIRECTORYSERVICE_API DirectoryStage GetDirectoryStageForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForDirectoryStage(DirectoryStage value);
} // namespace DirectoryStageMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
