/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class IndexStatus
  {
    NOT_SET,
    ACTIVE,
    BUILDING,
    REBUILDING
  };

namespace IndexStatusMapper
{
AWS_IOT_API IndexStatus GetIndexStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForIndexStatus(IndexStatus value);
} // namespace IndexStatusMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
