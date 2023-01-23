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
  enum class SubscriberType
  {
    NOT_SET,
    EMAIL,
    SNS
  };

namespace SubscriberTypeMapper
{
AWS_COSTEXPLORER_API SubscriberType GetSubscriberTypeForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForSubscriberType(SubscriberType value);
} // namespace SubscriberTypeMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
