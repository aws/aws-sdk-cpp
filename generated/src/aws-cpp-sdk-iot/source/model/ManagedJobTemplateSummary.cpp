/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ManagedJobTemplateSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

ManagedJobTemplateSummary::ManagedJobTemplateSummary() : 
    m_templateArnHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_environmentsHasBeenSet(false),
    m_templateVersionHasBeenSet(false)
{
}

ManagedJobTemplateSummary::ManagedJobTemplateSummary(JsonView jsonValue) : 
    m_templateArnHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_environmentsHasBeenSet(false),
    m_templateVersionHasBeenSet(false)
{
  *this = jsonValue;
}

ManagedJobTemplateSummary& ManagedJobTemplateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("templateArn"))
  {
    m_templateArn = jsonValue.GetString("templateArn");

    m_templateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateName"))
  {
    m_templateName = jsonValue.GetString("templateName");

    m_templateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environments"))
  {
    Aws::Utils::Array<JsonView> environmentsJsonList = jsonValue.GetArray("environments");
    for(unsigned environmentsIndex = 0; environmentsIndex < environmentsJsonList.GetLength(); ++environmentsIndex)
    {
      m_environments.push_back(environmentsJsonList[environmentsIndex].AsString());
    }
    m_environmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateVersion"))
  {
    m_templateVersion = jsonValue.GetString("templateVersion");

    m_templateVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue ManagedJobTemplateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_templateArnHasBeenSet)
  {
   payload.WithString("templateArn", m_templateArn);

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", m_templateName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_environmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentsJsonList(m_environments.size());
   for(unsigned environmentsIndex = 0; environmentsIndex < environmentsJsonList.GetLength(); ++environmentsIndex)
   {
     environmentsJsonList[environmentsIndex].AsString(m_environments[environmentsIndex]);
   }
   payload.WithArray("environments", std::move(environmentsJsonList));

  }

  if(m_templateVersionHasBeenSet)
  {
   payload.WithString("templateVersion", m_templateVersion);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
