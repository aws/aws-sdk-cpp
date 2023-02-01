/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> excludesJsonList = jsonValue.GetArray("excludes");
    for(unsigned excludesIndex = 0; excludesIndex < excludesJsonList.GetLength(); ++excludesIndex)
    {
      m_excludes.push_back(excludesJsonList[excludesIndex].AsObject());
    }
    m_excludesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includes"))
  {
    Aws::Utils::Array<JsonView> includesJsonList = jsonValue.GetArray("includes");
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
   Aws::Utils::Array<JsonValue> excludesJsonList(m_excludes.size());
   for(unsigned excludesIndex = 0; excludesIndex < excludesJsonList.GetLength(); ++excludesIndex)
   {
     excludesJsonList[excludesIndex].AsObject(m_excludes[excludesIndex].Jsonize());
   }
   payload.WithArray("excludes", std::move(excludesJsonList));

  }

  if(m_includesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includesJsonList(m_includes.size());
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
