/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/LogAnomalyShowcase.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

LogAnomalyShowcase::LogAnomalyShowcase() : 
    m_logAnomalyClassesHasBeenSet(false)
{
}

LogAnomalyShowcase::LogAnomalyShowcase(JsonView jsonValue) : 
    m_logAnomalyClassesHasBeenSet(false)
{
  *this = jsonValue;
}

LogAnomalyShowcase& LogAnomalyShowcase::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogAnomalyClasses"))
  {
    Aws::Utils::Array<JsonView> logAnomalyClassesJsonList = jsonValue.GetArray("LogAnomalyClasses");
    for(unsigned logAnomalyClassesIndex = 0; logAnomalyClassesIndex < logAnomalyClassesJsonList.GetLength(); ++logAnomalyClassesIndex)
    {
      m_logAnomalyClasses.push_back(logAnomalyClassesJsonList[logAnomalyClassesIndex].AsObject());
    }
    m_logAnomalyClassesHasBeenSet = true;
  }

  return *this;
}

JsonValue LogAnomalyShowcase::Jsonize() const
{
  JsonValue payload;

  if(m_logAnomalyClassesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logAnomalyClassesJsonList(m_logAnomalyClasses.size());
   for(unsigned logAnomalyClassesIndex = 0; logAnomalyClassesIndex < logAnomalyClassesJsonList.GetLength(); ++logAnomalyClassesIndex)
   {
     logAnomalyClassesJsonList[logAnomalyClassesIndex].AsObject(m_logAnomalyClasses[logAnomalyClassesIndex].Jsonize());
   }
   payload.WithArray("LogAnomalyClasses", std::move(logAnomalyClassesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
