/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class IndexStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING,
    FAILED,
    UPDATING,
    SYSTEM_UPDATING
  };

namespace IndexStatusMapper
{
AWS_KENDRA_API IndexStatus GetIndexStatusForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForIndexStatus(IndexStatus value);
} // namespace IndexStatusMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
