/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class StorageConnectorType
  {
    NOT_SET,
    HOMEFOLDERS,
    GOOGLE_DRIVE,
    ONE_DRIVE
  };

namespace StorageConnectorTypeMapper
{
AWS_APPSTREAM_API StorageConnectorType GetStorageConnectorTypeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForStorageConnectorType(StorageConnectorType value);
} // namespace StorageConnectorTypeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
