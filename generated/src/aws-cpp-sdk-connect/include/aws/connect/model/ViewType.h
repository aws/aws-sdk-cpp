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
  enum class ViewType
  {
    NOT_SET,
    CUSTOMER_MANAGED,
    AWS_MANAGED
  };

namespace ViewTypeMapper
{
AWS_CONNECT_API ViewType GetViewTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForViewType(ViewType value);
} // namespace ViewTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
