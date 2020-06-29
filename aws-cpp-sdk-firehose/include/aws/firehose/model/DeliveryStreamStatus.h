/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Firehose
{
namespace Model
{
  enum class DeliveryStreamStatus
  {
    NOT_SET,
    CREATING,
    CREATING_FAILED,
    DELETING,
    DELETING_FAILED,
    ACTIVE
  };

namespace DeliveryStreamStatusMapper
{
AWS_FIREHOSE_API DeliveryStreamStatus GetDeliveryStreamStatusForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForDeliveryStreamStatus(DeliveryStreamStatus value);
} // namespace DeliveryStreamStatusMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
