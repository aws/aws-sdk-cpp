/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/InternalAccessAnalysisRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

InternalAccessAnalysisRule::InternalAccessAnalysisRule(JsonView jsonValue)
{
  *this = jsonValue;
}

InternalAccessAnalysisRule& InternalAccessAnalysisRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inclusions"))
  {
    Aws::Utils::Array<JsonView> inclusionsJsonList = jsonValue.GetArray("inclusions");
    for(unsigned inclusionsIndex = 0; inclusionsIndex < inclusionsJsonList.GetLength(); ++inclusionsIndex)
    {
      m_inclusions.push_back(inclusionsJsonList[inclusionsIndex].AsObject());
    }
    m_inclusionsHasBeenSet = true;
  }
  return *this;
}

JsonValue InternalAccessAnalysisRule::Jsonize() const
{
  JsonValue payload;

  if(m_inclusionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inclusionsJsonList(m_inclusions.size());
   for(unsigned inclusionsIndex = 0; inclusionsIndex < inclusionsJsonList.GetLength(); ++inclusionsIndex)
   {
     inclusionsJsonList[inclusionsIndex].AsObject(m_inclusions[inclusionsIndex].Jsonize());
   }
   payload.WithArray("inclusions", std::move(inclusionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
