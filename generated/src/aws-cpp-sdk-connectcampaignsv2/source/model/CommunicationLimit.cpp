/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/CommunicationLimit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

CommunicationLimit::CommunicationLimit(JsonView jsonValue)
{
  *this = jsonValue;
}

CommunicationLimit& CommunicationLimit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxCountPerRecipient"))
  {
    m_maxCountPerRecipient = jsonValue.GetInteger("maxCountPerRecipient");
    m_maxCountPerRecipientHasBeenSet = true;
  }
  if(jsonValue.ValueExists("frequency"))
  {
    m_frequency = jsonValue.GetInteger("frequency");
    m_frequencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unit"))
  {
    m_unit = CommunicationLimitTimeUnitMapper::GetCommunicationLimitTimeUnitForName(jsonValue.GetString("unit"));
    m_unitHasBeenSet = true;
  }
  return *this;
}

JsonValue CommunicationLimit::Jsonize() const
{
  JsonValue payload;

  if(m_maxCountPerRecipientHasBeenSet)
  {
   payload.WithInteger("maxCountPerRecipient", m_maxCountPerRecipient);

  }

  if(m_frequencyHasBeenSet)
  {
   payload.WithInteger("frequency", m_frequency);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", CommunicationLimitTimeUnitMapper::GetNameForCommunicationLimitTimeUnit(m_unit));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
