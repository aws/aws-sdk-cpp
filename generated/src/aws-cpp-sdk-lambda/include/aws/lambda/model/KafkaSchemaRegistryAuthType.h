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
  enum class KafkaSchemaRegistryAuthType
  {
    NOT_SET,
    BASIC_AUTH,
    CLIENT_CERTIFICATE_TLS_AUTH,
    SERVER_ROOT_CA_CERTIFICATE
  };

namespace KafkaSchemaRegistryAuthTypeMapper
{
AWS_LAMBDA_API KafkaSchemaRegistryAuthType GetKafkaSchemaRegistryAuthTypeForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForKafkaSchemaRegistryAuthType(KafkaSchemaRegistryAuthType value);
} // namespace KafkaSchemaRegistryAuthTypeMapper
} // namespace Model
} // namespace Lambda
} // namespace Aws
