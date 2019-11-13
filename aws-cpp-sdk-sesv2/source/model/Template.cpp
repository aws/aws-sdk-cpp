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

#include <aws/sesv2/model/Template.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

Template::Template() : 
    m_templateArnHasBeenSet(false),
    m_templateDataHasBeenSet(false)
{
}

Template::Template(JsonView jsonValue) : 
    m_templateArnHasBeenSet(false),
    m_templateDataHasBeenSet(false)
{
  *this = jsonValue;
}

Template& Template::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TemplateArn"))
  {
    m_templateArn = jsonValue.GetString("TemplateArn");

    m_templateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateData"))
  {
    m_templateData = jsonValue.GetString("TemplateData");

    m_templateDataHasBeenSet = true;
  }

  return *this;
}

JsonValue Template::Jsonize() const
{
  JsonValue payload;

  if(m_templateArnHasBeenSet)
  {
   payload.WithString("TemplateArn", m_templateArn);

  }

  if(m_templateDataHasBeenSet)
  {
   payload.WithString("TemplateData", m_templateData);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
