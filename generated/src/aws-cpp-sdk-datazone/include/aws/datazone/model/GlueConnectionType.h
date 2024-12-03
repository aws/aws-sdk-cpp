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
  enum class GlueConnectionType
  {
    NOT_SET,
    SNOWFLAKE,
    BIGQUERY,
    DOCUMENTDB,
    DYNAMODB,
    MYSQL,
    OPENSEARCH,
    ORACLE,
    POSTGRESQL,
    REDSHIFT,
    SAPHANA,
    SQLSERVER,
    TERADATA,
    VERTICA
  };

namespace GlueConnectionTypeMapper
{
AWS_DATAZONE_API GlueConnectionType GetGlueConnectionTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForGlueConnectionType(GlueConnectionType value);
} // namespace GlueConnectionTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
