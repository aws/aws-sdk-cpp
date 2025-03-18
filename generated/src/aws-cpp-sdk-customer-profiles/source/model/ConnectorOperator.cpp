/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ConnectorOperator.h>
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

ConnectorOperator::ConnectorOperator(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectorOperator& ConnectorOperator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Marketo"))
  {
    m_marketo = MarketoConnectorOperatorMapper::GetMarketoConnectorOperatorForName(jsonValue.GetString("Marketo"));
    m_marketoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3"))
  {
    m_s3 = S3ConnectorOperatorMapper::GetS3ConnectorOperatorForName(jsonValue.GetString("S3"));
    m_s3HasBeenSet = true;
  }
  if(jsonValue.ValueExists("Salesforce"))
  {
    m_salesforce = SalesforceConnectorOperatorMapper::GetSalesforceConnectorOperatorForName(jsonValue.GetString("Salesforce"));
    m_salesforceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceNow"))
  {
    m_serviceNow = ServiceNowConnectorOperatorMapper::GetServiceNowConnectorOperatorForName(jsonValue.GetString("ServiceNow"));
    m_serviceNowHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Zendesk"))
  {
    m_zendesk = ZendeskConnectorOperatorMapper::GetZendeskConnectorOperatorForName(jsonValue.GetString("Zendesk"));
    m_zendeskHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorOperator::Jsonize() const
{
  JsonValue payload;

  if(m_marketoHasBeenSet)
  {
   payload.WithString("Marketo", MarketoConnectorOperatorMapper::GetNameForMarketoConnectorOperator(m_marketo));
  }

  if(m_s3HasBeenSet)
  {
   payload.WithString("S3", S3ConnectorOperatorMapper::GetNameForS3ConnectorOperator(m_s3));
  }

  if(m_salesforceHasBeenSet)
  {
   payload.WithString("Salesforce", SalesforceConnectorOperatorMapper::GetNameForSalesforceConnectorOperator(m_salesforce));
  }

  if(m_serviceNowHasBeenSet)
  {
   payload.WithString("ServiceNow", ServiceNowConnectorOperatorMapper::GetNameForServiceNowConnectorOperator(m_serviceNow));
  }

  if(m_zendeskHasBeenSet)
  {
   payload.WithString("Zendesk", ZendeskConnectorOperatorMapper::GetNameForZendeskConnectorOperator(m_zendesk));
  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
