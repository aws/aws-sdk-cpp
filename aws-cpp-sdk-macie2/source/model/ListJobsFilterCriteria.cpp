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

#include <aws/macie2/model/ListJobsFilterCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

ListJobsFilterCriteria::ListJobsFilterCriteria() : 
    m_excludesHasBeenSet(false),
    m_includesHasBeenSet(false)
{
}

ListJobsFilterCriteria::ListJobsFilterCriteria(JsonView jsonValue) : 
    m_excludesHasBeenSet(false),
    m_includesHasBeenSet(false)
{
  *this = jsonValue;
}

ListJobsFilterCriteria& ListJobsFilterCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("excludes"))
  {
    Array<JsonView> excludesJsonList = jsonValue.GetArray("excludes");
    for(unsigned excludesIndex = 0; excludesIndex < excludesJsonList.GetLength(); ++excludesIndex)
    {
      m_excludes.push_back(excludesJsonList[excludesIndex].AsObject());
    }
    m_excludesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includes"))
  {
    Array<JsonView> includesJsonList = jsonValue.GetArray("includes");
    for(unsigned includesIndex = 0; includesIndex < includesJsonList.GetLength(); ++includesIndex)
    {
      m_includes.push_back(includesJsonList[includesIndex].AsObject());
    }
    m_includesHasBeenSet = true;
  }

  return *this;
}

JsonValue ListJobsFilterCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_excludesHasBeenSet)
  {
   Array<JsonValue> excludesJsonList(m_excludes.size());
   for(unsigned excludesIndex = 0; excludesIndex < excludesJsonList.GetLength(); ++excludesIndex)
   {
     excludesJsonList[excludesIndex].AsObject(m_excludes[excludesIndex].Jsonize());
   }
   payload.WithArray("excludes", std::move(excludesJsonList));

  }

  if(m_includesHasBeenSet)
  {
   Array<JsonValue> includesJsonList(m_includes.size());
   for(unsigned includesIndex = 0; includesIndex < includesJsonList.GetLength(); ++includesIndex)
   {
     includesJsonList[includesIndex].AsObject(m_includes[includesIndex].Jsonize());
   }
   payload.WithArray("includes", std::move(includesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
