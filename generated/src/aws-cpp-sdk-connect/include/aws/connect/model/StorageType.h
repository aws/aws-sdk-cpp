/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class StorageType
  {
    NOT_SET,
    S3,
    KINESIS_VIDEO_STREAM,
    KINESIS_STREAM,
    KINESIS_FIREHOSE
  };

namespace StorageTypeMapper
{
AWS_CONNECT_API StorageType GetStorageTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForStorageType(StorageType value);
} // namespace StorageTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
