/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConformancePackComplianceScoresFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ConformancePackComplianceScoresFilters::ConformancePackComplianceScoresFilters() : 
    m_conformancePackNamesHasBeenSet(false)
{
}

ConformancePackComplianceScoresFilters::ConformancePackComplianceScoresFilters(JsonView jsonValue) : 
    m_conformancePackNamesHasBeenSet(false)
{
  *this = jsonValue;
}

ConformancePackComplianceScoresFilters& ConformancePackComplianceScoresFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConformancePackNames"))
  {
    Aws::Utils::Array<JsonView> conformancePackNamesJsonList = jsonValue.GetArray("ConformancePackNames");
    for(unsigned conformancePackNamesIndex = 0; conformancePackNamesIndex < conformancePackNamesJsonList.GetLength(); ++conformancePackNamesIndex)
    {
      m_conformancePackNames.push_back(conformancePackNamesJsonList[conformancePackNamesIndex].AsString());
    }
    m_conformancePackNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue ConformancePackComplianceScoresFilters::Jsonize() const
{
  JsonValue payload;

  if(m_conformancePackNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conformancePackNamesJsonList(m_conformancePackNames.size());
   for(unsigned conformancePackNamesIndex = 0; conformancePackNamesIndex < conformancePackNamesJsonList.GetLength(); ++conformancePackNamesIndex)
   {
     conformancePackNamesJsonList[conformancePackNamesIndex].AsString(m_conformancePackNames[conformancePackNamesIndex]);
   }
   payload.WithArray("ConformancePackNames", std::move(conformancePackNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
