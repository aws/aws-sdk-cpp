﻿/**
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
#include <aws/appflow/model/SAPODataConnectorProfileCredentials.h>
#include <aws/appflow/model/CustomConnectorProfileCredentials.h>
#include <aws/appflow/model/PardotConnectorProfileCredentials.h>
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
  class ConnectorProfileCredentials
  {
  public:
    AWS_APPFLOW_API ConnectorProfileCredentials();
    AWS_APPFLOW_API ConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The connector-specific credentials required when using Amplitude. </p>
     */
    inline const AmplitudeConnectorProfileCredentials& GetAmplitude() const{ return m_amplitude; }
    inline bool AmplitudeHasBeenSet() const { return m_amplitudeHasBeenSet; }
    inline void SetAmplitude(const AmplitudeConnectorProfileCredentials& value) { m_amplitudeHasBeenSet = true; m_amplitude = value; }
    inline void SetAmplitude(AmplitudeConnectorProfileCredentials&& value) { m_amplitudeHasBeenSet = true; m_amplitude = std::move(value); }
    inline ConnectorProfileCredentials& WithAmplitude(const AmplitudeConnectorProfileCredentials& value) { SetAmplitude(value); return *this;}
    inline ConnectorProfileCredentials& WithAmplitude(AmplitudeConnectorProfileCredentials&& value) { SetAmplitude(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Datadog. </p>
     */
    inline const DatadogConnectorProfileCredentials& GetDatadog() const{ return m_datadog; }
    inline bool DatadogHasBeenSet() const { return m_datadogHasBeenSet; }
    inline void SetDatadog(const DatadogConnectorProfileCredentials& value) { m_datadogHasBeenSet = true; m_datadog = value; }
    inline void SetDatadog(DatadogConnectorProfileCredentials&& value) { m_datadogHasBeenSet = true; m_datadog = std::move(value); }
    inline ConnectorProfileCredentials& WithDatadog(const DatadogConnectorProfileCredentials& value) { SetDatadog(value); return *this;}
    inline ConnectorProfileCredentials& WithDatadog(DatadogConnectorProfileCredentials&& value) { SetDatadog(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Dynatrace. </p>
     */
    inline const DynatraceConnectorProfileCredentials& GetDynatrace() const{ return m_dynatrace; }
    inline bool DynatraceHasBeenSet() const { return m_dynatraceHasBeenSet; }
    inline void SetDynatrace(const DynatraceConnectorProfileCredentials& value) { m_dynatraceHasBeenSet = true; m_dynatrace = value; }
    inline void SetDynatrace(DynatraceConnectorProfileCredentials&& value) { m_dynatraceHasBeenSet = true; m_dynatrace = std::move(value); }
    inline ConnectorProfileCredentials& WithDynatrace(const DynatraceConnectorProfileCredentials& value) { SetDynatrace(value); return *this;}
    inline ConnectorProfileCredentials& WithDynatrace(DynatraceConnectorProfileCredentials&& value) { SetDynatrace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Google Analytics.
     * </p>
     */
    inline const GoogleAnalyticsConnectorProfileCredentials& GetGoogleAnalytics() const{ return m_googleAnalytics; }
    inline bool GoogleAnalyticsHasBeenSet() const { return m_googleAnalyticsHasBeenSet; }
    inline void SetGoogleAnalytics(const GoogleAnalyticsConnectorProfileCredentials& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = value; }
    inline void SetGoogleAnalytics(GoogleAnalyticsConnectorProfileCredentials&& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = std::move(value); }
    inline ConnectorProfileCredentials& WithGoogleAnalytics(const GoogleAnalyticsConnectorProfileCredentials& value) { SetGoogleAnalytics(value); return *this;}
    inline ConnectorProfileCredentials& WithGoogleAnalytics(GoogleAnalyticsConnectorProfileCredentials&& value) { SetGoogleAnalytics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Amazon Honeycode.
     * </p>
     */
    inline const HoneycodeConnectorProfileCredentials& GetHoneycode() const{ return m_honeycode; }
    inline bool HoneycodeHasBeenSet() const { return m_honeycodeHasBeenSet; }
    inline void SetHoneycode(const HoneycodeConnectorProfileCredentials& value) { m_honeycodeHasBeenSet = true; m_honeycode = value; }
    inline void SetHoneycode(HoneycodeConnectorProfileCredentials&& value) { m_honeycodeHasBeenSet = true; m_honeycode = std::move(value); }
    inline ConnectorProfileCredentials& WithHoneycode(const HoneycodeConnectorProfileCredentials& value) { SetHoneycode(value); return *this;}
    inline ConnectorProfileCredentials& WithHoneycode(HoneycodeConnectorProfileCredentials&& value) { SetHoneycode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Infor Nexus. </p>
     */
    inline const InforNexusConnectorProfileCredentials& GetInforNexus() const{ return m_inforNexus; }
    inline bool InforNexusHasBeenSet() const { return m_inforNexusHasBeenSet; }
    inline void SetInforNexus(const InforNexusConnectorProfileCredentials& value) { m_inforNexusHasBeenSet = true; m_inforNexus = value; }
    inline void SetInforNexus(InforNexusConnectorProfileCredentials&& value) { m_inforNexusHasBeenSet = true; m_inforNexus = std::move(value); }
    inline ConnectorProfileCredentials& WithInforNexus(const InforNexusConnectorProfileCredentials& value) { SetInforNexus(value); return *this;}
    inline ConnectorProfileCredentials& WithInforNexus(InforNexusConnectorProfileCredentials&& value) { SetInforNexus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Marketo. </p>
     */
    inline const MarketoConnectorProfileCredentials& GetMarketo() const{ return m_marketo; }
    inline bool MarketoHasBeenSet() const { return m_marketoHasBeenSet; }
    inline void SetMarketo(const MarketoConnectorProfileCredentials& value) { m_marketoHasBeenSet = true; m_marketo = value; }
    inline void SetMarketo(MarketoConnectorProfileCredentials&& value) { m_marketoHasBeenSet = true; m_marketo = std::move(value); }
    inline ConnectorProfileCredentials& WithMarketo(const MarketoConnectorProfileCredentials& value) { SetMarketo(value); return *this;}
    inline ConnectorProfileCredentials& WithMarketo(MarketoConnectorProfileCredentials&& value) { SetMarketo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Amazon Redshift. </p>
     */
    inline const RedshiftConnectorProfileCredentials& GetRedshift() const{ return m_redshift; }
    inline bool RedshiftHasBeenSet() const { return m_redshiftHasBeenSet; }
    inline void SetRedshift(const RedshiftConnectorProfileCredentials& value) { m_redshiftHasBeenSet = true; m_redshift = value; }
    inline void SetRedshift(RedshiftConnectorProfileCredentials&& value) { m_redshiftHasBeenSet = true; m_redshift = std::move(value); }
    inline ConnectorProfileCredentials& WithRedshift(const RedshiftConnectorProfileCredentials& value) { SetRedshift(value); return *this;}
    inline ConnectorProfileCredentials& WithRedshift(RedshiftConnectorProfileCredentials&& value) { SetRedshift(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Salesforce. </p>
     */
    inline const SalesforceConnectorProfileCredentials& GetSalesforce() const{ return m_salesforce; }
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }
    inline void SetSalesforce(const SalesforceConnectorProfileCredentials& value) { m_salesforceHasBeenSet = true; m_salesforce = value; }
    inline void SetSalesforce(SalesforceConnectorProfileCredentials&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::move(value); }
    inline ConnectorProfileCredentials& WithSalesforce(const SalesforceConnectorProfileCredentials& value) { SetSalesforce(value); return *this;}
    inline ConnectorProfileCredentials& WithSalesforce(SalesforceConnectorProfileCredentials&& value) { SetSalesforce(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using ServiceNow. </p>
     */
    inline const ServiceNowConnectorProfileCredentials& GetServiceNow() const{ return m_serviceNow; }
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }
    inline void SetServiceNow(const ServiceNowConnectorProfileCredentials& value) { m_serviceNowHasBeenSet = true; m_serviceNow = value; }
    inline void SetServiceNow(ServiceNowConnectorProfileCredentials&& value) { m_serviceNowHasBeenSet = true; m_serviceNow = std::move(value); }
    inline ConnectorProfileCredentials& WithServiceNow(const ServiceNowConnectorProfileCredentials& value) { SetServiceNow(value); return *this;}
    inline ConnectorProfileCredentials& WithServiceNow(ServiceNowConnectorProfileCredentials&& value) { SetServiceNow(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Singular. </p>
     */
    inline const SingularConnectorProfileCredentials& GetSingular() const{ return m_singular; }
    inline bool SingularHasBeenSet() const { return m_singularHasBeenSet; }
    inline void SetSingular(const SingularConnectorProfileCredentials& value) { m_singularHasBeenSet = true; m_singular = value; }
    inline void SetSingular(SingularConnectorProfileCredentials&& value) { m_singularHasBeenSet = true; m_singular = std::move(value); }
    inline ConnectorProfileCredentials& WithSingular(const SingularConnectorProfileCredentials& value) { SetSingular(value); return *this;}
    inline ConnectorProfileCredentials& WithSingular(SingularConnectorProfileCredentials&& value) { SetSingular(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Slack. </p>
     */
    inline const SlackConnectorProfileCredentials& GetSlack() const{ return m_slack; }
    inline bool SlackHasBeenSet() const { return m_slackHasBeenSet; }
    inline void SetSlack(const SlackConnectorProfileCredentials& value) { m_slackHasBeenSet = true; m_slack = value; }
    inline void SetSlack(SlackConnectorProfileCredentials&& value) { m_slackHasBeenSet = true; m_slack = std::move(value); }
    inline ConnectorProfileCredentials& WithSlack(const SlackConnectorProfileCredentials& value) { SetSlack(value); return *this;}
    inline ConnectorProfileCredentials& WithSlack(SlackConnectorProfileCredentials&& value) { SetSlack(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Snowflake. </p>
     */
    inline const SnowflakeConnectorProfileCredentials& GetSnowflake() const{ return m_snowflake; }
    inline bool SnowflakeHasBeenSet() const { return m_snowflakeHasBeenSet; }
    inline void SetSnowflake(const SnowflakeConnectorProfileCredentials& value) { m_snowflakeHasBeenSet = true; m_snowflake = value; }
    inline void SetSnowflake(SnowflakeConnectorProfileCredentials&& value) { m_snowflakeHasBeenSet = true; m_snowflake = std::move(value); }
    inline ConnectorProfileCredentials& WithSnowflake(const SnowflakeConnectorProfileCredentials& value) { SetSnowflake(value); return *this;}
    inline ConnectorProfileCredentials& WithSnowflake(SnowflakeConnectorProfileCredentials&& value) { SetSnowflake(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Trend Micro. </p>
     */
    inline const TrendmicroConnectorProfileCredentials& GetTrendmicro() const{ return m_trendmicro; }
    inline bool TrendmicroHasBeenSet() const { return m_trendmicroHasBeenSet; }
    inline void SetTrendmicro(const TrendmicroConnectorProfileCredentials& value) { m_trendmicroHasBeenSet = true; m_trendmicro = value; }
    inline void SetTrendmicro(TrendmicroConnectorProfileCredentials&& value) { m_trendmicroHasBeenSet = true; m_trendmicro = std::move(value); }
    inline ConnectorProfileCredentials& WithTrendmicro(const TrendmicroConnectorProfileCredentials& value) { SetTrendmicro(value); return *this;}
    inline ConnectorProfileCredentials& WithTrendmicro(TrendmicroConnectorProfileCredentials&& value) { SetTrendmicro(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Veeva. </p>
     */
    inline const VeevaConnectorProfileCredentials& GetVeeva() const{ return m_veeva; }
    inline bool VeevaHasBeenSet() const { return m_veevaHasBeenSet; }
    inline void SetVeeva(const VeevaConnectorProfileCredentials& value) { m_veevaHasBeenSet = true; m_veeva = value; }
    inline void SetVeeva(VeevaConnectorProfileCredentials&& value) { m_veevaHasBeenSet = true; m_veeva = std::move(value); }
    inline ConnectorProfileCredentials& WithVeeva(const VeevaConnectorProfileCredentials& value) { SetVeeva(value); return *this;}
    inline ConnectorProfileCredentials& WithVeeva(VeevaConnectorProfileCredentials&& value) { SetVeeva(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Zendesk. </p>
     */
    inline const ZendeskConnectorProfileCredentials& GetZendesk() const{ return m_zendesk; }
    inline bool ZendeskHasBeenSet() const { return m_zendeskHasBeenSet; }
    inline void SetZendesk(const ZendeskConnectorProfileCredentials& value) { m_zendeskHasBeenSet = true; m_zendesk = value; }
    inline void SetZendesk(ZendeskConnectorProfileCredentials&& value) { m_zendeskHasBeenSet = true; m_zendesk = std::move(value); }
    inline ConnectorProfileCredentials& WithZendesk(const ZendeskConnectorProfileCredentials& value) { SetZendesk(value); return *this;}
    inline ConnectorProfileCredentials& WithZendesk(ZendeskConnectorProfileCredentials&& value) { SetZendesk(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SAPODataConnectorProfileCredentials& GetSAPOData() const{ return m_sAPOData; }
    inline bool SAPODataHasBeenSet() const { return m_sAPODataHasBeenSet; }
    inline void SetSAPOData(const SAPODataConnectorProfileCredentials& value) { m_sAPODataHasBeenSet = true; m_sAPOData = value; }
    inline void SetSAPOData(SAPODataConnectorProfileCredentials&& value) { m_sAPODataHasBeenSet = true; m_sAPOData = std::move(value); }
    inline ConnectorProfileCredentials& WithSAPOData(const SAPODataConnectorProfileCredentials& value) { SetSAPOData(value); return *this;}
    inline ConnectorProfileCredentials& WithSAPOData(SAPODataConnectorProfileCredentials&& value) { SetSAPOData(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CustomConnectorProfileCredentials& GetCustomConnector() const{ return m_customConnector; }
    inline bool CustomConnectorHasBeenSet() const { return m_customConnectorHasBeenSet; }
    inline void SetCustomConnector(const CustomConnectorProfileCredentials& value) { m_customConnectorHasBeenSet = true; m_customConnector = value; }
    inline void SetCustomConnector(CustomConnectorProfileCredentials&& value) { m_customConnectorHasBeenSet = true; m_customConnector = std::move(value); }
    inline ConnectorProfileCredentials& WithCustomConnector(const CustomConnectorProfileCredentials& value) { SetCustomConnector(value); return *this;}
    inline ConnectorProfileCredentials& WithCustomConnector(CustomConnectorProfileCredentials&& value) { SetCustomConnector(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector-specific credentials required when using Salesforce Pardot.</p>
     */
    inline const PardotConnectorProfileCredentials& GetPardot() const{ return m_pardot; }
    inline bool PardotHasBeenSet() const { return m_pardotHasBeenSet; }
    inline void SetPardot(const PardotConnectorProfileCredentials& value) { m_pardotHasBeenSet = true; m_pardot = value; }
    inline void SetPardot(PardotConnectorProfileCredentials&& value) { m_pardotHasBeenSet = true; m_pardot = std::move(value); }
    inline ConnectorProfileCredentials& WithPardot(const PardotConnectorProfileCredentials& value) { SetPardot(value); return *this;}
    inline ConnectorProfileCredentials& WithPardot(PardotConnectorProfileCredentials&& value) { SetPardot(std::move(value)); return *this;}
    ///@}
  private:

    AmplitudeConnectorProfileCredentials m_amplitude;
    bool m_amplitudeHasBeenSet = false;

    DatadogConnectorProfileCredentials m_datadog;
    bool m_datadogHasBeenSet = false;

    DynatraceConnectorProfileCredentials m_dynatrace;
    bool m_dynatraceHasBeenSet = false;

    GoogleAnalyticsConnectorProfileCredentials m_googleAnalytics;
    bool m_googleAnalyticsHasBeenSet = false;

    HoneycodeConnectorProfileCredentials m_honeycode;
    bool m_honeycodeHasBeenSet = false;

    InforNexusConnectorProfileCredentials m_inforNexus;
    bool m_inforNexusHasBeenSet = false;

    MarketoConnectorProfileCredentials m_marketo;
    bool m_marketoHasBeenSet = false;

    RedshiftConnectorProfileCredentials m_redshift;
    bool m_redshiftHasBeenSet = false;

    SalesforceConnectorProfileCredentials m_salesforce;
    bool m_salesforceHasBeenSet = false;

    ServiceNowConnectorProfileCredentials m_serviceNow;
    bool m_serviceNowHasBeenSet = false;

    SingularConnectorProfileCredentials m_singular;
    bool m_singularHasBeenSet = false;

    SlackConnectorProfileCredentials m_slack;
    bool m_slackHasBeenSet = false;

    SnowflakeConnectorProfileCredentials m_snowflake;
    bool m_snowflakeHasBeenSet = false;

    TrendmicroConnectorProfileCredentials m_trendmicro;
    bool m_trendmicroHasBeenSet = false;

    VeevaConnectorProfileCredentials m_veeva;
    bool m_veevaHasBeenSet = false;

    ZendeskConnectorProfileCredentials m_zendesk;
    bool m_zendeskHasBeenSet = false;

    SAPODataConnectorProfileCredentials m_sAPOData;
    bool m_sAPODataHasBeenSet = false;

    CustomConnectorProfileCredentials m_customConnector;
    bool m_customConnectorHasBeenSet = false;

    PardotConnectorProfileCredentials m_pardot;
    bool m_pardotHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
