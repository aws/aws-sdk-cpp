/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ConnectorOperator.h>
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

ConnectorOperator::ConnectorOperator() : 
    m_amplitude(AmplitudeConnectorOperator::NOT_SET),
    m_amplitudeHasBeenSet(false),
    m_datadog(DatadogConnectorOperator::NOT_SET),
    m_datadogHasBeenSet(false),
    m_dynatrace(DynatraceConnectorOperator::NOT_SET),
    m_dynatraceHasBeenSet(false),
    m_googleAnalytics(GoogleAnalyticsConnectorOperator::NOT_SET),
    m_googleAnalyticsHasBeenSet(false),
    m_inforNexus(InforNexusConnectorOperator::NOT_SET),
    m_inforNexusHasBeenSet(false),
    m_marketo(MarketoConnectorOperator::NOT_SET),
    m_marketoHasBeenSet(false),
    m_s3(S3ConnectorOperator::NOT_SET),
    m_s3HasBeenSet(false),
    m_salesforce(SalesforceConnectorOperator::NOT_SET),
    m_salesforceHasBeenSet(false),
    m_serviceNow(ServiceNowConnectorOperator::NOT_SET),
    m_serviceNowHasBeenSet(false),
    m_singular(SingularConnectorOperator::NOT_SET),
    m_singularHasBeenSet(false),
    m_slack(SlackConnectorOperator::NOT_SET),
    m_slackHasBeenSet(false),
    m_trendmicro(TrendmicroConnectorOperator::NOT_SET),
    m_trendmicroHasBeenSet(false),
    m_veeva(VeevaConnectorOperator::NOT_SET),
    m_veevaHasBeenSet(false),
    m_zendesk(ZendeskConnectorOperator::NOT_SET),
    m_zendeskHasBeenSet(false)
{
}

ConnectorOperator::ConnectorOperator(JsonView jsonValue) : 
    m_amplitude(AmplitudeConnectorOperator::NOT_SET),
    m_amplitudeHasBeenSet(false),
    m_datadog(DatadogConnectorOperator::NOT_SET),
    m_datadogHasBeenSet(false),
    m_dynatrace(DynatraceConnectorOperator::NOT_SET),
    m_dynatraceHasBeenSet(false),
    m_googleAnalytics(GoogleAnalyticsConnectorOperator::NOT_SET),
    m_googleAnalyticsHasBeenSet(false),
    m_inforNexus(InforNexusConnectorOperator::NOT_SET),
    m_inforNexusHasBeenSet(false),
    m_marketo(MarketoConnectorOperator::NOT_SET),
    m_marketoHasBeenSet(false),
    m_s3(S3ConnectorOperator::NOT_SET),
    m_s3HasBeenSet(false),
    m_salesforce(SalesforceConnectorOperator::NOT_SET),
    m_salesforceHasBeenSet(false),
    m_serviceNow(ServiceNowConnectorOperator::NOT_SET),
    m_serviceNowHasBeenSet(false),
    m_singular(SingularConnectorOperator::NOT_SET),
    m_singularHasBeenSet(false),
    m_slack(SlackConnectorOperator::NOT_SET),
    m_slackHasBeenSet(false),
    m_trendmicro(TrendmicroConnectorOperator::NOT_SET),
    m_trendmicroHasBeenSet(false),
    m_veeva(VeevaConnectorOperator::NOT_SET),
    m_veevaHasBeenSet(false),
    m_zendesk(ZendeskConnectorOperator::NOT_SET),
    m_zendeskHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectorOperator& ConnectorOperator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Amplitude"))
  {
    m_amplitude = AmplitudeConnectorOperatorMapper::GetAmplitudeConnectorOperatorForName(jsonValue.GetString("Amplitude"));

    m_amplitudeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Datadog"))
  {
    m_datadog = DatadogConnectorOperatorMapper::GetDatadogConnectorOperatorForName(jsonValue.GetString("Datadog"));

    m_datadogHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Dynatrace"))
  {
    m_dynatrace = DynatraceConnectorOperatorMapper::GetDynatraceConnectorOperatorForName(jsonValue.GetString("Dynatrace"));

    m_dynatraceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GoogleAnalytics"))
  {
    m_googleAnalytics = GoogleAnalyticsConnectorOperatorMapper::GetGoogleAnalyticsConnectorOperatorForName(jsonValue.GetString("GoogleAnalytics"));

    m_googleAnalyticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InforNexus"))
  {
    m_inforNexus = InforNexusConnectorOperatorMapper::GetInforNexusConnectorOperatorForName(jsonValue.GetString("InforNexus"));

    m_inforNexusHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("Singular"))
  {
    m_singular = SingularConnectorOperatorMapper::GetSingularConnectorOperatorForName(jsonValue.GetString("Singular"));

    m_singularHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Slack"))
  {
    m_slack = SlackConnectorOperatorMapper::GetSlackConnectorOperatorForName(jsonValue.GetString("Slack"));

    m_slackHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Trendmicro"))
  {
    m_trendmicro = TrendmicroConnectorOperatorMapper::GetTrendmicroConnectorOperatorForName(jsonValue.GetString("Trendmicro"));

    m_trendmicroHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Veeva"))
  {
    m_veeva = VeevaConnectorOperatorMapper::GetVeevaConnectorOperatorForName(jsonValue.GetString("Veeva"));

    m_veevaHasBeenSet = true;
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

  if(m_amplitudeHasBeenSet)
  {
   payload.WithString("Amplitude", AmplitudeConnectorOperatorMapper::GetNameForAmplitudeConnectorOperator(m_amplitude));
  }

  if(m_datadogHasBeenSet)
  {
   payload.WithString("Datadog", DatadogConnectorOperatorMapper::GetNameForDatadogConnectorOperator(m_datadog));
  }

  if(m_dynatraceHasBeenSet)
  {
   payload.WithString("Dynatrace", DynatraceConnectorOperatorMapper::GetNameForDynatraceConnectorOperator(m_dynatrace));
  }

  if(m_googleAnalyticsHasBeenSet)
  {
   payload.WithString("GoogleAnalytics", GoogleAnalyticsConnectorOperatorMapper::GetNameForGoogleAnalyticsConnectorOperator(m_googleAnalytics));
  }

  if(m_inforNexusHasBeenSet)
  {
   payload.WithString("InforNexus", InforNexusConnectorOperatorMapper::GetNameForInforNexusConnectorOperator(m_inforNexus));
  }

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

  if(m_singularHasBeenSet)
  {
   payload.WithString("Singular", SingularConnectorOperatorMapper::GetNameForSingularConnectorOperator(m_singular));
  }

  if(m_slackHasBeenSet)
  {
   payload.WithString("Slack", SlackConnectorOperatorMapper::GetNameForSlackConnectorOperator(m_slack));
  }

  if(m_trendmicroHasBeenSet)
  {
   payload.WithString("Trendmicro", TrendmicroConnectorOperatorMapper::GetNameForTrendmicroConnectorOperator(m_trendmicro));
  }

  if(m_veevaHasBeenSet)
  {
   payload.WithString("Veeva", VeevaConnectorOperatorMapper::GetNameForVeevaConnectorOperator(m_veeva));
  }

  if(m_zendeskHasBeenSet)
  {
   payload.WithString("Zendesk", ZendeskConnectorOperatorMapper::GetNameForZendeskConnectorOperator(m_zendesk));
  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
