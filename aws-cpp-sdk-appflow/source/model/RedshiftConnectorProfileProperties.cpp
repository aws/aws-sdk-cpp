/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/RedshiftConnectorProfileProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

RedshiftConnectorProfileProperties::RedshiftConnectorProfileProperties() : 
    m_databaseUrlHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_dataApiRoleArnHasBeenSet(false),
    m_isRedshiftServerless(false),
    m_isRedshiftServerlessHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_workgroupNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false)
{
}

RedshiftConnectorProfileProperties::RedshiftConnectorProfileProperties(JsonView jsonValue) : 
    m_databaseUrlHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_dataApiRoleArnHasBeenSet(false),
    m_isRedshiftServerless(false),
    m_isRedshiftServerlessHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_workgroupNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftConnectorProfileProperties& RedshiftConnectorProfileProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("databaseUrl"))
  {
    m_databaseUrl = jsonValue.GetString("databaseUrl");

    m_databaseUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketPrefix"))
  {
    m_bucketPrefix = jsonValue.GetString("bucketPrefix");

    m_bucketPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataApiRoleArn"))
  {
    m_dataApiRoleArn = jsonValue.GetString("dataApiRoleArn");

    m_dataApiRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isRedshiftServerless"))
  {
    m_isRedshiftServerless = jsonValue.GetBool("isRedshiftServerless");

    m_isRedshiftServerlessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterIdentifier"))
  {
    m_clusterIdentifier = jsonValue.GetString("clusterIdentifier");

    m_clusterIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workgroupName"))
  {
    m_workgroupName = jsonValue.GetString("workgroupName");

    m_workgroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");

    m_databaseNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftConnectorProfileProperties::Jsonize() const
{
  JsonValue payload;

  if(m_databaseUrlHasBeenSet)
  {
   payload.WithString("databaseUrl", m_databaseUrl);

  }

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_bucketPrefixHasBeenSet)
  {
   payload.WithString("bucketPrefix", m_bucketPrefix);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_dataApiRoleArnHasBeenSet)
  {
   payload.WithString("dataApiRoleArn", m_dataApiRoleArn);

  }

  if(m_isRedshiftServerlessHasBeenSet)
  {
   payload.WithBool("isRedshiftServerless", m_isRedshiftServerless);

  }

  if(m_clusterIdentifierHasBeenSet)
  {
   payload.WithString("clusterIdentifier", m_clusterIdentifier);

  }

  if(m_workgroupNameHasBeenSet)
  {
   payload.WithString("workgroupName", m_workgroupName);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("databaseName", m_databaseName);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
