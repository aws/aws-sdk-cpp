/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/CommunicationLimits.h>
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

CommunicationLimits::CommunicationLimits(JsonView jsonValue)
{
  *this = jsonValue;
}

CommunicationLimits& CommunicationLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("communicationLimitsList"))
  {
    Aws::Utils::Array<JsonView> communicationLimitsListJsonList = jsonValue.GetArray("communicationLimitsList");
    for(unsigned communicationLimitsListIndex = 0; communicationLimitsListIndex < communicationLimitsListJsonList.GetLength(); ++communicationLimitsListIndex)
    {
      m_communicationLimitsList.push_back(communicationLimitsListJsonList[communicationLimitsListIndex].AsObject());
    }
    m_communicationLimitsListHasBeenSet = true;
  }
  return *this;
}

JsonValue CommunicationLimits::Jsonize() const
{
  JsonValue payload;

  if(m_communicationLimitsListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> communicationLimitsListJsonList(m_communicationLimitsList.size());
   for(unsigned communicationLimitsListIndex = 0; communicationLimitsListIndex < communicationLimitsListJsonList.GetLength(); ++communicationLimitsListIndex)
   {
     communicationLimitsListJsonList[communicationLimitsListIndex].AsObject(m_communicationLimitsList[communicationLimitsListIndex].Jsonize());
   }
   payload.WithArray("communicationLimitsList", std::move(communicationLimitsListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
