/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{
  enum class KafkaSecurityProtocol
  {
    NOT_SET,
    plaintext,
    ssl_authentication,
    ssl_encryption,
    sasl_ssl
  };

namespace KafkaSecurityProtocolMapper
{
AWS_DATABASEMIGRATIONSERVICE_API KafkaSecurityProtocol GetKafkaSecurityProtocolForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForKafkaSecurityProtocol(KafkaSecurityProtocol value);
} // namespace KafkaSecurityProtocolMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
