/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class ReferenceStatus
  {
    NOT_SET,
    APPROVED,
    REJECTED
  };

namespace ReferenceStatusMapper
{
AWS_CONNECT_API ReferenceStatus GetReferenceStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForReferenceStatus(ReferenceStatus value);
} // namespace ReferenceStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
