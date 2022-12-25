/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ThreatDetectedByName.h>
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

ThreatDetectedByName::ThreatDetectedByName() : 
    m_itemCount(0),
    m_itemCountHasBeenSet(false),
    m_uniqueThreatNameCount(0),
    m_uniqueThreatNameCountHasBeenSet(false),
    m_shortened(false),
    m_shortenedHasBeenSet(false),
    m_threatNamesHasBeenSet(false)
{
}

ThreatDetectedByName::ThreatDetectedByName(JsonView jsonValue) : 
    m_itemCount(0),
    m_itemCountHasBeenSet(false),
    m_uniqueThreatNameCount(0),
    m_uniqueThreatNameCountHasBeenSet(false),
    m_shortened(false),
    m_shortenedHasBeenSet(false),
    m_threatNamesHasBeenSet(false)
{
  *this = jsonValue;
}

ThreatDetectedByName& ThreatDetectedByName::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("itemCount"))
  {
    m_itemCount = jsonValue.GetInteger("itemCount");

    m_itemCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uniqueThreatNameCount"))
  {
    m_uniqueThreatNameCount = jsonValue.GetInteger("uniqueThreatNameCount");

    m_uniqueThreatNameCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shortened"))
  {
    m_shortened = jsonValue.GetBool("shortened");

    m_shortenedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("threatNames"))
  {
    Aws::Utils::Array<JsonView> threatNamesJsonList = jsonValue.GetArray("threatNames");
    for(unsigned threatNamesIndex = 0; threatNamesIndex < threatNamesJsonList.GetLength(); ++threatNamesIndex)
    {
      m_threatNames.push_back(threatNamesJsonList[threatNamesIndex].AsObject());
    }
    m_threatNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue ThreatDetectedByName::Jsonize() const
{
  JsonValue payload;

  if(m_itemCountHasBeenSet)
  {
   payload.WithInteger("itemCount", m_itemCount);

  }

  if(m_uniqueThreatNameCountHasBeenSet)
  {
   payload.WithInteger("uniqueThreatNameCount", m_uniqueThreatNameCount);

  }

  if(m_shortenedHasBeenSet)
  {
   payload.WithBool("shortened", m_shortened);

  }

  if(m_threatNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> threatNamesJsonList(m_threatNames.size());
   for(unsigned threatNamesIndex = 0; threatNamesIndex < threatNamesJsonList.GetLength(); ++threatNamesIndex)
   {
     threatNamesJsonList[threatNamesIndex].AsObject(m_threatNames[threatNamesIndex].Jsonize());
   }
   payload.WithArray("threatNames", std::move(threatNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
