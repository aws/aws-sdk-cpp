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
  enum class S3AccessPointAttachmentType
  {
    NOT_SET,
    OPENZFS
  };

namespace S3AccessPointAttachmentTypeMapper
{
AWS_FSX_API S3AccessPointAttachmentType GetS3AccessPointAttachmentTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForS3AccessPointAttachmentType(S3AccessPointAttachmentType value);
} // namespace S3AccessPointAttachmentTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
