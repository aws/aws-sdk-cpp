/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{
  enum class DirectoryState
  {
    NOT_SET,
    ENABLED,
    DISABLED,
    DELETED
  };

namespace DirectoryStateMapper
{
AWS_CLOUDDIRECTORY_API DirectoryState GetDirectoryStateForName(const Aws::String& name);

AWS_CLOUDDIRECTORY_API Aws::String GetNameForDirectoryState(DirectoryState value);
} // namespace DirectoryStateMapper
} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
