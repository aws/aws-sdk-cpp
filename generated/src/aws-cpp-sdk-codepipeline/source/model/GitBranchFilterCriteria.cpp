/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/GitBranchFilterCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

GitBranchFilterCriteria::GitBranchFilterCriteria() : 
    m_includesHasBeenSet(false),
    m_excludesHasBeenSet(false)
{
}

GitBranchFilterCriteria::GitBranchFilterCriteria(JsonView jsonValue) : 
    m_includesHasBeenSet(false),
    m_excludesHasBeenSet(false)
{
  *this = jsonValue;
}

GitBranchFilterCriteria& GitBranchFilterCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("includes"))
  {
    Aws::Utils::Array<JsonView> includesJsonList = jsonValue.GetArray("includes");
    for(unsigned includesIndex = 0; includesIndex < includesJsonList.GetLength(); ++includesIndex)
    {
      m_includes.push_back(includesJsonList[includesIndex].AsString());
    }
    m_includesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("excludes"))
  {
    Aws::Utils::Array<JsonView> excludesJsonList = jsonValue.GetArray("excludes");
    for(unsigned excludesIndex = 0; excludesIndex < excludesJsonList.GetLength(); ++excludesIndex)
    {
      m_excludes.push_back(excludesJsonList[excludesIndex].AsString());
    }
    m_excludesHasBeenSet = true;
  }

  return *this;
}

JsonValue GitBranchFilterCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_includesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includesJsonList(m_includes.size());
   for(unsigned includesIndex = 0; includesIndex < includesJsonList.GetLength(); ++includesIndex)
   {
     includesJsonList[includesIndex].AsString(m_includes[includesIndex]);
   }
   payload.WithArray("includes", std::move(includesJsonList));

  }

  if(m_excludesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludesJsonList(m_excludes.size());
   for(unsigned excludesIndex = 0; excludesIndex < excludesJsonList.GetLength(); ++excludesIndex)
   {
     excludesJsonList[excludesIndex].AsString(m_excludes[excludesIndex]);
   }
   payload.WithArray("excludes", std::move(excludesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
