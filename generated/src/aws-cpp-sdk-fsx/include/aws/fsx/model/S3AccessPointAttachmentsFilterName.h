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
  enum class S3AccessPointAttachmentsFilterName
  {
    NOT_SET,
    file_system_id,
    volume_id,
    type
  };

namespace S3AccessPointAttachmentsFilterNameMapper
{
AWS_FSX_API S3AccessPointAttachmentsFilterName GetS3AccessPointAttachmentsFilterNameForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForS3AccessPointAttachmentsFilterName(S3AccessPointAttachmentsFilterName value);
} // namespace S3AccessPointAttachmentsFilterNameMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
