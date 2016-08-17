/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/servicecatalog/model/LaunchPathSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

LaunchPathSummary::LaunchPathSummary() : 
    m_idHasBeenSet(false),
    m_constraintSummariesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

LaunchPathSummary::LaunchPathSummary(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_constraintSummariesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchPathSummary& LaunchPathSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConstraintSummaries"))
  {
    Array<JsonValue> constraintSummariesJsonList = jsonValue.GetArray("ConstraintSummaries");
    for(unsigned constraintSummariesIndex = 0; constraintSummariesIndex < constraintSummariesJsonList.GetLength(); ++constraintSummariesIndex)
    {
      m_constraintSummaries.push_back(constraintSummariesJsonList[constraintSummariesIndex].AsObject());
    }
    m_constraintSummariesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Array<JsonValue> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchPathSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_constraintSummariesHasBeenSet)
  {
   Array<JsonValue> constraintSummariesJsonList(m_constraintSummaries.size());
   for(unsigned constraintSummariesIndex = 0; constraintSummariesIndex < constraintSummariesJsonList.GetLength(); ++constraintSummariesIndex)
   {
     constraintSummariesJsonList[constraintSummariesIndex].AsObject(m_constraintSummaries[constraintSummariesIndex].Jsonize());
   }
   payload.WithArray("ConstraintSummaries", std::move(constraintSummariesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws