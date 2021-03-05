/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/AmplitudeConnectorProfileCredentials.h>
#include <aws/appflow/model/DatadogConnectorProfileCredentials.h>
#include <aws/appflow/model/DynatraceConnectorProfileCredentials.h>
#include <aws/appflow/model/GoogleAnalyticsConnectorProfileCredentials.h>
#include <aws/appflow/model/HoneycodeConnectorProfileCredentials.h>
#include <aws/appflow/model/InforNexusConnectorProfileCredentials.h>
#include <aws/appflow/model/MarketoConnectorProfileCredentials.h>
#include <aws/appflow/model/RedshiftConnectorProfileCredentials.h>
#include <aws/appflow/model/SalesforceConnectorProfileCredentials.h>
#include <aws/appflow/model/ServiceNowConnectorProfileCredentials.h>
#include <aws/appflow/model/SingularConnectorProfileCredentials.h>
#include <aws/appflow/model/SlackConnectorProfileCredentials.h>
#include <aws/appflow/model/SnowflakeConnectorProfileCredentials.h>
#include <aws/appflow/model/TrendmicroConnectorProfileCredentials.h>
#include <aws/appflow/model/VeevaConnectorProfileCredentials.h>
#include <aws/appflow/model/ZendeskConnectorProfileCredentials.h>
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
   * <p> The connector-specific credentials required by a connector. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ConnectorProfileCredentials">AWS
   * API Reference</a></p>
   */
  class AWS_APPFLOW_API ConnectorProfileCredentials
  {
  public:
    ConnectorProfileCredentials();
    ConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    ConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The connector-specific credentials required when using Amplitude. </p>
     */
    inline const AmplitudeConnectorProfileCredentials& GetAmplitude() const{ return m_amplitude; }

    /**
     * <p> The connector-specific credentials required when using Amplitude. </p>
     */
    inline bool AmplitudeHasBeenSet() const { return m_amplitudeHasBeenSet; }

    /**
     * <p> The connector-specific credentials required when using Amplitude. </p>
     */
    inline void SetAmplitude(const AmplitudeConnectorProfileCredentials& value) { m_amplitudeHasBeenSet = true; m_amplitude = value; }

    /**
     * <p> The connector-specific credentials required when using Amplitude. </p>
     */
    inline void SetAmplitude(AmplitudeConnectorProfileCredentials&& value) { m_amplitudeHasBeenSet = true; m_amplitude = std::move(value); }

    /**
     * <p> The connector-specific credentials required when using Amplitude. </p>
     */
    inline ConnectorProfileCredentials& WithAmplitude(const AmplitudeConnectorProfileCredentials& value) { SetAmplitude(value); return *this;}

    /**
     * <p> The connector-specific credentials required when using Amplitude. </p>
     */
    inline ConnectorProfileCredentials& WithAmplitude(AmplitudeConnectorProfileCredentials&& value) { SetAmplitude(std::move(value)); return *this;}


    /**
     * <p> The connector-specific credentials required when using Datadog. </p>
     */
    inline const DatadogConnectorProfileCredentials& GetDatadog() const{ return m_datadog; }

    /**
     * <p> The connector-specific credentials required when using Datadog. </p>
     */
    inline bool DatadogHasBeenSet() const { return m_datadogHasBeenSet; }

    /**
     * <p> The connector-specific credentials required when using Datadog. </p>
     */
    inline void SetDatadog(const DatadogConnectorProfileCredentials& value) { m_datadogHasBeenSet = true; m_datadog = value; }

    /**
     * <p> The connector-specific credentials required when using Datadog. </p>
     */
    inline void SetDatadog(DatadogConnectorProfileCredentials&& value) { m_datadogHasBeenSet = true; m_datadog = std::move(value); }

    /**
     * <p> The connector-specific credentials required when using Datadog. </p>
     */
    inline ConnectorProfileCredentials& WithDatadog(const DatadogConnectorProfileCredentials& value) { SetDatadog(value); return *this;}

    /**
     * <p> The connector-specific credentials required when using Datadog. </p>
     */
    inline ConnectorProfileCredentials& WithDatadog(DatadogConnectorProfileCredentials&& value) { SetDatadog(std::move(value)); return *this;}


    /**
     * <p> The connector-specific credentials required when using Dynatrace. </p>
     */
    inline const DynatraceConnectorProfileCredentials& GetDynatrace() const{ return m_dynatrace; }

    /**
     * <p> The connector-specific credentials required when using Dynatrace. </p>
     */
    inline bool DynatraceHasBeenSet() const { return m_dynatraceHasBeenSet; }

    /**
     * <p> The connector-specific credentials required when using Dynatrace. </p>
     */
    inline void SetDynatrace(const DynatraceConnectorProfileCredentials& value) { m_dynatraceHasBeenSet = true; m_dynatrace = value; }

    /**
     * <p> The connector-specific credentials required when using Dynatrace. </p>
     */
    inline void SetDynatrace(DynatraceConnectorProfileCredentials&& value) { m_dynatraceHasBeenSet = true; m_dynatrace = std::move(value); }

    /**
     * <p> The connector-specific credentials required when using Dynatrace. </p>
     */
    inline ConnectorProfileCredentials& WithDynatrace(const DynatraceConnectorProfileCredentials& value) { SetDynatrace(value); return *this;}

    /**
     * <p> The connector-specific credentials required when using Dynatrace. </p>
     */
    inline ConnectorProfileCredentials& WithDynatrace(DynatraceConnectorProfileCredentials&& value) { SetDynatrace(std::move(value)); return *this;}


    /**
     * <p> The connector-specific credentials required when using Google Analytics.
     * </p>
     */
    inline const GoogleAnalyticsConnectorProfileCredentials& GetGoogleAnalytics() const{ return m_googleAnalytics; }

    /**
     * <p> The connector-specific credentials required when using Google Analytics.
     * </p>
     */
    inline bool GoogleAnalyticsHasBeenSet() const { return m_googleAnalyticsHasBeenSet; }

    /**
     * <p> The connector-specific credentials required when using Google Analytics.
     * </p>
     */
    inline void SetGoogleAnalytics(const GoogleAnalyticsConnectorProfileCredentials& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = value; }

    /**
     * <p> The connector-specific credentials required when using Google Analytics.
     * </p>
     */
    inline void SetGoogleAnalytics(GoogleAnalyticsConnectorProfileCredentials&& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = std::move(value); }

    /**
     * <p> The connector-specific credentials required when using Google Analytics.
     * </p>
     */
    inline ConnectorProfileCredentials& WithGoogleAnalytics(const GoogleAnalyticsConnectorProfileCredentials& value) { SetGoogleAnalytics(value); return *this;}

    /**
     * <p> The connector-specific credentials required when using Google Analytics.
     * </p>
     */
    inline ConnectorProfileCredentials& WithGoogleAnalytics(GoogleAnalyticsConnectorProfileCredentials&& value) { SetGoogleAnalytics(std::move(value)); return *this;}


    /**
     * <p> The connector-specific credentials required when using Amazon Honeycode.
     * </p>
     */
    inline const HoneycodeConnectorProfileCredentials& GetHoneycode() const{ return m_honeycode; }

    /**
     * <p> The connector-specific credentials required when using Amazon Honeycode.
     * </p>
     */
    inline bool HoneycodeHasBeenSet() const { return m_honeycodeHasBeenSet; }

    /**
     * <p> The connector-specific credentials required when using Amazon Honeycode.
     * </p>
     */
    inline void SetHoneycode(const HoneycodeConnectorProfileCredentials& value) { m_honeycodeHasBeenSet = true; m_honeycode = value; }

    /**
     * <p> The connector-specific credentials required when using Amazon Honeycode.
     * </p>
     */
    inline void SetHoneycode(HoneycodeConnectorProfileCredentials&& value) { m_honeycodeHasBeenSet = true; m_honeycode = std::move(value); }

    /**
     * <p> The connector-specific credentials required when using Amazon Honeycode.
     * </p>
     */
    inline ConnectorProfileCredentials& WithHoneycode(const HoneycodeConnectorProfileCredentials& value) { SetHoneycode(value); return *this;}

    /**
     * <p> The connector-specific credentials required when using Amazon Honeycode.
     * </p>
     */
    inline ConnectorProfileCredentials& WithHoneycode(HoneycodeConnectorProfileCredentials&& value) { SetHoneycode(std::move(value)); return *this;}


    /**
     * <p> The connector-specific credentials required when using Infor Nexus. </p>
     */
    inline const InforNexusConnectorProfileCredentials& GetInforNexus() const{ return m_inforNexus; }

    /**
     * <p> The connector-specific credentials required when using Infor Nexus. </p>
     */
    inline bool InforNexusHasBeenSet() const { return m_inforNexusHasBeenSet; }

    /**
     * <p> The connector-specific credentials required when using Infor Nexus. </p>
     */
    inline void SetInforNexus(const InforNexusConnectorProfileCredentials& value) { m_inforNexusHasBeenSet = true; m_inforNexus = value; }

    /**
     * <p> The connector-specific credentials required when using Infor Nexus. </p>
     */
    inline void SetInforNexus(InforNexusConnectorProfileCredentials&& value) { m_inforNexusHasBeenSet = true; m_inforNexus = std::move(value); }

    /**
     * <p> The connector-specific credentials required when using Infor Nexus. </p>
     */
    inline ConnectorProfileCredentials& WithInforNexus(const InforNexusConnectorProfileCredentials& value) { SetInforNexus(value); return *this;}

    /**
     * <p> The connector-specific credentials required when using Infor Nexus. </p>
     */
    inline ConnectorProfileCredentials& WithInforNexus(InforNexusConnectorProfileCredentials&& value) { SetInforNexus(std::move(value)); return *this;}


    /**
     * <p> The connector-specific credentials required when using Marketo. </p>
     */
    inline const MarketoConnectorProfileCredentials& GetMarketo() const{ return m_marketo; }

    /**
     * <p> The connector-specific credentials required when using Marketo. </p>
     */
    inline bool MarketoHasBeenSet() const { return m_marketoHasBeenSet; }

    /**
     * <p> The connector-specific credentials required when using Marketo. </p>
     */
    inline void SetMarketo(const MarketoConnectorProfileCredentials& value) { m_marketoHasBeenSet = true; m_marketo = value; }

    /**
     * <p> The connector-specific credentials required when using Marketo. </p>
     */
    inline void SetMarketo(MarketoConnectorProfileCredentials&& value) { m_marketoHasBeenSet = true; m_marketo = std::move(value); }

    /**
     * <p> The connector-specific credentials required when using Marketo. </p>
     */
    inline ConnectorProfileCredentials& WithMarketo(const MarketoConnectorProfileCredentials& value) { SetMarketo(value); return *this;}

    /**
     * <p> The connector-specific credentials required when using Marketo. </p>
     */
    inline ConnectorProfileCredentials& WithMarketo(MarketoConnectorProfileCredentials&& value) { SetMarketo(std::move(value)); return *this;}


    /**
     * <p> The connector-specific credentials required when using Amazon Redshift. </p>
     */
    inline const RedshiftConnectorProfileCredentials& GetRedshift() const{ return m_redshift; }

    /**
     * <p> The connector-specific credentials required when using Amazon Redshift. </p>
     */
    inline bool RedshiftHasBeenSet() const { return m_redshiftHasBeenSet; }

    /**
     * <p> The connector-specific credentials required when using Amazon Redshift. </p>
     */
    inline void SetRedshift(const RedshiftConnectorProfileCredentials& value) { m_redshiftHasBeenSet = true; m_redshift = value; }

    /**
     * <p> The connector-specific credentials required when using Amazon Redshift. </p>
     */
    inline void SetRedshift(RedshiftConnectorProfileCredentials&& value) { m_redshiftHasBeenSet = true; m_redshift = std::move(value); }

    /**
     * <p> The connector-specific credentials required when using Amazon Redshift. </p>
     */
    inline ConnectorProfileCredentials& WithRedshift(const RedshiftConnectorProfileCredentials& value) { SetRedshift(value); return *this;}

    /**
     * <p> The connector-specific credentials required when using Amazon Redshift. </p>
     */
    inline ConnectorProfileCredentials& WithRedshift(RedshiftConnectorProfileCredentials&& value) { SetRedshift(std::move(value)); return *this;}


    /**
     * <p> The connector-specific credentials required when using Salesforce. </p>
     */
    inline const SalesforceConnectorProfileCredentials& GetSalesforce() const{ return m_salesforce; }

    /**
     * <p> The connector-specific credentials required when using Salesforce. </p>
     */
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }

    /**
     * <p> The connector-specific credentials required when using Salesforce. </p>
     */
    inline void SetSalesforce(const SalesforceConnectorProfileCredentials& value) { m_salesforceHasBeenSet = true; m_salesforce = value; }

    /**
     * <p> The connector-specific credentials required when using Salesforce. </p>
     */
    inline void SetSalesforce(SalesforceConnectorProfileCredentials&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::move(value); }

    /**
     * <p> The connector-specific credentials required when using Salesforce. </p>
     */
    inline ConnectorProfileCredentials& WithSalesforce(const SalesforceConnectorProfileCredentials& value) { SetSalesforce(value); return *this;}

    /**
     * <p> The connector-specific credentials required when using Salesforce. </p>
     */
    inline ConnectorProfileCredentials& WithSalesforce(SalesforceConnectorProfileCredentials&& value) { SetSalesforce(std::move(value)); return *this;}


    /**
     * <p> The connector-specific credentials required when using ServiceNow. </p>
     */
    inline const ServiceNowConnectorProfileCredentials& GetServiceNow() const{ return m_serviceNow; }

    /**
     * <p> The connector-specific credentials required when using ServiceNow. </p>
     */
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }

    /**
     * <p> The connector-specific credentials required when using ServiceNow. </p>
     */
    inline void SetServiceNow(const ServiceNowConnectorProfileCredentials& value) { m_serviceNowHasBeenSet = true; m_serviceNow = value; }

    /**
     * <p> The connector-specific credentials required when using ServiceNow. </p>
     */
    inline void SetServiceNow(ServiceNowConnectorProfileCredentials&& value) { m_serviceNowHasBeenSet = true; m_serviceNow = std::move(value); }

    /**
     * <p> The connector-specific credentials required when using ServiceNow. </p>
     */
    inline ConnectorProfileCredentials& WithServiceNow(const ServiceNowConnectorProfileCredentials& value) { SetServiceNow(value); return *this;}

    /**
     * <p> The connector-specific credentials required when using ServiceNow. </p>
     */
    inline ConnectorProfileCredentials& WithServiceNow(ServiceNowConnectorProfileCredentials&& value) { SetServiceNow(std::move(value)); return *this;}


    /**
     * <p> The connector-specific credentials required when using Singular. </p>
     */
    inline const SingularConnectorProfileCredentials& GetSingular() const{ return m_singular; }

    /**
     * <p> The connector-specific credentials required when using Singular. </p>
     */
    inline bool SingularHasBeenSet() const { return m_singularHasBeenSet; }

    /**
     * <p> The connector-specific credentials required when using Singular. </p>
     */
    inline void SetSingular(const SingularConnectorProfileCredentials& value) { m_singularHasBeenSet = true; m_singular = value; }

    /**
     * <p> The connector-specific credentials required when using Singular. </p>
     */
    inline void SetSingular(SingularConnectorProfileCredentials&& value) { m_singularHasBeenSet = true; m_singular = std::move(value); }

    /**
     * <p> The connector-specific credentials required when using Singular. </p>
     */
    inline ConnectorProfileCredentials& WithSingular(const SingularConnectorProfileCredentials& value) { SetSingular(value); return *this;}

    /**
     * <p> The connector-specific credentials required when using Singular. </p>
     */
    inline ConnectorProfileCredentials& WithSingular(SingularConnectorProfileCredentials&& value) { SetSingular(std::move(value)); return *this;}


    /**
     * <p> The connector-specific credentials required when using Slack. </p>
     */
    inline const SlackConnectorProfileCredentials& GetSlack() const{ return m_slack; }

    /**
     * <p> The connector-specific credentials required when using Slack. </p>
     */
    inline bool SlackHasBeenSet() const { return m_slackHasBeenSet; }

    /**
     * <p> The connector-specific credentials required when using Slack. </p>
     */
    inline void SetSlack(const SlackConnectorProfileCredentials& value) { m_slackHasBeenSet = true; m_slack = value; }

    /**
     * <p> The connector-specific credentials required when using Slack. </p>
     */
    inline void SetSlack(SlackConnectorProfileCredentials&& value) { m_slackHasBeenSet = true; m_slack = std::move(value); }

    /**
     * <p> The connector-specific credentials required when using Slack. </p>
     */
    inline ConnectorProfileCredentials& WithSlack(const SlackConnectorProfileCredentials& value) { SetSlack(value); return *this;}

    /**
     * <p> The connector-specific credentials required when using Slack. </p>
     */
    inline ConnectorProfileCredentials& WithSlack(SlackConnectorProfileCredentials&& value) { SetSlack(std::move(value)); return *this;}


    /**
     * <p> The connector-specific credentials required when using Snowflake. </p>
     */
    inline const SnowflakeConnectorProfileCredentials& GetSnowflake() const{ return m_snowflake; }

    /**
     * <p> The connector-specific credentials required when using Snowflake. </p>
     */
    inline bool SnowflakeHasBeenSet() const { return m_snowflakeHasBeenSet; }

    /**
     * <p> The connector-specific credentials required when using Snowflake. </p>
     */
    inline void SetSnowflake(const SnowflakeConnectorProfileCredentials& value) { m_snowflakeHasBeenSet = true; m_snowflake = value; }

    /**
     * <p> The connector-specific credentials required when using Snowflake. </p>
     */
    inline void SetSnowflake(SnowflakeConnectorProfileCredentials&& value) { m_snowflakeHasBeenSet = true; m_snowflake = std::move(value); }

    /**
     * <p> The connector-specific credentials required when using Snowflake. </p>
     */
    inline ConnectorProfileCredentials& WithSnowflake(const SnowflakeConnectorProfileCredentials& value) { SetSnowflake(value); return *this;}

    /**
     * <p> The connector-specific credentials required when using Snowflake. </p>
     */
    inline ConnectorProfileCredentials& WithSnowflake(SnowflakeConnectorProfileCredentials&& value) { SetSnowflake(std::move(value)); return *this;}


    /**
     * <p> The connector-specific credentials required when using Trend Micro. </p>
     */
    inline const TrendmicroConnectorProfileCredentials& GetTrendmicro() const{ return m_trendmicro; }

    /**
     * <p> The connector-specific credentials required when using Trend Micro. </p>
     */
    inline bool TrendmicroHasBeenSet() const { return m_trendmicroHasBeenSet; }

    /**
     * <p> The connector-specific credentials required when using Trend Micro. </p>
     */
    inline void SetTrendmicro(const TrendmicroConnectorProfileCredentials& value) { m_trendmicroHasBeenSet = true; m_trendmicro = value; }

    /**
     * <p> The connector-specific credentials required when using Trend Micro. </p>
     */
    inline void SetTrendmicro(TrendmicroConnectorProfileCredentials&& value) { m_trendmicroHasBeenSet = true; m_trendmicro = std::move(value); }

    /**
     * <p> The connector-specific credentials required when using Trend Micro. </p>
     */
    inline ConnectorProfileCredentials& WithTrendmicro(const TrendmicroConnectorProfileCredentials& value) { SetTrendmicro(value); return *this;}

    /**
     * <p> The connector-specific credentials required when using Trend Micro. </p>
     */
    inline ConnectorProfileCredentials& WithTrendmicro(TrendmicroConnectorProfileCredentials&& value) { SetTrendmicro(std::move(value)); return *this;}


    /**
     * <p> The connector-specific credentials required when using Veeva. </p>
     */
    inline const VeevaConnectorProfileCredentials& GetVeeva() const{ return m_veeva; }

    /**
     * <p> The connector-specific credentials required when using Veeva. </p>
     */
    inline bool VeevaHasBeenSet() const { return m_veevaHasBeenSet; }

    /**
     * <p> The connector-specific credentials required when using Veeva. </p>
     */
    inline void SetVeeva(const VeevaConnectorProfileCredentials& value) { m_veevaHasBeenSet = true; m_veeva = value; }

    /**
     * <p> The connector-specific credentials required when using Veeva. </p>
     */
    inline void SetVeeva(VeevaConnectorProfileCredentials&& value) { m_veevaHasBeenSet = true; m_veeva = std::move(value); }

    /**
     * <p> The connector-specific credentials required when using Veeva. </p>
     */
    inline ConnectorProfileCredentials& WithVeeva(const VeevaConnectorProfileCredentials& value) { SetVeeva(value); return *this;}

    /**
     * <p> The connector-specific credentials required when using Veeva. </p>
     */
    inline ConnectorProfileCredentials& WithVeeva(VeevaConnectorProfileCredentials&& value) { SetVeeva(std::move(value)); return *this;}


    /**
     * <p> The connector-specific credentials required when using Zendesk. </p>
     */
    inline const ZendeskConnectorProfileCredentials& GetZendesk() const{ return m_zendesk; }

    /**
     * <p> The connector-specific credentials required when using Zendesk. </p>
     */
    inline bool ZendeskHasBeenSet() const { return m_zendeskHasBeenSet; }

    /**
     * <p> The connector-specific credentials required when using Zendesk. </p>
     */
    inline void SetZendesk(const ZendeskConnectorProfileCredentials& value) { m_zendeskHasBeenSet = true; m_zendesk = value; }

    /**
     * <p> The connector-specific credentials required when using Zendesk. </p>
     */
    inline void SetZendesk(ZendeskConnectorProfileCredentials&& value) { m_zendeskHasBeenSet = true; m_zendesk = std::move(value); }

    /**
     * <p> The connector-specific credentials required when using Zendesk. </p>
     */
    inline ConnectorProfileCredentials& WithZendesk(const ZendeskConnectorProfileCredentials& value) { SetZendesk(value); return *this;}

    /**
     * <p> The connector-specific credentials required when using Zendesk. </p>
     */
    inline ConnectorProfileCredentials& WithZendesk(ZendeskConnectorProfileCredentials&& value) { SetZendesk(std::move(value)); return *this;}

  private:

    AmplitudeConnectorProfileCredentials m_amplitude;
    bool m_amplitudeHasBeenSet;

    DatadogConnectorProfileCredentials m_datadog;
    bool m_datadogHasBeenSet;

    DynatraceConnectorProfileCredentials m_dynatrace;
    bool m_dynatraceHasBeenSet;

    GoogleAnalyticsConnectorProfileCredentials m_googleAnalytics;
    bool m_googleAnalyticsHasBeenSet;

    HoneycodeConnectorProfileCredentials m_honeycode;
    bool m_honeycodeHasBeenSet;

    InforNexusConnectorProfileCredentials m_inforNexus;
    bool m_inforNexusHasBeenSet;

    MarketoConnectorProfileCredentials m_marketo;
    bool m_marketoHasBeenSet;

    RedshiftConnectorProfileCredentials m_redshift;
    bool m_redshiftHasBeenSet;

    SalesforceConnectorProfileCredentials m_salesforce;
    bool m_salesforceHasBeenSet;

    ServiceNowConnectorProfileCredentials m_serviceNow;
    bool m_serviceNowHasBeenSet;

    SingularConnectorProfileCredentials m_singular;
    bool m_singularHasBeenSet;

    SlackConnectorProfileCredentials m_slack;
    bool m_slackHasBeenSet;

    SnowflakeConnectorProfileCredentials m_snowflake;
    bool m_snowflakeHasBeenSet;

    TrendmicroConnectorProfileCredentials m_trendmicro;
    bool m_trendmicroHasBeenSet;

    VeevaConnectorProfileCredentials m_veeva;
    bool m_veevaHasBeenSet;

    ZendeskConnectorProfileCredentials m_zendesk;
    bool m_zendeskHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
