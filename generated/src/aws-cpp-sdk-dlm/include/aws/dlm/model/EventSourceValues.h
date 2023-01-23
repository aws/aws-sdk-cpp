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
  enum class EventSourceValues
  {
    NOT_SET,
    MANAGED_CWE
  };

namespace EventSourceValuesMapper
{
AWS_DLM_API EventSourceValues GetEventSourceValuesForName(const Aws::String& name);

AWS_DLM_API Aws::String GetNameForEventSourceValues(EventSourceValues value);
} // namespace EventSourceValuesMapper
} // namespace Model
} // namespace DLM
} // namespace Aws
