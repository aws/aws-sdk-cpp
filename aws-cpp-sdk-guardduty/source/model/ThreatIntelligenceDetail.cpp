/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ThreatIntelligenceDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

ThreatIntelligenceDetail::ThreatIntelligenceDetail() : 
    m_threatListNameHasBeenSet(false),
    m_threatNamesHasBeenSet(false)
{
}

ThreatIntelligenceDetail::ThreatIntelligenceDetail(JsonView jsonValue) : 
    m_threatListNameHasBeenSet(false),
    m_threatNamesHasBeenSet(false)
{
  *this = jsonValue;
}

ThreatIntelligenceDetail& ThreatIntelligenceDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("threatListName"))
  {
    m_threatListName = jsonValue.GetString("threatListName");

    m_threatListNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("threatNames"))
  {
    Aws::Utils::Array<JsonView> threatNamesJsonList = jsonValue.GetArray("threatNames");
    for(unsigned threatNamesIndex = 0; threatNamesIndex < threatNamesJsonList.GetLength(); ++threatNamesIndex)
    {
      m_threatNames.push_back(threatNamesJsonList[threatNamesIndex].AsString());
    }
    m_threatNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue ThreatIntelligenceDetail::Jsonize() const
{
  JsonValue payload;

  if(m_threatListNameHasBeenSet)
  {
   payload.WithString("threatListName", m_threatListName);

  }

  if(m_threatNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> threatNamesJsonList(m_threatNames.size());
   for(unsigned threatNamesIndex = 0; threatNamesIndex < threatNamesJsonList.GetLength(); ++threatNamesIndex)
   {
     threatNamesJsonList[threatNamesIndex].AsString(m_threatNames[threatNamesIndex]);
   }
   payload.WithArray("threatNames", std::move(threatNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
