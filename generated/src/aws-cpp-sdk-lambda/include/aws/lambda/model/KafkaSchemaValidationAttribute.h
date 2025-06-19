/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lambda
{
namespace Model
{
  enum class KafkaSchemaValidationAttribute
  {
    NOT_SET,
    KEY,
    VALUE
  };

namespace KafkaSchemaValidationAttributeMapper
{
AWS_LAMBDA_API KafkaSchemaValidationAttribute GetKafkaSchemaValidationAttributeForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForKafkaSchemaValidationAttribute(KafkaSchemaValidationAttribute value);
} // namespace KafkaSchemaValidationAttributeMapper
} // namespace Model
} // namespace Lambda
} // namespace Aws
