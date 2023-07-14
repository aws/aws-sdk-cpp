/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaStore
{
namespace Model
{
  enum class ContainerStatus
  {
    NOT_SET,
    ACTIVE,
    CREATING,
    DELETING
  };

namespace ContainerStatusMapper
{
AWS_MEDIASTORE_API ContainerStatus GetContainerStatusForName(const Aws::String& name);

AWS_MEDIASTORE_API Aws::String GetNameForContainerStatus(ContainerStatus value);
} // namespace ContainerStatusMapper
} // namespace Model
} // namespace MediaStore
} // namespace Aws
