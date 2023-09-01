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
  enum class ViewStatus
  {
    NOT_SET,
    PUBLISHED,
    SAVED
  };

namespace ViewStatusMapper
{
AWS_CONNECT_API ViewStatus GetViewStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForViewStatus(ViewStatus value);
} // namespace ViewStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
