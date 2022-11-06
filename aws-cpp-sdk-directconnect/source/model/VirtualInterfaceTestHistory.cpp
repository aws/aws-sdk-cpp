/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/VirtualInterfaceTestHistory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

VirtualInterfaceTestHistory::VirtualInterfaceTestHistory() : 
    m_testIdHasBeenSet(false),
    m_virtualInterfaceIdHasBeenSet(false),
    m_bgpPeersHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_testDurationInMinutes(0),
    m_testDurationInMinutesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

VirtualInterfaceTestHistory::VirtualInterfaceTestHistory(JsonView jsonValue) : 
    m_testIdHasBeenSet(false),
    m_virtualInterfaceIdHasBeenSet(false),
    m_bgpPeersHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_testDurationInMinutes(0),
    m_testDurationInMinutesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualInterfaceTestHistory& VirtualInterfaceTestHistory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("testId"))
  {
    m_testId = jsonValue.GetString("testId");

    m_testIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualInterfaceId"))
  {
    m_virtualInterfaceId = jsonValue.GetString("virtualInterfaceId");

    m_virtualInterfaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bgpPeers"))
  {
    Aws::Utils::Array<JsonView> bgpPeersJsonList = jsonValue.GetArray("bgpPeers");
    for(unsigned bgpPeersIndex = 0; bgpPeersIndex < bgpPeersJsonList.GetLength(); ++bgpPeersIndex)
    {
      m_bgpPeers.push_back(bgpPeersJsonList[bgpPeersIndex].AsString());
    }
    m_bgpPeersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ownerAccount"))
  {
    m_ownerAccount = jsonValue.GetString("ownerAccount");

    m_ownerAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testDurationInMinutes"))
  {
    m_testDurationInMinutes = jsonValue.GetInteger("testDurationInMinutes");

    m_testDurationInMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualInterfaceTestHistory::Jsonize() const
{
  JsonValue payload;

  if(m_testIdHasBeenSet)
  {
   payload.WithString("testId", m_testId);

  }

  if(m_virtualInterfaceIdHasBeenSet)
  {
   payload.WithString("virtualInterfaceId", m_virtualInterfaceId);

  }

  if(m_bgpPeersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bgpPeersJsonList(m_bgpPeers.size());
   for(unsigned bgpPeersIndex = 0; bgpPeersIndex < bgpPeersJsonList.GetLength(); ++bgpPeersIndex)
   {
     bgpPeersJsonList[bgpPeersIndex].AsString(m_bgpPeers[bgpPeersIndex]);
   }
   payload.WithArray("bgpPeers", std::move(bgpPeersJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_ownerAccountHasBeenSet)
  {
   payload.WithString("ownerAccount", m_ownerAccount);

  }

  if(m_testDurationInMinutesHasBeenSet)
  {
   payload.WithInteger("testDurationInMinutes", m_testDurationInMinutes);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
