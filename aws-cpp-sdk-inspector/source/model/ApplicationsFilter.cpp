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
#include <aws/inspector/model/ApplicationsFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

ApplicationsFilter::ApplicationsFilter() : 
    m_applicationNamePatternsHasBeenSet(false)
{
}

ApplicationsFilter::ApplicationsFilter(const JsonValue& jsonValue) : 
    m_applicationNamePatternsHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationsFilter& ApplicationsFilter::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("applicationNamePatterns"))
  {
    Array<JsonValue> applicationNamePatternsJsonList = jsonValue.GetArray("applicationNamePatterns");
    for(unsigned applicationNamePatternsIndex = 0; applicationNamePatternsIndex < applicationNamePatternsJsonList.GetLength(); ++applicationNamePatternsIndex)
    {
      m_applicationNamePatterns.push_back(applicationNamePatternsJsonList[applicationNamePatternsIndex].AsString());
    }
    m_applicationNamePatternsHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_applicationNamePatternsHasBeenSet)
  {
   Array<JsonValue> applicationNamePatternsJsonList(m_applicationNamePatterns.size());
   for(unsigned applicationNamePatternsIndex = 0; applicationNamePatternsIndex < applicationNamePatternsJsonList.GetLength(); ++applicationNamePatternsIndex)
   {
     applicationNamePatternsJsonList[applicationNamePatternsIndex].AsString(m_applicationNamePatterns[applicationNamePatternsIndex]);
   }
   payload.WithArray("applicationNamePatterns", std::move(applicationNamePatternsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws