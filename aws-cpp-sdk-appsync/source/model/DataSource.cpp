/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

DataSource::DataSource() : 
    m_dataSourceArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(DataSourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_dynamodbConfigHasBeenSet(false),
    m_lambdaConfigHasBeenSet(false),
    m_elasticsearchConfigHasBeenSet(false),
    m_httpConfigHasBeenSet(false),
    m_relationalDatabaseConfigHasBeenSet(false)
{
}

DataSource::DataSource(JsonView jsonValue) : 
    m_dataSourceArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(DataSourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_dynamodbConfigHasBeenSet(false),
    m_lambdaConfigHasBeenSet(false),
    m_elasticsearchConfigHasBeenSet(false),
    m_httpConfigHasBeenSet(false),
    m_relationalDatabaseConfigHasBeenSet(false)
{
  *this = jsonValue;
}

DataSource& DataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataSourceArn"))
  {
    m_dataSourceArn = jsonValue.GetString("dataSourceArn");

    m_dataSourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = DataSourceTypeMapper::GetDataSourceTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceRoleArn"))
  {
    m_serviceRoleArn = jsonValue.GetString("serviceRoleArn");

    m_serviceRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dynamodbConfig"))
  {
    m_dynamodbConfig = jsonValue.GetObject("dynamodbConfig");

    m_dynamodbConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaConfig"))
  {
    m_lambdaConfig = jsonValue.GetObject("lambdaConfig");

    m_lambdaConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("elasticsearchConfig"))
  {
    m_elasticsearchConfig = jsonValue.GetObject("elasticsearchConfig");

    m_elasticsearchConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("httpConfig"))
  {
    m_httpConfig = jsonValue.GetObject("httpConfig");

    m_httpConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relationalDatabaseConfig"))
  {
    m_relationalDatabaseConfig = jsonValue.GetObject("relationalDatabaseConfig");

    m_relationalDatabaseConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSource::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceArnHasBeenSet)
  {
   payload.WithString("dataSourceArn", m_dataSourceArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DataSourceTypeMapper::GetNameForDataSourceType(m_type));
  }

  if(m_serviceRoleArnHasBeenSet)
  {
   payload.WithString("serviceRoleArn", m_serviceRoleArn);

  }

  if(m_dynamodbConfigHasBeenSet)
  {
   payload.WithObject("dynamodbConfig", m_dynamodbConfig.Jsonize());

  }

  if(m_lambdaConfigHasBeenSet)
  {
   payload.WithObject("lambdaConfig", m_lambdaConfig.Jsonize());

  }

  if(m_elasticsearchConfigHasBeenSet)
  {
   payload.WithObject("elasticsearchConfig", m_elasticsearchConfig.Jsonize());

  }

  if(m_httpConfigHasBeenSet)
  {
   payload.WithObject("httpConfig", m_httpConfig.Jsonize());

  }

  if(m_relationalDatabaseConfigHasBeenSet)
  {
   payload.WithObject("relationalDatabaseConfig", m_relationalDatabaseConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
