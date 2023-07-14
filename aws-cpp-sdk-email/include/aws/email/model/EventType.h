/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{
  enum class EventType
  {
    NOT_SET,
    send,
    reject,
    bounce,
    complaint,
    delivery,
    open,
    click,
    renderingFailure
  };

namespace EventTypeMapper
{
AWS_SES_API EventType GetEventTypeForName(const Aws::String& name);

AWS_SES_API Aws::String GetNameForEventType(EventType value);
} // namespace EventTypeMapper
} // namespace Model
} // namespace SES
} // namespace Aws
