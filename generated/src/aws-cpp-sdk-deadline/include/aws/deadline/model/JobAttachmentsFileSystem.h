/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class JobAttachmentsFileSystem
  {
    NOT_SET,
    COPIED,
    VIRTUAL
  };

namespace JobAttachmentsFileSystemMapper
{
AWS_DEADLINE_API JobAttachmentsFileSystem GetJobAttachmentsFileSystemForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForJobAttachmentsFileSystem(JobAttachmentsFileSystem value);
} // namespace JobAttachmentsFileSystemMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
