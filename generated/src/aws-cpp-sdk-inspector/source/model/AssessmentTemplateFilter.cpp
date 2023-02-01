/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

AssessmentTemplateFilter::AssessmentTemplateFilter(JsonView jsonValue) : 
    m_namePatternHasBeenSet(false),
    m_durationRangeHasBeenSet(false),
    m_rulesPackageArnsHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentTemplateFilter& AssessmentTemplateFilter::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> rulesPackageArnsJsonList = jsonValue.GetArray("rulesPackageArns");
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
   Aws::Utils::Array<JsonValue> rulesPackageArnsJsonList(m_rulesPackageArns.size());
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
