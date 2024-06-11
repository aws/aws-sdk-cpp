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
#include <aws/appflow/model/SAPODataConnectorProfileProperties.h>
#include <aws/appflow/model/CustomConnectorProfileProperties.h>
#include <aws/appflow/model/PardotConnectorProfileProperties.h>
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
  class ConnectorProfileProperties
  {
  public:
    AWS_APPFLOW_API ConnectorProfileProperties();
    AWS_APPFLOW_API ConnectorProfileProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorProfileProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The connector-specific properties required by Amplitude. </p>
     */
    inline const AmplitudeConnectorProfileProperties& GetAmplitude() const{ return m_amplitude; }
    inline bool AmplitudeHasBeenSet() const { return m_amplitudeHasBeenSet; }
    inline void SetAmplitude(const AmplitudeConnectorProfileProperties& value) { m_amplitudeHasBeenSet = true; m_amplitude = value; }
    inline void SetAmplitude(AmplitudeConnectorProfileProperties&& value) { m_amplitudeHasBeenSet = true; m_amplitude = std::move(value); }
    inline ConnectorProfileProperties& WithAmplitude(const AmplitudeConnectorProfileProperties& value) { SetAmplitude(value); return *this;}
    inline ConnectorProfileProperties& WithAmplitude(AmplitudeConnectorProfileProperties&& value) { SetAmplitude(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Datadog. </p>
     */
    inline const DatadogConnectorProfileProperties& GetDatadog() const{ return m_datadog; }
    inline bool DatadogHasBeenSet() const { return m_datadogHasBeenSet; }
    inline void SetDatadog(const DatadogConnectorProfileProperties& value) { m_datadogHasBeenSet = true; m_datadog = value; }
    inline void SetDatadog(DatadogConnectorProfileProperties&& value) { m_datadogHasBeenSet = true; m_datadog = std::move(value); }
    inline ConnectorProfileProperties& WithDatadog(const DatadogConnectorProfileProperties& value) { SetDatadog(value); return *this;}
    inline ConnectorProfileProperties& WithDatadog(DatadogConnectorProfileProperties&& value) { SetDatadog(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Dynatrace. </p>
     */
    inline const DynatraceConnectorProfileProperties& GetDynatrace() const{ return m_dynatrace; }
    inline bool DynatraceHasBeenSet() const { return m_dynatraceHasBeenSet; }
    inline void SetDynatrace(const DynatraceConnectorProfileProperties& value) { m_dynatraceHasBeenSet = true; m_dynatrace = value; }
    inline void SetDynatrace(DynatraceConnectorProfileProperties&& value) { m_dynatraceHasBeenSet = true; m_dynatrace = std::move(value); }
    inline ConnectorProfileProperties& WithDynatrace(const DynatraceConnectorProfileProperties& value) { SetDynatrace(value); return *this;}
    inline ConnectorProfileProperties& WithDynatrace(DynatraceConnectorProfileProperties&& value) { SetDynatrace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required Google Analytics. </p>
     */
    inline const GoogleAnalyticsConnectorProfileProperties& GetGoogleAnalytics() const{ return m_googleAnalytics; }
    inline bool GoogleAnalyticsHasBeenSet() const { return m_googleAnalyticsHasBeenSet; }
    inline void SetGoogleAnalytics(const GoogleAnalyticsConnectorProfileProperties& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = value; }
    inline void SetGoogleAnalytics(GoogleAnalyticsConnectorProfileProperties&& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = std::move(value); }
    inline ConnectorProfileProperties& WithGoogleAnalytics(const GoogleAnalyticsConnectorProfileProperties& value) { SetGoogleAnalytics(value); return *this;}
    inline ConnectorProfileProperties& WithGoogleAnalytics(GoogleAnalyticsConnectorProfileProperties&& value) { SetGoogleAnalytics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Amazon Honeycode. </p>
     */
    inline const HoneycodeConnectorProfileProperties& GetHoneycode() const{ return m_honeycode; }
    inline bool HoneycodeHasBeenSet() const { return m_honeycodeHasBeenSet; }
    inline void SetHoneycode(const HoneycodeConnectorProfileProperties& value) { m_honeycodeHasBeenSet = true; m_honeycode = value; }
    inline void SetHoneycode(HoneycodeConnectorProfileProperties&& value) { m_honeycodeHasBeenSet = true; m_honeycode = std::move(value); }
    inline ConnectorProfileProperties& WithHoneycode(const HoneycodeConnectorProfileProperties& value) { SetHoneycode(value); return *this;}
    inline ConnectorProfileProperties& WithHoneycode(HoneycodeConnectorProfileProperties&& value) { SetHoneycode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Infor Nexus. </p>
     */
    inline const InforNexusConnectorProfileProperties& GetInforNexus() const{ return m_inforNexus; }
    inline bool InforNexusHasBeenSet() const { return m_inforNexusHasBeenSet; }
    inline void SetInforNexus(const InforNexusConnectorProfileProperties& value) { m_inforNexusHasBeenSet = true; m_inforNexus = value; }
    inline void SetInforNexus(InforNexusConnectorProfileProperties&& value) { m_inforNexusHasBeenSet = true; m_inforNexus = std::move(value); }
    inline ConnectorProfileProperties& WithInforNexus(const InforNexusConnectorProfileProperties& value) { SetInforNexus(value); return *this;}
    inline ConnectorProfileProperties& WithInforNexus(InforNexusConnectorProfileProperties&& value) { SetInforNexus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Marketo. </p>
     */
    inline const MarketoConnectorProfileProperties& GetMarketo() const{ return m_marketo; }
    inline bool MarketoHasBeenSet() const { return m_marketoHasBeenSet; }
    inline void SetMarketo(const MarketoConnectorProfileProperties& value) { m_marketoHasBeenSet = true; m_marketo = value; }
    inline void SetMarketo(MarketoConnectorProfileProperties&& value) { m_marketoHasBeenSet = true; m_marketo = std::move(value); }
    inline ConnectorProfileProperties& WithMarketo(const MarketoConnectorProfileProperties& value) { SetMarketo(value); return *this;}
    inline ConnectorProfileProperties& WithMarketo(MarketoConnectorProfileProperties&& value) { SetMarketo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Amazon Redshift. </p>
     */
    inline const RedshiftConnectorProfileProperties& GetRedshift() const{ return m_redshift; }
    inline bool RedshiftHasBeenSet() const { return m_redshiftHasBeenSet; }
    inline void SetRedshift(const RedshiftConnectorProfileProperties& value) { m_redshiftHasBeenSet = true; m_redshift = value; }
    inline void SetRedshift(RedshiftConnectorProfileProperties&& value) { m_redshiftHasBeenSet = true; m_redshift = std::move(value); }
    inline ConnectorProfileProperties& WithRedshift(const RedshiftConnectorProfileProperties& value) { SetRedshift(value); return *this;}
    inline ConnectorProfileProperties& WithRedshift(RedshiftConnectorProfileProperties&& value) { SetRedshift(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Salesforce. </p>
     */
    inline const SalesforceConnectorProfileProperties& GetSalesforce() const{ return m_salesforce; }
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }
    inline void SetSalesforce(const SalesforceConnectorProfileProperties& value) { m_salesforceHasBeenSet = true; m_salesforce = value; }
    inline void SetSalesforce(SalesforceConnectorProfileProperties&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::move(value); }
    inline ConnectorProfileProperties& WithSalesforce(const SalesforceConnectorProfileProperties& value) { SetSalesforce(value); return *this;}
    inline ConnectorProfileProperties& WithSalesforce(SalesforceConnectorProfileProperties&& value) { SetSalesforce(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by serviceNow. </p>
     */
    inline const ServiceNowConnectorProfileProperties& GetServiceNow() const{ return m_serviceNow; }
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }
    inline void SetServiceNow(const ServiceNowConnectorProfileProperties& value) { m_serviceNowHasBeenSet = true; m_serviceNow = value; }
    inline void SetServiceNow(ServiceNowConnectorProfileProperties&& value) { m_serviceNowHasBeenSet = true; m_serviceNow = std::move(value); }
    inline ConnectorProfileProperties& WithServiceNow(const ServiceNowConnectorProfileProperties& value) { SetServiceNow(value); return *this;}
    inline ConnectorProfileProperties& WithServiceNow(ServiceNowConnectorProfileProperties&& value) { SetServiceNow(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Singular. </p>
     */
    inline const SingularConnectorProfileProperties& GetSingular() const{ return m_singular; }
    inline bool SingularHasBeenSet() const { return m_singularHasBeenSet; }
    inline void SetSingular(const SingularConnectorProfileProperties& value) { m_singularHasBeenSet = true; m_singular = value; }
    inline void SetSingular(SingularConnectorProfileProperties&& value) { m_singularHasBeenSet = true; m_singular = std::move(value); }
    inline ConnectorProfileProperties& WithSingular(const SingularConnectorProfileProperties& value) { SetSingular(value); return *this;}
    inline ConnectorProfileProperties& WithSingular(SingularConnectorProfileProperties&& value) { SetSingular(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Slack. </p>
     */
    inline const SlackConnectorProfileProperties& GetSlack() const{ return m_slack; }
    inline bool SlackHasBeenSet() const { return m_slackHasBeenSet; }
    inline void SetSlack(const SlackConnectorProfileProperties& value) { m_slackHasBeenSet = true; m_slack = value; }
    inline void SetSlack(SlackConnectorProfileProperties&& value) { m_slackHasBeenSet = true; m_slack = std::move(value); }
    inline ConnectorProfileProperties& WithSlack(const SlackConnectorProfileProperties& value) { SetSlack(value); return *this;}
    inline ConnectorProfileProperties& WithSlack(SlackConnectorProfileProperties&& value) { SetSlack(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Snowflake. </p>
     */
    inline const SnowflakeConnectorProfileProperties& GetSnowflake() const{ return m_snowflake; }
    inline bool SnowflakeHasBeenSet() const { return m_snowflakeHasBeenSet; }
    inline void SetSnowflake(const SnowflakeConnectorProfileProperties& value) { m_snowflakeHasBeenSet = true; m_snowflake = value; }
    inline void SetSnowflake(SnowflakeConnectorProfileProperties&& value) { m_snowflakeHasBeenSet = true; m_snowflake = std::move(value); }
    inline ConnectorProfileProperties& WithSnowflake(const SnowflakeConnectorProfileProperties& value) { SetSnowflake(value); return *this;}
    inline ConnectorProfileProperties& WithSnowflake(SnowflakeConnectorProfileProperties&& value) { SetSnowflake(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Trend Micro. </p>
     */
    inline const TrendmicroConnectorProfileProperties& GetTrendmicro() const{ return m_trendmicro; }
    inline bool TrendmicroHasBeenSet() const { return m_trendmicroHasBeenSet; }
    inline void SetTrendmicro(const TrendmicroConnectorProfileProperties& value) { m_trendmicroHasBeenSet = true; m_trendmicro = value; }
    inline void SetTrendmicro(TrendmicroConnectorProfileProperties&& value) { m_trendmicroHasBeenSet = true; m_trendmicro = std::move(value); }
    inline ConnectorProfileProperties& WithTrendmicro(const TrendmicroConnectorProfileProperties& value) { SetTrendmicro(value); return *this;}
    inline ConnectorProfileProperties& WithTrendmicro(TrendmicroConnectorProfileProperties&& value) { SetTrendmicro(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Veeva. </p>
     */
    inline const VeevaConnectorProfileProperties& GetVeeva() const{ return m_veeva; }
    inline bool VeevaHasBeenSet() const { return m_veevaHasBeenSet; }
    inline void SetVeeva(const VeevaConnectorProfileProperties& value) { m_veevaHasBeenSet = true; m_veeva = value; }
    inline void SetVeeva(VeevaConnectorProfileProperties&& value) { m_veevaHasBeenSet = true; m_veeva = std::move(value); }
    inline ConnectorProfileProperties& WithVeeva(const VeevaConnectorProfileProperties& value) { SetVeeva(value); return *this;}
    inline ConnectorProfileProperties& WithVeeva(VeevaConnectorProfileProperties&& value) { SetVeeva(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Zendesk. </p>
     */
    inline const ZendeskConnectorProfileProperties& GetZendesk() const{ return m_zendesk; }
    inline bool ZendeskHasBeenSet() const { return m_zendeskHasBeenSet; }
    inline void SetZendesk(const ZendeskConnectorProfileProperties& value) { m_zendeskHasBeenSet = true; m_zendesk = value; }
    inline void SetZendesk(ZendeskConnectorProfileProperties&& value) { m_zendeskHasBeenSet = true; m_zendesk = std::move(value); }
    inline ConnectorProfileProperties& WithZendesk(const ZendeskConnectorProfileProperties& value) { SetZendesk(value); return *this;}
    inline ConnectorProfileProperties& WithZendesk(ZendeskConnectorProfileProperties&& value) { SetZendesk(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SAPODataConnectorProfileProperties& GetSAPOData() const{ return m_sAPOData; }
    inline bool SAPODataHasBeenSet() const { return m_sAPODataHasBeenSet; }
    inline void SetSAPOData(const SAPODataConnectorProfileProperties& value) { m_sAPODataHasBeenSet = true; m_sAPOData = value; }
    inline void SetSAPOData(SAPODataConnectorProfileProperties&& value) { m_sAPODataHasBeenSet = true; m_sAPOData = std::move(value); }
    inline ConnectorProfileProperties& WithSAPOData(const SAPODataConnectorProfileProperties& value) { SetSAPOData(value); return *this;}
    inline ConnectorProfileProperties& WithSAPOData(SAPODataConnectorProfileProperties&& value) { SetSAPOData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties required by the custom connector.</p>
     */
    inline const CustomConnectorProfileProperties& GetCustomConnector() const{ return m_customConnector; }
    inline bool CustomConnectorHasBeenSet() const { return m_customConnectorHasBeenSet; }
    inline void SetCustomConnector(const CustomConnectorProfileProperties& value) { m_customConnectorHasBeenSet = true; m_customConnector = value; }
    inline void SetCustomConnector(CustomConnectorProfileProperties&& value) { m_customConnectorHasBeenSet = true; m_customConnector = std::move(value); }
    inline ConnectorProfileProperties& WithCustomConnector(const CustomConnectorProfileProperties& value) { SetCustomConnector(value); return *this;}
    inline ConnectorProfileProperties& WithCustomConnector(CustomConnectorProfileProperties&& value) { SetCustomConnector(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector-specific properties required by Salesforce Pardot.</p>
     */
    inline const PardotConnectorProfileProperties& GetPardot() const{ return m_pardot; }
    inline bool PardotHasBeenSet() const { return m_pardotHasBeenSet; }
    inline void SetPardot(const PardotConnectorProfileProperties& value) { m_pardotHasBeenSet = true; m_pardot = value; }
    inline void SetPardot(PardotConnectorProfileProperties&& value) { m_pardotHasBeenSet = true; m_pardot = std::move(value); }
    inline ConnectorProfileProperties& WithPardot(const PardotConnectorProfileProperties& value) { SetPardot(value); return *this;}
    inline ConnectorProfileProperties& WithPardot(PardotConnectorProfileProperties&& value) { SetPardot(std::move(value)); return *this;}
    ///@}
  private:

    AmplitudeConnectorProfileProperties m_amplitude;
    bool m_amplitudeHasBeenSet = false;

    DatadogConnectorProfileProperties m_datadog;
    bool m_datadogHasBeenSet = false;

    DynatraceConnectorProfileProperties m_dynatrace;
    bool m_dynatraceHasBeenSet = false;

    GoogleAnalyticsConnectorProfileProperties m_googleAnalytics;
    bool m_googleAnalyticsHasBeenSet = false;

    HoneycodeConnectorProfileProperties m_honeycode;
    bool m_honeycodeHasBeenSet = false;

    InforNexusConnectorProfileProperties m_inforNexus;
    bool m_inforNexusHasBeenSet = false;

    MarketoConnectorProfileProperties m_marketo;
    bool m_marketoHasBeenSet = false;

    RedshiftConnectorProfileProperties m_redshift;
    bool m_redshiftHasBeenSet = false;

    SalesforceConnectorProfileProperties m_salesforce;
    bool m_salesforceHasBeenSet = false;

    ServiceNowConnectorProfileProperties m_serviceNow;
    bool m_serviceNowHasBeenSet = false;

    SingularConnectorProfileProperties m_singular;
    bool m_singularHasBeenSet = false;

    SlackConnectorProfileProperties m_slack;
    bool m_slackHasBeenSet = false;

    SnowflakeConnectorProfileProperties m_snowflake;
    bool m_snowflakeHasBeenSet = false;

    TrendmicroConnectorProfileProperties m_trendmicro;
    bool m_trendmicroHasBeenSet = false;

    VeevaConnectorProfileProperties m_veeva;
    bool m_veevaHasBeenSet = false;

    ZendeskConnectorProfileProperties m_zendesk;
    bool m_zendeskHasBeenSet = false;

    SAPODataConnectorProfileProperties m_sAPOData;
    bool m_sAPODataHasBeenSet = false;

    CustomConnectorProfileProperties m_customConnector;
    bool m_customConnectorHasBeenSet = false;

    PardotConnectorProfileProperties m_pardot;
    bool m_pardotHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
