﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ConnectorMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

ConnectorMetadata::ConnectorMetadata() : 
    m_amplitudeHasBeenSet(false),
    m_datadogHasBeenSet(false),
    m_dynatraceHasBeenSet(false),
    m_googleAnalyticsHasBeenSet(false),
    m_inforNexusHasBeenSet(false),
    m_marketoHasBeenSet(false),
    m_redshiftHasBeenSet(false),
    m_s3HasBeenSet(false),
    m_salesforceHasBeenSet(false),
    m_serviceNowHasBeenSet(false),
    m_singularHasBeenSet(false),
    m_slackHasBeenSet(false),
    m_snowflakeHasBeenSet(false),
    m_trendmicroHasBeenSet(false),
    m_veevaHasBeenSet(false),
    m_zendeskHasBeenSet(false),
    m_eventBridgeHasBeenSet(false),
    m_upsolverHasBeenSet(false),
    m_customerProfilesHasBeenSet(false),
    m_honeycodeHasBeenSet(false),
    m_sAPODataHasBeenSet(false),
    m_pardotHasBeenSet(false)
{
}

ConnectorMetadata::ConnectorMetadata(JsonView jsonValue) : 
    m_amplitudeHasBeenSet(false),
    m_datadogHasBeenSet(false),
    m_dynatraceHasBeenSet(false),
    m_googleAnalyticsHasBeenSet(false),
    m_inforNexusHasBeenSet(false),
    m_marketoHasBeenSet(false),
    m_redshiftHasBeenSet(false),
    m_s3HasBeenSet(false),
    m_salesforceHasBeenSet(false),
    m_serviceNowHasBeenSet(false),
    m_singularHasBeenSet(false),
    m_slackHasBeenSet(false),
    m_snowflakeHasBeenSet(false),
    m_trendmicroHasBeenSet(false),
    m_veevaHasBeenSet(false),
    m_zendeskHasBeenSet(false),
    m_eventBridgeHasBeenSet(false),
    m_upsolverHasBeenSet(false),
    m_customerProfilesHasBeenSet(false),
    m_honeycodeHasBeenSet(false),
    m_sAPODataHasBeenSet(false),
    m_pardotHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectorMetadata& ConnectorMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Amplitude"))
  {
    m_amplitude = jsonValue.GetObject("Amplitude");

    m_amplitudeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Datadog"))
  {
    m_datadog = jsonValue.GetObject("Datadog");

    m_datadogHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Dynatrace"))
  {
    m_dynatrace = jsonValue.GetObject("Dynatrace");

    m_dynatraceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GoogleAnalytics"))
  {
    m_googleAnalytics = jsonValue.GetObject("GoogleAnalytics");

    m_googleAnalyticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InforNexus"))
  {
    m_inforNexus = jsonValue.GetObject("InforNexus");

    m_inforNexusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Marketo"))
  {
    m_marketo = jsonValue.GetObject("Marketo");

    m_marketoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Redshift"))
  {
    m_redshift = jsonValue.GetObject("Redshift");

    m_redshiftHasBeenSet = true;
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

  if(jsonValue.ValueExists("Singular"))
  {
    m_singular = jsonValue.GetObject("Singular");

    m_singularHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Slack"))
  {
    m_slack = jsonValue.GetObject("Slack");

    m_slackHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Snowflake"))
  {
    m_snowflake = jsonValue.GetObject("Snowflake");

    m_snowflakeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Trendmicro"))
  {
    m_trendmicro = jsonValue.GetObject("Trendmicro");

    m_trendmicroHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Veeva"))
  {
    m_veeva = jsonValue.GetObject("Veeva");

    m_veevaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Zendesk"))
  {
    m_zendesk = jsonValue.GetObject("Zendesk");

    m_zendeskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventBridge"))
  {
    m_eventBridge = jsonValue.GetObject("EventBridge");

    m_eventBridgeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Upsolver"))
  {
    m_upsolver = jsonValue.GetObject("Upsolver");

    m_upsolverHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomerProfiles"))
  {
    m_customerProfiles = jsonValue.GetObject("CustomerProfiles");

    m_customerProfilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Honeycode"))
  {
    m_honeycode = jsonValue.GetObject("Honeycode");

    m_honeycodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SAPOData"))
  {
    m_sAPOData = jsonValue.GetObject("SAPOData");

    m_sAPODataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Pardot"))
  {
    m_pardot = jsonValue.GetObject("Pardot");

    m_pardotHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectorMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_amplitudeHasBeenSet)
  {
   payload.WithObject("Amplitude", m_amplitude.Jsonize());

  }

  if(m_datadogHasBeenSet)
  {
   payload.WithObject("Datadog", m_datadog.Jsonize());

  }

  if(m_dynatraceHasBeenSet)
  {
   payload.WithObject("Dynatrace", m_dynatrace.Jsonize());

  }

  if(m_googleAnalyticsHasBeenSet)
  {
   payload.WithObject("GoogleAnalytics", m_googleAnalytics.Jsonize());

  }

  if(m_inforNexusHasBeenSet)
  {
   payload.WithObject("InforNexus", m_inforNexus.Jsonize());

  }

  if(m_marketoHasBeenSet)
  {
   payload.WithObject("Marketo", m_marketo.Jsonize());

  }

  if(m_redshiftHasBeenSet)
  {
   payload.WithObject("Redshift", m_redshift.Jsonize());

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

  if(m_singularHasBeenSet)
  {
   payload.WithObject("Singular", m_singular.Jsonize());

  }

  if(m_slackHasBeenSet)
  {
   payload.WithObject("Slack", m_slack.Jsonize());

  }

  if(m_snowflakeHasBeenSet)
  {
   payload.WithObject("Snowflake", m_snowflake.Jsonize());

  }

  if(m_trendmicroHasBeenSet)
  {
   payload.WithObject("Trendmicro", m_trendmicro.Jsonize());

  }

  if(m_veevaHasBeenSet)
  {
   payload.WithObject("Veeva", m_veeva.Jsonize());

  }

  if(m_zendeskHasBeenSet)
  {
   payload.WithObject("Zendesk", m_zendesk.Jsonize());

  }

  if(m_eventBridgeHasBeenSet)
  {
   payload.WithObject("EventBridge", m_eventBridge.Jsonize());

  }

  if(m_upsolverHasBeenSet)
  {
   payload.WithObject("Upsolver", m_upsolver.Jsonize());

  }

  if(m_customerProfilesHasBeenSet)
  {
   payload.WithObject("CustomerProfiles", m_customerProfiles.Jsonize());

  }

  if(m_honeycodeHasBeenSet)
  {
   payload.WithObject("Honeycode", m_honeycode.Jsonize());

  }

  if(m_sAPODataHasBeenSet)
  {
   payload.WithObject("SAPOData", m_sAPOData.Jsonize());

  }

  if(m_pardotHasBeenSet)
  {
   payload.WithObject("Pardot", m_pardot.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
