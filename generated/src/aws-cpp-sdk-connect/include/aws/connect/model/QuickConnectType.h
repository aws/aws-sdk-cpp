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
  enum class QuickConnectType
  {
    NOT_SET,
    USER,
    QUEUE,
    PHONE_NUMBER
  };

namespace QuickConnectTypeMapper
{
AWS_CONNECT_API QuickConnectType GetQuickConnectTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForQuickConnectType(QuickConnectType value);
} // namespace QuickConnectTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
