/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Kafka
{
namespace Model
{
  enum class CustomerActionStatus
  {
    NOT_SET,
    CRITICAL_ACTION_REQUIRED,
    ACTION_RECOMMENDED,
    NONE
  };

namespace CustomerActionStatusMapper
{
AWS_KAFKA_API CustomerActionStatus GetCustomerActionStatusForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForCustomerActionStatus(CustomerActionStatus value);
} // namespace CustomerActionStatusMapper
} // namespace Model
} // namespace Kafka
} // namespace Aws
