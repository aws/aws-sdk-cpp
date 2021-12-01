/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class EventType
  {
    NOT_SET,
    NEW_,
    CHANGED,
    DELETED
  };

namespace EventTypeMapper
{
AWS_FSX_API EventType GetEventTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForEventType(EventType value);
} // namespace EventTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
