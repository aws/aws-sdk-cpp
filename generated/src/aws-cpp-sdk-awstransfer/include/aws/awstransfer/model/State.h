/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class State
  {
    NOT_SET,
    OFFLINE,
    ONLINE,
    STARTING,
    STOPPING,
    START_FAILED,
    STOP_FAILED
  };

namespace StateMapper
{
AWS_TRANSFER_API State GetStateForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForState(State value);
} // namespace StateMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
