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
  enum class S3StorageClass
  {
    NOT_SET,
    STANDARD,
    STANDARD_IA,
    ONEZONE_IA,
    INTELLIGENT_TIERING,
    GLACIER,
    DEEP_ARCHIVE,
    OUTPOSTS,
    GLACIER_INSTANT_RETRIEVAL
  };

namespace S3StorageClassMapper
{
AWS_DATASYNC_API S3StorageClass GetS3StorageClassForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForS3StorageClass(S3StorageClass value);
} // namespace S3StorageClassMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
