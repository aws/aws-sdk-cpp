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
  enum class StorageSystemConnectivityStatus
  {
    NOT_SET,
    PASS,
    FAIL,
    UNKNOWN
  };

namespace StorageSystemConnectivityStatusMapper
{
AWS_DATASYNC_API StorageSystemConnectivityStatus GetStorageSystemConnectivityStatusForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForStorageSystemConnectivityStatus(StorageSystemConnectivityStatus value);
} // namespace StorageSystemConnectivityStatusMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
