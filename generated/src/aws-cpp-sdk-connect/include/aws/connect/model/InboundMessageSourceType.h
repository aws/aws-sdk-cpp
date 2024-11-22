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
  enum class InboundMessageSourceType
  {
    NOT_SET,
    RAW
  };

namespace InboundMessageSourceTypeMapper
{
AWS_CONNECT_API InboundMessageSourceType GetInboundMessageSourceTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForInboundMessageSourceType(InboundMessageSourceType value);
} // namespace InboundMessageSourceTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
