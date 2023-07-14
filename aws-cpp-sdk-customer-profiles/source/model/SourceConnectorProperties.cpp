/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/SourceConnectorProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

SourceConnectorProperties::SourceConnectorProperties() : 
    m_marketoHasBeenSet(false),
    m_s3HasBeenSet(false),
    m_salesforceHasBeenSet(false),
    m_serviceNowHasBeenSet(false),
    m_zendeskHasBeenSet(false)
{
}

SourceConnectorProperties::SourceConnectorProperties(JsonView jsonValue) : 
    m_marketoHasBeenSet(false),
    m_s3HasBeenSet(false),
    m_salesforceHasBeenSet(false),
    m_serviceNowHasBeenSet(false),
    m_zendeskHasBeenSet(false)
{
  *this = jsonValue;
}

SourceConnectorProperties& SourceConnectorProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Marketo"))
  {
    m_marketo = jsonValue.GetObject("Marketo");

    m_marketoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3"))
  {
    m_s3 = jsonValue.GetObject("S3");

    m_s3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("Salesforce"))
  {
    m_salesforce = jsonValue.GetObject("Salesforce");

    m_salesforceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceNow"))
  {
    m_serviceNow = jsonValue.GetObject("ServiceNow");

    m_serviceNowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Zendesk"))
  {
    m_zendesk = jsonValue.GetObject("Zendesk");

    m_zendeskHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceConnectorProperties::Jsonize() const
{
  JsonValue payload;

  if(m_marketoHasBeenSet)
  {
   payload.WithObject("Marketo", m_marketo.Jsonize());

  }

  if(m_s3HasBeenSet)
  {
   payload.WithObject("S3", m_s3.Jsonize());

  }

  if(m_salesforceHasBeenSet)
  {
   payload.WithObject("Salesforce", m_salesforce.Jsonize());

  }

  if(m_serviceNowHasBeenSet)
  {
   payload.WithObject("ServiceNow", m_serviceNow.Jsonize());

  }

  if(m_zendeskHasBeenSet)
  {
   payload.WithObject("Zendesk", m_zendesk.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
