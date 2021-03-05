/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/AmplitudeConnectorProfileProperties.h>
#include <aws/appflow/model/DatadogConnectorProfileProperties.h>
#include <aws/appflow/model/DynatraceConnectorProfileProperties.h>
#include <aws/appflow/model/GoogleAnalyticsConnectorProfileProperties.h>
#include <aws/appflow/model/HoneycodeConnectorProfileProperties.h>
#include <aws/appflow/model/InforNexusConnectorProfileProperties.h>
#include <aws/appflow/model/MarketoConnectorProfileProperties.h>
#include <aws/appflow/model/RedshiftConnectorProfileProperties.h>
#include <aws/appflow/model/SalesforceConnectorProfileProperties.h>
#include <aws/appflow/model/ServiceNowConnectorProfileProperties.h>
#include <aws/appflow/model/SingularConnectorProfileProperties.h>
#include <aws/appflow/model/SlackConnectorProfileProperties.h>
#include <aws/appflow/model/SnowflakeConnectorProfileProperties.h>
#include <aws/appflow/model/TrendmicroConnectorProfileProperties.h>
#include <aws/appflow/model/VeevaConnectorProfileProperties.h>
#include <aws/appflow/model/ZendeskConnectorProfileProperties.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Appflow
{
namespace Model
{

  /**
   * <p> The connector-specific profile properties required by each connector.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ConnectorProfileProperties">AWS
   * API Reference</a></p>
   */
  class AWS_APPFLOW_API ConnectorProfileProperties
  {
  public:
    ConnectorProfileProperties();
    ConnectorProfileProperties(Aws::Utils::Json::JsonView jsonValue);
    ConnectorProfileProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The connector-specific properties required by Amplitude. </p>
     */
    inline const AmplitudeConnectorProfileProperties& GetAmplitude() const{ return m_amplitude; }

    /**
     * <p> The connector-specific properties required by Amplitude. </p>
     */
    inline bool AmplitudeHasBeenSet() const { return m_amplitudeHasBeenSet; }

    /**
     * <p> The connector-specific properties required by Amplitude. </p>
     */
    inline void SetAmplitude(const AmplitudeConnectorProfileProperties& value) { m_amplitudeHasBeenSet = true; m_amplitude = value; }

    /**
     * <p> The connector-specific properties required by Amplitude. </p>
     */
    inline void SetAmplitude(AmplitudeConnectorProfileProperties&& value) { m_amplitudeHasBeenSet = true; m_amplitude = std::move(value); }

    /**
     * <p> The connector-specific properties required by Amplitude. </p>
     */
    inline ConnectorProfileProperties& WithAmplitude(const AmplitudeConnectorProfileProperties& value) { SetAmplitude(value); return *this;}

    /**
     * <p> The connector-specific properties required by Amplitude. </p>
     */
    inline ConnectorProfileProperties& WithAmplitude(AmplitudeConnectorProfileProperties&& value) { SetAmplitude(std::move(value)); return *this;}


    /**
     * <p> The connector-specific properties required by Datadog. </p>
     */
    inline const DatadogConnectorProfileProperties& GetDatadog() const{ return m_datadog; }

    /**
     * <p> The connector-specific properties required by Datadog. </p>
     */
    inline bool DatadogHasBeenSet() const { return m_datadogHasBeenSet; }

    /**
     * <p> The connector-specific properties required by Datadog. </p>
     */
    inline void SetDatadog(const DatadogConnectorProfileProperties& value) { m_datadogHasBeenSet = true; m_datadog = value; }

    /**
     * <p> The connector-specific properties required by Datadog. </p>
     */
    inline void SetDatadog(DatadogConnectorProfileProperties&& value) { m_datadogHasBeenSet = true; m_datadog = std::move(value); }

    /**
     * <p> The connector-specific properties required by Datadog. </p>
     */
    inline ConnectorProfileProperties& WithDatadog(const DatadogConnectorProfileProperties& value) { SetDatadog(value); return *this;}

    /**
     * <p> The connector-specific properties required by Datadog. </p>
     */
    inline ConnectorProfileProperties& WithDatadog(DatadogConnectorProfileProperties&& value) { SetDatadog(std::move(value)); return *this;}


    /**
     * <p> The connector-specific properties required by Dynatrace. </p>
     */
    inline const DynatraceConnectorProfileProperties& GetDynatrace() const{ return m_dynatrace; }

    /**
     * <p> The connector-specific properties required by Dynatrace. </p>
     */
    inline bool DynatraceHasBeenSet() const { return m_dynatraceHasBeenSet; }

    /**
     * <p> The connector-specific properties required by Dynatrace. </p>
     */
    inline void SetDynatrace(const DynatraceConnectorProfileProperties& value) { m_dynatraceHasBeenSet = true; m_dynatrace = value; }

    /**
     * <p> The connector-specific properties required by Dynatrace. </p>
     */
    inline void SetDynatrace(DynatraceConnectorProfileProperties&& value) { m_dynatraceHasBeenSet = true; m_dynatrace = std::move(value); }

    /**
     * <p> The connector-specific properties required by Dynatrace. </p>
     */
    inline ConnectorProfileProperties& WithDynatrace(const DynatraceConnectorProfileProperties& value) { SetDynatrace(value); return *this;}

    /**
     * <p> The connector-specific properties required by Dynatrace. </p>
     */
    inline ConnectorProfileProperties& WithDynatrace(DynatraceConnectorProfileProperties&& value) { SetDynatrace(std::move(value)); return *this;}


    /**
     * <p> The connector-specific properties required Google Analytics. </p>
     */
    inline const GoogleAnalyticsConnectorProfileProperties& GetGoogleAnalytics() const{ return m_googleAnalytics; }

    /**
     * <p> The connector-specific properties required Google Analytics. </p>
     */
    inline bool GoogleAnalyticsHasBeenSet() const { return m_googleAnalyticsHasBeenSet; }

    /**
     * <p> The connector-specific properties required Google Analytics. </p>
     */
    inline void SetGoogleAnalytics(const GoogleAnalyticsConnectorProfileProperties& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = value; }

    /**
     * <p> The connector-specific properties required Google Analytics. </p>
     */
    inline void SetGoogleAnalytics(GoogleAnalyticsConnectorProfileProperties&& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = std::move(value); }

    /**
     * <p> The connector-specific properties required Google Analytics. </p>
     */
    inline ConnectorProfileProperties& WithGoogleAnalytics(const GoogleAnalyticsConnectorProfileProperties& value) { SetGoogleAnalytics(value); return *this;}

    /**
     * <p> The connector-specific properties required Google Analytics. </p>
     */
    inline ConnectorProfileProperties& WithGoogleAnalytics(GoogleAnalyticsConnectorProfileProperties&& value) { SetGoogleAnalytics(std::move(value)); return *this;}


    /**
     * <p> The connector-specific properties required by Amazon Honeycode. </p>
     */
    inline const HoneycodeConnectorProfileProperties& GetHoneycode() const{ return m_honeycode; }

    /**
     * <p> The connector-specific properties required by Amazon Honeycode. </p>
     */
    inline bool HoneycodeHasBeenSet() const { return m_honeycodeHasBeenSet; }

    /**
     * <p> The connector-specific properties required by Amazon Honeycode. </p>
     */
    inline void SetHoneycode(const HoneycodeConnectorProfileProperties& value) { m_honeycodeHasBeenSet = true; m_honeycode = value; }

    /**
     * <p> The connector-specific properties required by Amazon Honeycode. </p>
     */
    inline void SetHoneycode(HoneycodeConnectorProfileProperties&& value) { m_honeycodeHasBeenSet = true; m_honeycode = std::move(value); }

    /**
     * <p> The connector-specific properties required by Amazon Honeycode. </p>
     */
    inline ConnectorProfileProperties& WithHoneycode(const HoneycodeConnectorProfileProperties& value) { SetHoneycode(value); return *this;}

    /**
     * <p> The connector-specific properties required by Amazon Honeycode. </p>
     */
    inline ConnectorProfileProperties& WithHoneycode(HoneycodeConnectorProfileProperties&& value) { SetHoneycode(std::move(value)); return *this;}


    /**
     * <p> The connector-specific properties required by Infor Nexus. </p>
     */
    inline const InforNexusConnectorProfileProperties& GetInforNexus() const{ return m_inforNexus; }

    /**
     * <p> The connector-specific properties required by Infor Nexus. </p>
     */
    inline bool InforNexusHasBeenSet() const { return m_inforNexusHasBeenSet; }

    /**
     * <p> The connector-specific properties required by Infor Nexus. </p>
     */
    inline void SetInforNexus(const InforNexusConnectorProfileProperties& value) { m_inforNexusHasBeenSet = true; m_inforNexus = value; }

    /**
     * <p> The connector-specific properties required by Infor Nexus. </p>
     */
    inline void SetInforNexus(InforNexusConnectorProfileProperties&& value) { m_inforNexusHasBeenSet = true; m_inforNexus = std::move(value); }

    /**
     * <p> The connector-specific properties required by Infor Nexus. </p>
     */
    inline ConnectorProfileProperties& WithInforNexus(const InforNexusConnectorProfileProperties& value) { SetInforNexus(value); return *this;}

    /**
     * <p> The connector-specific properties required by Infor Nexus. </p>
     */
    inline ConnectorProfileProperties& WithInforNexus(InforNexusConnectorProfileProperties&& value) { SetInforNexus(std::move(value)); return *this;}


    /**
     * <p> The connector-specific properties required by Marketo. </p>
     */
    inline const MarketoConnectorProfileProperties& GetMarketo() const{ return m_marketo; }

    /**
     * <p> The connector-specific properties required by Marketo. </p>
     */
    inline bool MarketoHasBeenSet() const { return m_marketoHasBeenSet; }

    /**
     * <p> The connector-specific properties required by Marketo. </p>
     */
    inline void SetMarketo(const MarketoConnectorProfileProperties& value) { m_marketoHasBeenSet = true; m_marketo = value; }

    /**
     * <p> The connector-specific properties required by Marketo. </p>
     */
    inline void SetMarketo(MarketoConnectorProfileProperties&& value) { m_marketoHasBeenSet = true; m_marketo = std::move(value); }

    /**
     * <p> The connector-specific properties required by Marketo. </p>
     */
    inline ConnectorProfileProperties& WithMarketo(const MarketoConnectorProfileProperties& value) { SetMarketo(value); return *this;}

    /**
     * <p> The connector-specific properties required by Marketo. </p>
     */
    inline ConnectorProfileProperties& WithMarketo(MarketoConnectorProfileProperties&& value) { SetMarketo(std::move(value)); return *this;}


    /**
     * <p> The connector-specific properties required by Amazon Redshift. </p>
     */
    inline const RedshiftConnectorProfileProperties& GetRedshift() const{ return m_redshift; }

    /**
     * <p> The connector-specific properties required by Amazon Redshift. </p>
     */
    inline bool RedshiftHasBeenSet() const { return m_redshiftHasBeenSet; }

    /**
     * <p> The connector-specific properties required by Amazon Redshift. </p>
     */
    inline void SetRedshift(const RedshiftConnectorProfileProperties& value) { m_redshiftHasBeenSet = true; m_redshift = value; }

    /**
     * <p> The connector-specific properties required by Amazon Redshift. </p>
     */
    inline void SetRedshift(RedshiftConnectorProfileProperties&& value) { m_redshiftHasBeenSet = true; m_redshift = std::move(value); }

    /**
     * <p> The connector-specific properties required by Amazon Redshift. </p>
     */
    inline ConnectorProfileProperties& WithRedshift(const RedshiftConnectorProfileProperties& value) { SetRedshift(value); return *this;}

    /**
     * <p> The connector-specific properties required by Amazon Redshift. </p>
     */
    inline ConnectorProfileProperties& WithRedshift(RedshiftConnectorProfileProperties&& value) { SetRedshift(std::move(value)); return *this;}


    /**
     * <p> The connector-specific properties required by Salesforce. </p>
     */
    inline const SalesforceConnectorProfileProperties& GetSalesforce() const{ return m_salesforce; }

    /**
     * <p> The connector-specific properties required by Salesforce. </p>
     */
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }

    /**
     * <p> The connector-specific properties required by Salesforce. </p>
     */
    inline void SetSalesforce(const SalesforceConnectorProfileProperties& value) { m_salesforceHasBeenSet = true; m_salesforce = value; }

    /**
     * <p> The connector-specific properties required by Salesforce. </p>
     */
    inline void SetSalesforce(SalesforceConnectorProfileProperties&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::move(value); }

    /**
     * <p> The connector-specific properties required by Salesforce. </p>
     */
    inline ConnectorProfileProperties& WithSalesforce(const SalesforceConnectorProfileProperties& value) { SetSalesforce(value); return *this;}

    /**
     * <p> The connector-specific properties required by Salesforce. </p>
     */
    inline ConnectorProfileProperties& WithSalesforce(SalesforceConnectorProfileProperties&& value) { SetSalesforce(std::move(value)); return *this;}


    /**
     * <p> The connector-specific properties required by serviceNow. </p>
     */
    inline const ServiceNowConnectorProfileProperties& GetServiceNow() const{ return m_serviceNow; }

    /**
     * <p> The connector-specific properties required by serviceNow. </p>
     */
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }

    /**
     * <p> The connector-specific properties required by serviceNow. </p>
     */
    inline void SetServiceNow(const ServiceNowConnectorProfileProperties& value) { m_serviceNowHasBeenSet = true; m_serviceNow = value; }

    /**
     * <p> The connector-specific properties required by serviceNow. </p>
     */
    inline void SetServiceNow(ServiceNowConnectorProfileProperties&& value) { m_serviceNowHasBeenSet = true; m_serviceNow = std::move(value); }

    /**
     * <p> The connector-specific properties required by serviceNow. </p>
     */
    inline ConnectorProfileProperties& WithServiceNow(const ServiceNowConnectorProfileProperties& value) { SetServiceNow(value); return *this;}

    /**
     * <p> The connector-specific properties required by serviceNow. </p>
     */
    inline ConnectorProfileProperties& WithServiceNow(ServiceNowConnectorProfileProperties&& value) { SetServiceNow(std::move(value)); return *this;}


    /**
     * <p> The connector-specific properties required by Singular. </p>
     */
    inline const SingularConnectorProfileProperties& GetSingular() const{ return m_singular; }

    /**
     * <p> The connector-specific properties required by Singular. </p>
     */
    inline bool SingularHasBeenSet() const { return m_singularHasBeenSet; }

    /**
     * <p> The connector-specific properties required by Singular. </p>
     */
    inline void SetSingular(const SingularConnectorProfileProperties& value) { m_singularHasBeenSet = true; m_singular = value; }

    /**
     * <p> The connector-specific properties required by Singular. </p>
     */
    inline void SetSingular(SingularConnectorProfileProperties&& value) { m_singularHasBeenSet = true; m_singular = std::move(value); }

    /**
     * <p> The connector-specific properties required by Singular. </p>
     */
    inline ConnectorProfileProperties& WithSingular(const SingularConnectorProfileProperties& value) { SetSingular(value); return *this;}

    /**
     * <p> The connector-specific properties required by Singular. </p>
     */
    inline ConnectorProfileProperties& WithSingular(SingularConnectorProfileProperties&& value) { SetSingular(std::move(value)); return *this;}


    /**
     * <p> The connector-specific properties required by Slack. </p>
     */
    inline const SlackConnectorProfileProperties& GetSlack() const{ return m_slack; }

    /**
     * <p> The connector-specific properties required by Slack. </p>
     */
    inline bool SlackHasBeenSet() const { return m_slackHasBeenSet; }

    /**
     * <p> The connector-specific properties required by Slack. </p>
     */
    inline void SetSlack(const SlackConnectorProfileProperties& value) { m_slackHasBeenSet = true; m_slack = value; }

    /**
     * <p> The connector-specific properties required by Slack. </p>
     */
    inline void SetSlack(SlackConnectorProfileProperties&& value) { m_slackHasBeenSet = true; m_slack = std::move(value); }

    /**
     * <p> The connector-specific properties required by Slack. </p>
     */
    inline ConnectorProfileProperties& WithSlack(const SlackConnectorProfileProperties& value) { SetSlack(value); return *this;}

    /**
     * <p> The connector-specific properties required by Slack. </p>
     */
    inline ConnectorProfileProperties& WithSlack(SlackConnectorProfileProperties&& value) { SetSlack(std::move(value)); return *this;}


    /**
     * <p> The connector-specific properties required by Snowflake. </p>
     */
    inline const SnowflakeConnectorProfileProperties& GetSnowflake() const{ return m_snowflake; }

    /**
     * <p> The connector-specific properties required by Snowflake. </p>
     */
    inline bool SnowflakeHasBeenSet() const { return m_snowflakeHasBeenSet; }

    /**
     * <p> The connector-specific properties required by Snowflake. </p>
     */
    inline void SetSnowflake(const SnowflakeConnectorProfileProperties& value) { m_snowflakeHasBeenSet = true; m_snowflake = value; }

    /**
     * <p> The connector-specific properties required by Snowflake. </p>
     */
    inline void SetSnowflake(SnowflakeConnectorProfileProperties&& value) { m_snowflakeHasBeenSet = true; m_snowflake = std::move(value); }

    /**
     * <p> The connector-specific properties required by Snowflake. </p>
     */
    inline ConnectorProfileProperties& WithSnowflake(const SnowflakeConnectorProfileProperties& value) { SetSnowflake(value); return *this;}

    /**
     * <p> The connector-specific properties required by Snowflake. </p>
     */
    inline ConnectorProfileProperties& WithSnowflake(SnowflakeConnectorProfileProperties&& value) { SetSnowflake(std::move(value)); return *this;}


    /**
     * <p> The connector-specific properties required by Trend Micro. </p>
     */
    inline const TrendmicroConnectorProfileProperties& GetTrendmicro() const{ return m_trendmicro; }

    /**
     * <p> The connector-specific properties required by Trend Micro. </p>
     */
    inline bool TrendmicroHasBeenSet() const { return m_trendmicroHasBeenSet; }

    /**
     * <p> The connector-specific properties required by Trend Micro. </p>
     */
    inline void SetTrendmicro(const TrendmicroConnectorProfileProperties& value) { m_trendmicroHasBeenSet = true; m_trendmicro = value; }

    /**
     * <p> The connector-specific properties required by Trend Micro. </p>
     */
    inline void SetTrendmicro(TrendmicroConnectorProfileProperties&& value) { m_trendmicroHasBeenSet = true; m_trendmicro = std::move(value); }

    /**
     * <p> The connector-specific properties required by Trend Micro. </p>
     */
    inline ConnectorProfileProperties& WithTrendmicro(const TrendmicroConnectorProfileProperties& value) { SetTrendmicro(value); return *this;}

    /**
     * <p> The connector-specific properties required by Trend Micro. </p>
     */
    inline ConnectorProfileProperties& WithTrendmicro(TrendmicroConnectorProfileProperties&& value) { SetTrendmicro(std::move(value)); return *this;}


    /**
     * <p> The connector-specific properties required by Veeva. </p>
     */
    inline const VeevaConnectorProfileProperties& GetVeeva() const{ return m_veeva; }

    /**
     * <p> The connector-specific properties required by Veeva. </p>
     */
    inline bool VeevaHasBeenSet() const { return m_veevaHasBeenSet; }

    /**
     * <p> The connector-specific properties required by Veeva. </p>
     */
    inline void SetVeeva(const VeevaConnectorProfileProperties& value) { m_veevaHasBeenSet = true; m_veeva = value; }

    /**
     * <p> The connector-specific properties required by Veeva. </p>
     */
    inline void SetVeeva(VeevaConnectorProfileProperties&& value) { m_veevaHasBeenSet = true; m_veeva = std::move(value); }

    /**
     * <p> The connector-specific properties required by Veeva. </p>
     */
    inline ConnectorProfileProperties& WithVeeva(const VeevaConnectorProfileProperties& value) { SetVeeva(value); return *this;}

    /**
     * <p> The connector-specific properties required by Veeva. </p>
     */
    inline ConnectorProfileProperties& WithVeeva(VeevaConnectorProfileProperties&& value) { SetVeeva(std::move(value)); return *this;}


    /**
     * <p> The connector-specific properties required by Zendesk. </p>
     */
    inline const ZendeskConnectorProfileProperties& GetZendesk() const{ return m_zendesk; }

    /**
     * <p> The connector-specific properties required by Zendesk. </p>
     */
    inline bool ZendeskHasBeenSet() const { return m_zendeskHasBeenSet; }

    /**
     * <p> The connector-specific properties required by Zendesk. </p>
     */
    inline void SetZendesk(const ZendeskConnectorProfileProperties& value) { m_zendeskHasBeenSet = true; m_zendesk = value; }

    /**
     * <p> The connector-specific properties required by Zendesk. </p>
     */
    inline void SetZendesk(ZendeskConnectorProfileProperties&& value) { m_zendeskHasBeenSet = true; m_zendesk = std::move(value); }

    /**
     * <p> The connector-specific properties required by Zendesk. </p>
     */
    inline ConnectorProfileProperties& WithZendesk(const ZendeskConnectorProfileProperties& value) { SetZendesk(value); return *this;}

    /**
     * <p> The connector-specific properties required by Zendesk. </p>
     */
    inline ConnectorProfileProperties& WithZendesk(ZendeskConnectorProfileProperties&& value) { SetZendesk(std::move(value)); return *this;}

  private:

    AmplitudeConnectorProfileProperties m_amplitude;
    bool m_amplitudeHasBeenSet;

    DatadogConnectorProfileProperties m_datadog;
    bool m_datadogHasBeenSet;

    DynatraceConnectorProfileProperties m_dynatrace;
    bool m_dynatraceHasBeenSet;

    GoogleAnalyticsConnectorProfileProperties m_googleAnalytics;
    bool m_googleAnalyticsHasBeenSet;

    HoneycodeConnectorProfileProperties m_honeycode;
    bool m_honeycodeHasBeenSet;

    InforNexusConnectorProfileProperties m_inforNexus;
    bool m_inforNexusHasBeenSet;

    MarketoConnectorProfileProperties m_marketo;
    bool m_marketoHasBeenSet;

    RedshiftConnectorProfileProperties m_redshift;
    bool m_redshiftHasBeenSet;

    SalesforceConnectorProfileProperties m_salesforce;
    bool m_salesforceHasBeenSet;

    ServiceNowConnectorProfileProperties m_serviceNow;
    bool m_serviceNowHasBeenSet;

    SingularConnectorProfileProperties m_singular;
    bool m_singularHasBeenSet;

    SlackConnectorProfileProperties m_slack;
    bool m_slackHasBeenSet;

    SnowflakeConnectorProfileProperties m_snowflake;
    bool m_snowflakeHasBeenSet;

    TrendmicroConnectorProfileProperties m_trendmicro;
    bool m_trendmicroHasBeenSet;

    VeevaConnectorProfileProperties m_veeva;
    bool m_veevaHasBeenSet;

    ZendeskConnectorProfileProperties m_zendesk;
    bool m_zendeskHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
