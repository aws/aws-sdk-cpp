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
  enum class OutboundMessageSourceType
  {
    NOT_SET,
    TEMPLATE,
    RAW
  };

namespace OutboundMessageSourceTypeMapper
{
AWS_CONNECT_API OutboundMessageSourceType GetOutboundMessageSourceTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForOutboundMessageSourceType(OutboundMessageSourceType value);
} // namespace OutboundMessageSourceTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
