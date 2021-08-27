/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{
  enum class SnapshotType
  {
    NOT_SET,
    Auto,
    Manual
  };

namespace SnapshotTypeMapper
{
AWS_DIRECTORYSERVICE_API SnapshotType GetSnapshotTypeForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForSnapshotType(SnapshotType value);
} // namespace SnapshotTypeMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
