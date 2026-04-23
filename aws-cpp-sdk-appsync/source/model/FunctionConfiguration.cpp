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

#include <aws/appsync/model/FunctionConfiguration.h>
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

FunctionConfiguration::FunctionConfiguration() : 
    m_functionIdHasBeenSet(false),
    m_functionArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_requestMappingTemplateHasBeenSet(false),
    m_responseMappingTemplateHasBeenSet(false),
    m_functionVersionHasBeenSet(false)
{
}

FunctionConfiguration::FunctionConfiguration(JsonView jsonValue) : 
    m_functionIdHasBeenSet(false),
    m_functionArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_requestMappingTemplateHasBeenSet(false),
    m_responseMappingTemplateHasBeenSet(false),
    m_functionVersionHasBeenSet(false)
{
  *this = jsonValue;
}

FunctionConfiguration& FunctionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("functionId"))
  {
    m_functionId = jsonValue.GetString("functionId");

    m_functionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("functionArn"))
  {
    m_functionArn = jsonValue.GetString("functionArn");

    m_functionArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("dataSourceName"))
  {
    m_dataSourceName = jsonValue.GetString("dataSourceName");

    m_dataSourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestMappingTemplate"))
  {
    m_requestMappingTemplate = jsonValue.GetString("requestMappingTemplate");

    m_requestMappingTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseMappingTemplate"))
  {
    m_responseMappingTemplate = jsonValue.GetString("responseMappingTemplate");

    m_responseMappingTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("functionVersion"))
  {
    m_functionVersion = jsonValue.GetString("functionVersion");

    m_functionVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue FunctionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_functionIdHasBeenSet)
  {
   payload.WithString("functionId", m_functionId);

  }

  if(m_functionArnHasBeenSet)
  {
   payload.WithString("functionArn", m_functionArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_dataSourceNameHasBeenSet)
  {
   payload.WithString("dataSourceName", m_dataSourceName);

  }

  if(m_requestMappingTemplateHasBeenSet)
  {
   payload.WithString("requestMappingTemplate", m_requestMappingTemplate);

  }

  if(m_responseMappingTemplateHasBeenSet)
  {
   payload.WithString("responseMappingTemplate", m_responseMappingTemplate);

  }

  if(m_functionVersionHasBeenSet)
  {
   payload.WithString("functionVersion", m_functionVersion);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
