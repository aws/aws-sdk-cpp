/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{
  enum class PreserveDeletedFiles
  {
    NOT_SET,
    PRESERVE,
    REMOVE
  };

namespace PreserveDeletedFilesMapper
{
AWS_DATASYNC_API PreserveDeletedFiles GetPreserveDeletedFilesForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForPreserveDeletedFiles(PreserveDeletedFiles value);
} // namespace PreserveDeletedFilesMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
