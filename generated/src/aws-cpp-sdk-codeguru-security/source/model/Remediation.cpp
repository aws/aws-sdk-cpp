/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/Remediation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{

Remediation::Remediation() : 
    m_recommendationHasBeenSet(false),
    m_suggestedFixesHasBeenSet(false)
{
}

Remediation::Remediation(JsonView jsonValue) : 
    m_recommendationHasBeenSet(false),
    m_suggestedFixesHasBeenSet(false)
{
  *this = jsonValue;
}

Remediation& Remediation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("recommendation"))
  {
    m_recommendation = jsonValue.GetObject("recommendation");

    m_recommendationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suggestedFixes"))
  {
    Aws::Utils::Array<JsonView> suggestedFixesJsonList = jsonValue.GetArray("suggestedFixes");
    for(unsigned suggestedFixesIndex = 0; suggestedFixesIndex < suggestedFixesJsonList.GetLength(); ++suggestedFixesIndex)
    {
      m_suggestedFixes.push_back(suggestedFixesJsonList[suggestedFixesIndex].AsObject());
    }
    m_suggestedFixesHasBeenSet = true;
  }

  return *this;
}

JsonValue Remediation::Jsonize() const
{
  JsonValue payload;

  if(m_recommendationHasBeenSet)
  {
   payload.WithObject("recommendation", m_recommendation.Jsonize());

  }

  if(m_suggestedFixesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> suggestedFixesJsonList(m_suggestedFixes.size());
   for(unsigned suggestedFixesIndex = 0; suggestedFixesIndex < suggestedFixesJsonList.GetLength(); ++suggestedFixesIndex)
   {
     suggestedFixesJsonList[suggestedFixesIndex].AsObject(m_suggestedFixes[suggestedFixesIndex].Jsonize());
   }
   payload.WithArray("suggestedFixes", std::move(suggestedFixesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
