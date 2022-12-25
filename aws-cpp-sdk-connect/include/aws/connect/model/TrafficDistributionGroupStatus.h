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
  enum class TrafficDistributionGroupStatus
  {
    NOT_SET,
    CREATION_IN_PROGRESS,
    ACTIVE,
    CREATION_FAILED,
    PENDING_DELETION,
    DELETION_FAILED,
    UPDATE_IN_PROGRESS
  };

namespace TrafficDistributionGroupStatusMapper
{
AWS_CONNECT_API TrafficDistributionGroupStatus GetTrafficDistributionGroupStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForTrafficDistributionGroupStatus(TrafficDistributionGroupStatus value);
} // namespace TrafficDistributionGroupStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
