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

#include <aws/inspector/model/AssessmentTemplateFilter.h>
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

AssessmentTemplateFilter::AssessmentTemplateFilter() : 
    m_namePatternHasBeenSet(false),
    m_durationRangeHasBeenSet(false),
    m_rulesPackageArnsHasBeenSet(false)
{
}

AssessmentTemplateFilter::AssessmentTemplateFilter(const JsonValue& jsonValue) : 
    m_namePatternHasBeenSet(false),
    m_durationRangeHasBeenSet(false),
    m_rulesPackageArnsHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentTemplateFilter& AssessmentTemplateFilter::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("namePattern"))
  {
    m_namePattern = jsonValue.GetString("namePattern");

    m_namePatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("durationRange"))
  {
    m_durationRange = jsonValue.GetObject("durationRange");

    m_durationRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rulesPackageArns"))
  {
    Array<JsonValue> rulesPackageArnsJsonList = jsonValue.GetArray("rulesPackageArns");
    for(unsigned rulesPackageArnsIndex = 0; rulesPackageArnsIndex < rulesPackageArnsJsonList.GetLength(); ++rulesPackageArnsIndex)
    {
      m_rulesPackageArns.push_back(rulesPackageArnsJsonList[rulesPackageArnsIndex].AsString());
    }
    m_rulesPackageArnsHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentTemplateFilter::Jsonize() const
{
  JsonValue payload;

  if(m_namePatternHasBeenSet)
  {
   payload.WithString("namePattern", m_namePattern);

  }

  if(m_durationRangeHasBeenSet)
  {
   payload.WithObject("durationRange", m_durationRange.Jsonize());

  }

  if(m_rulesPackageArnsHasBeenSet)
  {
   Array<JsonValue> rulesPackageArnsJsonList(m_rulesPackageArns.size());
   for(unsigned rulesPackageArnsIndex = 0; rulesPackageArnsIndex < rulesPackageArnsJsonList.GetLength(); ++rulesPackageArnsIndex)
   {
     rulesPackageArnsJsonList[rulesPackageArnsIndex].AsString(m_rulesPackageArns[rulesPackageArnsIndex]);
   }
   payload.WithArray("rulesPackageArns", std::move(rulesPackageArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
