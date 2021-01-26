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
  enum class DeliveryStreamFailureType
  {
    NOT_SET,
    RETIRE_KMS_GRANT_FAILED,
    CREATE_KMS_GRANT_FAILED,
    KMS_ACCESS_DENIED,
    DISABLED_KMS_KEY,
    INVALID_KMS_KEY,
    KMS_KEY_NOT_FOUND,
    KMS_OPT_IN_REQUIRED,
    CREATE_ENI_FAILED,
    DELETE_ENI_FAILED,
    SUBNET_NOT_FOUND,
    SECURITY_GROUP_NOT_FOUND,
    ENI_ACCESS_DENIED,
    SUBNET_ACCESS_DENIED,
    SECURITY_GROUP_ACCESS_DENIED,
    UNKNOWN_ERROR
  };

namespace DeliveryStreamFailureTypeMapper
{
AWS_FIREHOSE_API DeliveryStreamFailureType GetDeliveryStreamFailureTypeForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForDeliveryStreamFailureType(DeliveryStreamFailureType value);
} // namespace DeliveryStreamFailureTypeMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
