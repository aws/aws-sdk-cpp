/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DLM
{
namespace Model
{
  enum class EventTypeValues
  {
    NOT_SET,
    shareSnapshot
  };

namespace EventTypeValuesMapper
{
AWS_DLM_API EventTypeValues GetEventTypeValuesForName(const Aws::String& name);

AWS_DLM_API Aws::String GetNameForEventTypeValues(EventTypeValues value);
} // namespace EventTypeValuesMapper
} // namespace Model
} // namespace DLM
} // namespace Aws
