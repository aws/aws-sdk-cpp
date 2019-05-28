/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/pinpoint-email/model/DomainDeliverabilityCampaign.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

DomainDeliverabilityCampaign::DomainDeliverabilityCampaign() : 
    m_campaignIdHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_fromAddressHasBeenSet(false),
    m_sendingIpsHasBeenSet(false),
    m_firstSeenDateTimeHasBeenSet(false),
    m_lastSeenDateTimeHasBeenSet(false),
    m_inboxCount(0),
    m_inboxCountHasBeenSet(false),
    m_spamCount(0),
    m_spamCountHasBeenSet(false),
    m_readRate(0.0),
    m_readRateHasBeenSet(false),
    m_deleteRate(0.0),
    m_deleteRateHasBeenSet(false),
    m_readDeleteRate(0.0),
    m_readDeleteRateHasBeenSet(false),
    m_projectedVolume(0),
    m_projectedVolumeHasBeenSet(false),
    m_espsHasBeenSet(false)
{
}

DomainDeliverabilityCampaign::DomainDeliverabilityCampaign(JsonView jsonValue) : 
    m_campaignIdHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_fromAddressHasBeenSet(false),
    m_sendingIpsHasBeenSet(false),
    m_firstSeenDateTimeHasBeenSet(false),
    m_lastSeenDateTimeHasBeenSet(false),
    m_inboxCount(0),
    m_inboxCountHasBeenSet(false),
    m_spamCount(0),
    m_spamCountHasBeenSet(false),
    m_readRate(0.0),
    m_readRateHasBeenSet(false),
    m_deleteRate(0.0),
    m_deleteRateHasBeenSet(false),
    m_readDeleteRate(0.0),
    m_readDeleteRateHasBeenSet(false),
    m_projectedVolume(0),
    m_projectedVolumeHasBeenSet(false),
    m_espsHasBeenSet(false)
{
  *this = jsonValue;
}

DomainDeliverabilityCampaign& DomainDeliverabilityCampaign::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CampaignId"))
  {
    m_campaignId = jsonValue.GetString("CampaignId");

    m_campaignIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageUrl"))
  {
    m_imageUrl = jsonValue.GetString("ImageUrl");

    m_imageUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetString("Subject");

    m_subjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FromAddress"))
  {
    m_fromAddress = jsonValue.GetString("FromAddress");

    m_fromAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SendingIps"))
  {
    Array<JsonView> sendingIpsJsonList = jsonValue.GetArray("SendingIps");
    for(unsigned sendingIpsIndex = 0; sendingIpsIndex < sendingIpsJsonList.GetLength(); ++sendingIpsIndex)
    {
      m_sendingIps.push_back(sendingIpsJsonList[sendingIpsIndex].AsString());
    }
    m_sendingIpsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirstSeenDateTime"))
  {
    m_firstSeenDateTime = jsonValue.GetDouble("FirstSeenDateTime");

    m_firstSeenDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSeenDateTime"))
  {
    m_lastSeenDateTime = jsonValue.GetDouble("LastSeenDateTime");

    m_lastSeenDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InboxCount"))
  {
    m_inboxCount = jsonValue.GetInt64("InboxCount");

    m_inboxCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpamCount"))
  {
    m_spamCount = jsonValue.GetInt64("SpamCount");

    m_spamCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadRate"))
  {
    m_readRate = jsonValue.GetDouble("ReadRate");

    m_readRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeleteRate"))
  {
    m_deleteRate = jsonValue.GetDouble("DeleteRate");

    m_deleteRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadDeleteRate"))
  {
    m_readDeleteRate = jsonValue.GetDouble("ReadDeleteRate");

    m_readDeleteRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectedVolume"))
  {
    m_projectedVolume = jsonValue.GetInt64("ProjectedVolume");

    m_projectedVolumeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Esps"))
  {
    Array<JsonView> espsJsonList = jsonValue.GetArray("Esps");
    for(unsigned espsIndex = 0; espsIndex < espsJsonList.GetLength(); ++espsIndex)
    {
      m_esps.push_back(espsJsonList[espsIndex].AsString());
    }
    m_espsHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainDeliverabilityCampaign::Jsonize() const
{
  JsonValue payload;

  if(m_campaignIdHasBeenSet)
  {
   payload.WithString("CampaignId", m_campaignId);

  }

  if(m_imageUrlHasBeenSet)
  {
   payload.WithString("ImageUrl", m_imageUrl);

  }

  if(m_subjectHasBeenSet)
  {
   payload.WithString("Subject", m_subject);

  }

  if(m_fromAddressHasBeenSet)
  {
   payload.WithString("FromAddress", m_fromAddress);

  }

  if(m_sendingIpsHasBeenSet)
  {
   Array<JsonValue> sendingIpsJsonList(m_sendingIps.size());
   for(unsigned sendingIpsIndex = 0; sendingIpsIndex < sendingIpsJsonList.GetLength(); ++sendingIpsIndex)
   {
     sendingIpsJsonList[sendingIpsIndex].AsString(m_sendingIps[sendingIpsIndex]);
   }
   payload.WithArray("SendingIps", std::move(sendingIpsJsonList));

  }

  if(m_firstSeenDateTimeHasBeenSet)
  {
   payload.WithDouble("FirstSeenDateTime", m_firstSeenDateTime.SecondsWithMSPrecision());
  }

  if(m_lastSeenDateTimeHasBeenSet)
  {
   payload.WithDouble("LastSeenDateTime", m_lastSeenDateTime.SecondsWithMSPrecision());
  }

  if(m_inboxCountHasBeenSet)
  {
   payload.WithInt64("InboxCount", m_inboxCount);

  }

  if(m_spamCountHasBeenSet)
  {
   payload.WithInt64("SpamCount", m_spamCount);

  }

  if(m_readRateHasBeenSet)
  {
   payload.WithDouble("ReadRate", m_readRate);

  }

  if(m_deleteRateHasBeenSet)
  {
   payload.WithDouble("DeleteRate", m_deleteRate);

  }

  if(m_readDeleteRateHasBeenSet)
  {
   payload.WithDouble("ReadDeleteRate", m_readDeleteRate);

  }

  if(m_projectedVolumeHasBeenSet)
  {
   payload.WithInt64("ProjectedVolume", m_projectedVolume);

  }

  if(m_espsHasBeenSet)
  {
   Array<JsonValue> espsJsonList(m_esps.size());
   for(unsigned espsIndex = 0; espsIndex < espsJsonList.GetLength(); ++espsIndex)
   {
     espsJsonList[espsIndex].AsString(m_esps[espsIndex]);
   }
   payload.WithArray("Esps", std::move(espsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
