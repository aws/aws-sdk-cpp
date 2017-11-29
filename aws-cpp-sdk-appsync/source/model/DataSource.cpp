/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_elasticsearchConfigHasBeenSet(false)
{
}

DataSource::DataSource(const JsonValue& jsonValue) : 
    m_dataSourceArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(DataSourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_dynamodbConfigHasBeenSet(false),
    m_lambdaConfigHasBeenSet(false),
    m_elasticsearchConfigHasBeenSet(false)
{
  *this = jsonValue;
}

DataSource& DataSource::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
