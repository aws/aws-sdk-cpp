/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{
  enum class FileShareType
  {
    NOT_SET,
    NFS,
    SMB
  };

namespace FileShareTypeMapper
{
AWS_STORAGEGATEWAY_API FileShareType GetFileShareTypeForName(const Aws::String& name);

AWS_STORAGEGATEWAY_API Aws::String GetNameForFileShareType(FileShareType value);
} // namespace FileShareTypeMapper
} // namespace Model
} // namespace StorageGateway
} // namespace Aws
