/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Athena
{
namespace Model
{
  enum class ConnectionType
  {
    NOT_SET,
    DYNAMODB,
    MYSQL,
    POSTGRESQL,
    REDSHIFT,
    ORACLE,
    SYNAPSE,
    SQLSERVER,
    DB2,
    OPENSEARCH,
    BIGQUERY,
    GOOGLECLOUDSTORAGE,
    HBASE,
    DOCUMENTDB,
    CMDB,
    TPCDS,
    TIMESTREAM,
    SAPHANA,
    SNOWFLAKE,
    DATALAKEGEN2,
    DB2AS400
  };

namespace ConnectionTypeMapper
{
AWS_ATHENA_API ConnectionType GetConnectionTypeForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForConnectionType(ConnectionType value);
} // namespace ConnectionTypeMapper
} // namespace Model
} // namespace Athena
} // namespace Aws
