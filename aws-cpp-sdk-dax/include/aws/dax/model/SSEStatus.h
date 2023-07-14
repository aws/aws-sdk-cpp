/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DAX
{
namespace Model
{
  enum class SSEStatus
  {
    NOT_SET,
    ENABLING,
    ENABLED,
    DISABLING,
    DISABLED
  };

namespace SSEStatusMapper
{
AWS_DAX_API SSEStatus GetSSEStatusForName(const Aws::String& name);

AWS_DAX_API Aws::String GetNameForSSEStatus(SSEStatus value);
} // namespace SSEStatusMapper
} // namespace Model
} // namespace DAX
} // namespace Aws
