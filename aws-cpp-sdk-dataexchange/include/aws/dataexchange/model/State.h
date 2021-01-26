/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataExchange
{
namespace Model
{
  enum class State
  {
    NOT_SET,
    WAITING,
    IN_PROGRESS,
    ERROR_,
    COMPLETED,
    CANCELLED,
    TIMED_OUT
  };

namespace StateMapper
{
AWS_DATAEXCHANGE_API State GetStateForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForState(State value);
} // namespace StateMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
