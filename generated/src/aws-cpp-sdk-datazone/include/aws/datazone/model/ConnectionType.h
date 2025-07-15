/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class ConnectionType
  {
    NOT_SET,
    ATHENA,
    BIGQUERY,
    DATABRICKS,
    DOCUMENTDB,
    DYNAMODB,
    HYPERPOD,
    IAM,
    MYSQL,
    OPENSEARCH,
    ORACLE,
    POSTGRESQL,
    REDSHIFT,
    S3,
    SAPHANA,
    SNOWFLAKE,
    SPARK,
    SQLSERVER,
    TERADATA,
    VERTICA,
    WORKFLOWS_MWAA
  };

namespace ConnectionTypeMapper
{
AWS_DATAZONE_API ConnectionType GetConnectionTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForConnectionType(ConnectionType value);
} // namespace ConnectionTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
