/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{
  enum class DatastoreStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING
  };

namespace DatastoreStatusMapper
{
AWS_IOTANALYTICS_API DatastoreStatus GetDatastoreStatusForName(const Aws::String& name);

AWS_IOTANALYTICS_API Aws::String GetNameForDatastoreStatus(DatastoreStatus value);
} // namespace DatastoreStatusMapper
} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
