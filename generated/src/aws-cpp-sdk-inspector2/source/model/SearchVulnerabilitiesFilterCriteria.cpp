/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/SearchVulnerabilitiesFilterCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

SearchVulnerabilitiesFilterCriteria::SearchVulnerabilitiesFilterCriteria() : 
    m_vulnerabilityIdsHasBeenSet(false)
{
}

SearchVulnerabilitiesFilterCriteria::SearchVulnerabilitiesFilterCriteria(JsonView jsonValue) : 
    m_vulnerabilityIdsHasBeenSet(false)
{
  *this = jsonValue;
}

SearchVulnerabilitiesFilterCriteria& SearchVulnerabilitiesFilterCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vulnerabilityIds"))
  {
    Aws::Utils::Array<JsonView> vulnerabilityIdsJsonList = jsonValue.GetArray("vulnerabilityIds");
    for(unsigned vulnerabilityIdsIndex = 0; vulnerabilityIdsIndex < vulnerabilityIdsJsonList.GetLength(); ++vulnerabilityIdsIndex)
    {
      m_vulnerabilityIds.push_back(vulnerabilityIdsJsonList[vulnerabilityIdsIndex].AsString());
    }
    m_vulnerabilityIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchVulnerabilitiesFilterCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_vulnerabilityIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vulnerabilityIdsJsonList(m_vulnerabilityIds.size());
   for(unsigned vulnerabilityIdsIndex = 0; vulnerabilityIdsIndex < vulnerabilityIdsJsonList.GetLength(); ++vulnerabilityIdsIndex)
   {
     vulnerabilityIdsJsonList[vulnerabilityIdsIndex].AsString(m_vulnerabilityIds[vulnerabilityIdsIndex]);
   }
   payload.WithArray("vulnerabilityIds", std::move(vulnerabilityIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
