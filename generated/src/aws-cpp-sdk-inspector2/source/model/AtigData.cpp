/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/AtigData.h>
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

AtigData::AtigData() : 
    m_firstSeenHasBeenSet(false),
    m_lastSeenHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_ttpsHasBeenSet(false)
{
}

AtigData::AtigData(JsonView jsonValue) : 
    m_firstSeenHasBeenSet(false),
    m_lastSeenHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_ttpsHasBeenSet(false)
{
  *this = jsonValue;
}

AtigData& AtigData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("firstSeen"))
  {
    m_firstSeen = jsonValue.GetDouble("firstSeen");

    m_firstSeenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastSeen"))
  {
    m_lastSeen = jsonValue.GetDouble("lastSeen");

    m_lastSeenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targets"))
  {
    Aws::Utils::Array<JsonView> targetsJsonList = jsonValue.GetArray("targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsString());
    }
    m_targetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ttps"))
  {
    Aws::Utils::Array<JsonView> ttpsJsonList = jsonValue.GetArray("ttps");
    for(unsigned ttpsIndex = 0; ttpsIndex < ttpsJsonList.GetLength(); ++ttpsIndex)
    {
      m_ttps.push_back(ttpsJsonList[ttpsIndex].AsString());
    }
    m_ttpsHasBeenSet = true;
  }

  return *this;
}

JsonValue AtigData::Jsonize() const
{
  JsonValue payload;

  if(m_firstSeenHasBeenSet)
  {
   payload.WithDouble("firstSeen", m_firstSeen.SecondsWithMSPrecision());
  }

  if(m_lastSeenHasBeenSet)
  {
   payload.WithDouble("lastSeen", m_lastSeen.SecondsWithMSPrecision());
  }

  if(m_targetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsString(m_targets[targetsIndex]);
   }
   payload.WithArray("targets", std::move(targetsJsonList));

  }

  if(m_ttpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ttpsJsonList(m_ttps.size());
   for(unsigned ttpsIndex = 0; ttpsIndex < ttpsJsonList.GetLength(); ++ttpsIndex)
   {
     ttpsJsonList[ttpsIndex].AsString(m_ttps[ttpsIndex]);
   }
   payload.WithArray("ttps", std::move(ttpsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
