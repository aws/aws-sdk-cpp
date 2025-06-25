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
  enum class S3AccessPointAttachmentLifecycle
  {
    NOT_SET,
    AVAILABLE,
    CREATING,
    DELETING,
    UPDATING,
    FAILED
  };

namespace S3AccessPointAttachmentLifecycleMapper
{
AWS_FSX_API S3AccessPointAttachmentLifecycle GetS3AccessPointAttachmentLifecycleForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForS3AccessPointAttachmentLifecycle(S3AccessPointAttachmentLifecycle value);
} // namespace S3AccessPointAttachmentLifecycleMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
