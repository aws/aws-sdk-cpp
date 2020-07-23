/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class ConnectionPropertyKey
  {
    NOT_SET,
    HOST,
    PORT,
    USERNAME,
    PASSWORD,
    ENCRYPTED_PASSWORD,
    JDBC_DRIVER_JAR_URI,
    JDBC_DRIVER_CLASS_NAME,
    JDBC_ENGINE,
    JDBC_ENGINE_VERSION,
    CONFIG_FILES,
    INSTANCE_ID,
    JDBC_CONNECTION_URL,
    JDBC_ENFORCE_SSL,
    CUSTOM_JDBC_CERT,
    SKIP_CUSTOM_JDBC_CERT_VALIDATION,
    CUSTOM_JDBC_CERT_STRING,
    CONNECTION_URL,
    KAFKA_BOOTSTRAP_SERVERS,
    KAFKA_SSL_ENABLED,
    KAFKA_CUSTOM_CERT,
    KAFKA_SKIP_CUSTOM_CERT_VALIDATION
  };

namespace ConnectionPropertyKeyMapper
{
AWS_GLUE_API ConnectionPropertyKey GetConnectionPropertyKeyForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForConnectionPropertyKey(ConnectionPropertyKey value);
} // namespace ConnectionPropertyKeyMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
