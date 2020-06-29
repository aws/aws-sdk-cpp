/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MQ
{
namespace Model
{
  enum class BrokerState
  {
    NOT_SET,
    CREATION_IN_PROGRESS,
    CREATION_FAILED,
    DELETION_IN_PROGRESS,
    RUNNING,
    REBOOT_IN_PROGRESS
  };

namespace BrokerStateMapper
{
AWS_MQ_API BrokerState GetBrokerStateForName(const Aws::String& name);

AWS_MQ_API Aws::String GetNameForBrokerState(BrokerState value);
} // namespace BrokerStateMapper
} // namespace Model
} // namespace MQ
} // namespace Aws
