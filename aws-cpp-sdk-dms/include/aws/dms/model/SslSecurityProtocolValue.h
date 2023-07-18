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
  enum class SslSecurityProtocolValue
  {
    NOT_SET,
    plaintext,
    ssl_encryption
  };

namespace SslSecurityProtocolValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API SslSecurityProtocolValue GetSslSecurityProtocolValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForSslSecurityProtocolValue(SslSecurityProtocolValue value);
} // namespace SslSecurityProtocolValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
