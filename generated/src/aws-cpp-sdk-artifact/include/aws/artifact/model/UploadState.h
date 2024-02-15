/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Artifact
{
namespace Model
{
  enum class UploadState
  {
    NOT_SET,
    PROCESSING,
    COMPLETE,
    FAILED,
    FAULT
  };

namespace UploadStateMapper
{
AWS_ARTIFACT_API UploadState GetUploadStateForName(const Aws::String& name);

AWS_ARTIFACT_API Aws::String GetNameForUploadState(UploadState value);
} // namespace UploadStateMapper
} // namespace Model
} // namespace Artifact
} // namespace Aws
