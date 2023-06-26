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
  enum class ObjectStorageServerProtocol
  {
    NOT_SET,
    HTTPS,
    HTTP
  };

namespace ObjectStorageServerProtocolMapper
{
AWS_DATASYNC_API ObjectStorageServerProtocol GetObjectStorageServerProtocolForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForObjectStorageServerProtocol(ObjectStorageServerProtocol value);
} // namespace ObjectStorageServerProtocolMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
