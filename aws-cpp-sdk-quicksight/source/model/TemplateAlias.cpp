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

#include <aws/quicksight/model/TemplateAlias.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

TemplateAlias::TemplateAlias() : 
    m_aliasNameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_templateVersionNumber(0),
    m_templateVersionNumberHasBeenSet(false)
{
}

TemplateAlias::TemplateAlias(JsonView jsonValue) : 
    m_aliasNameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_templateVersionNumber(0),
    m_templateVersionNumberHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateAlias& TemplateAlias::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AliasName"))
  {
    m_aliasName = jsonValue.GetString("AliasName");

    m_aliasNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateVersionNumber"))
  {
    m_templateVersionNumber = jsonValue.GetInt64("TemplateVersionNumber");

    m_templateVersionNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateAlias::Jsonize() const
{
  JsonValue payload;

  if(m_aliasNameHasBeenSet)
  {
   payload.WithString("AliasName", m_aliasName);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_templateVersionNumberHasBeenSet)
  {
   payload.WithInt64("TemplateVersionNumber", m_templateVersionNumber);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
