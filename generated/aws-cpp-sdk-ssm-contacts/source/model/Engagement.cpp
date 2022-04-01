/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/Engagement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

Engagement::Engagement() : 
    m_engagementArnHasBeenSet(false),
    m_contactArnHasBeenSet(false),
    m_senderHasBeenSet(false),
    m_incidentIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_stopTimeHasBeenSet(false)
{
}

Engagement::Engagement(JsonView jsonValue) : 
    m_engagementArnHasBeenSet(false),
    m_contactArnHasBeenSet(false),
    m_senderHasBeenSet(false),
    m_incidentIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_stopTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Engagement& Engagement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EngagementArn"))
  {
    m_engagementArn = jsonValue.GetString("EngagementArn");

    m_engagementArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContactArn"))
  {
    m_contactArn = jsonValue.GetString("ContactArn");

    m_contactArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sender"))
  {
    m_sender = jsonValue.GetString("Sender");

    m_senderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncidentId"))
  {
    m_incidentId = jsonValue.GetString("IncidentId");

    m_incidentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StopTime"))
  {
    m_stopTime = jsonValue.GetDouble("StopTime");

    m_stopTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Engagement::Jsonize() const
{
  JsonValue payload;

  if(m_engagementArnHasBeenSet)
  {
   payload.WithString("EngagementArn", m_engagementArn);

  }

  if(m_contactArnHasBeenSet)
  {
   payload.WithString("ContactArn", m_contactArn);

  }

  if(m_senderHasBeenSet)
  {
   payload.WithString("Sender", m_sender);

  }

  if(m_incidentIdHasBeenSet)
  {
   payload.WithString("IncidentId", m_incidentId);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_stopTimeHasBeenSet)
  {
   payload.WithDouble("StopTime", m_stopTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
