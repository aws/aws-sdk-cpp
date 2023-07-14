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
    m_roleArnHasBeenSet(false)
{
}

RedshiftConnectorProfileProperties::RedshiftConnectorProfileProperties(JsonView jsonValue) : 
    m_databaseUrlHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_roleArnHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
