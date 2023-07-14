/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/Page.h>
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

Page::Page() : 
    m_pageArnHasBeenSet(false),
    m_engagementArnHasBeenSet(false),
    m_contactArnHasBeenSet(false),
    m_senderHasBeenSet(false),
    m_incidentIdHasBeenSet(false),
    m_sentTimeHasBeenSet(false),
    m_deliveryTimeHasBeenSet(false),
    m_readTimeHasBeenSet(false)
{
}

Page::Page(JsonView jsonValue) : 
    m_pageArnHasBeenSet(false),
    m_engagementArnHasBeenSet(false),
    m_contactArnHasBeenSet(false),
    m_senderHasBeenSet(false),
    m_incidentIdHasBeenSet(false),
    m_sentTimeHasBeenSet(false),
    m_deliveryTimeHasBeenSet(false),
    m_readTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Page& Page::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PageArn"))
  {
    m_pageArn = jsonValue.GetString("PageArn");

    m_pageArnHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("SentTime"))
  {
    m_sentTime = jsonValue.GetDouble("SentTime");

    m_sentTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeliveryTime"))
  {
    m_deliveryTime = jsonValue.GetDouble("DeliveryTime");

    m_deliveryTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadTime"))
  {
    m_readTime = jsonValue.GetDouble("ReadTime");

    m_readTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Page::Jsonize() const
{
  JsonValue payload;

  if(m_pageArnHasBeenSet)
  {
   payload.WithString("PageArn", m_pageArn);

  }

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

  if(m_sentTimeHasBeenSet)
  {
   payload.WithDouble("SentTime", m_sentTime.SecondsWithMSPrecision());
  }

  if(m_deliveryTimeHasBeenSet)
  {
   payload.WithDouble("DeliveryTime", m_deliveryTime.SecondsWithMSPrecision());
  }

  if(m_readTimeHasBeenSet)
  {
   payload.WithDouble("ReadTime", m_readTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
