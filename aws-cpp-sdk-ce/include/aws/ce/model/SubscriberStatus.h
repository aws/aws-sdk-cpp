/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{
  enum class SubscriberStatus
  {
    NOT_SET,
    CONFIRMED,
    DECLINED
  };

namespace SubscriberStatusMapper
{
AWS_COSTEXPLORER_API SubscriberStatus GetSubscriberStatusForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForSubscriberStatus(SubscriberStatus value);
} // namespace SubscriberStatusMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
