/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{
  enum class EventDataStoreStatus
  {
    NOT_SET,
    CREATED,
    ENABLED,
    PENDING_DELETION,
    STARTING_INGESTION,
    STOPPING_INGESTION,
    STOPPED_INGESTION
  };

namespace EventDataStoreStatusMapper
{
AWS_CLOUDTRAIL_API EventDataStoreStatus GetEventDataStoreStatusForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForEventDataStoreStatus(EventDataStoreStatus value);
} // namespace EventDataStoreStatusMapper
} // namespace Model
} // namespace CloudTrail
} // namespace Aws
