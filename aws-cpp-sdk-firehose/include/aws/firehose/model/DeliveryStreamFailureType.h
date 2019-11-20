/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
