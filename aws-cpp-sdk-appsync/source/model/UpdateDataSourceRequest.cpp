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

#include <aws/appsync/model/UpdateDataSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDataSourceRequest::UpdateDataSourceRequest() : 
    m_apiIdHasBeenSet(false),
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

Aws::String UpdateDataSourceRequest::SerializePayload() const
{
  JsonValue payload;

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

  return payload.WriteReadable();
}




