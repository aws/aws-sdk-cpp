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
  enum class UserIdentityType
  {
    NOT_SET,
    AWSACCOUNT,
    AWSSERVICE
  };

namespace UserIdentityTypeMapper
{
AWS_KAFKA_API UserIdentityType GetUserIdentityTypeForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForUserIdentityType(UserIdentityType value);
} // namespace UserIdentityTypeMapper
} // namespace Model
} // namespace Kafka
} // namespace Aws
