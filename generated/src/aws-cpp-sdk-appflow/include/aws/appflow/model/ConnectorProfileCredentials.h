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
    AWS_APPFLOW_API ConnectorProfileCredentials() = default;
    AWS_APPFLOW_API ConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The connector-specific credentials required when using Amplitude. </p>
     */
    inline const AmplitudeConnectorProfileCredentials& GetAmplitude() const { return m_amplitude; }
    inline bool AmplitudeHasBeenSet() const { return m_amplitudeHasBeenSet; }
    template<typename AmplitudeT = AmplitudeConnectorProfileCredentials>
    void SetAmplitude(AmplitudeT&& value) { m_amplitudeHasBeenSet = true; m_amplitude = std::forward<AmplitudeT>(value); }
    template<typename AmplitudeT = AmplitudeConnectorProfileCredentials>
    ConnectorProfileCredentials& WithAmplitude(AmplitudeT&& value) { SetAmplitude(std::forward<AmplitudeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Datadog. </p>
     */
    inline const DatadogConnectorProfileCredentials& GetDatadog() const { return m_datadog; }
    inline bool DatadogHasBeenSet() const { return m_datadogHasBeenSet; }
    template<typename DatadogT = DatadogConnectorProfileCredentials>
    void SetDatadog(DatadogT&& value) { m_datadogHasBeenSet = true; m_datadog = std::forward<DatadogT>(value); }
    template<typename DatadogT = DatadogConnectorProfileCredentials>
    ConnectorProfileCredentials& WithDatadog(DatadogT&& value) { SetDatadog(std::forward<DatadogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Dynatrace. </p>
     */
    inline const DynatraceConnectorProfileCredentials& GetDynatrace() const { return m_dynatrace; }
    inline bool DynatraceHasBeenSet() const { return m_dynatraceHasBeenSet; }
    template<typename DynatraceT = DynatraceConnectorProfileCredentials>
    void SetDynatrace(DynatraceT&& value) { m_dynatraceHasBeenSet = true; m_dynatrace = std::forward<DynatraceT>(value); }
    template<typename DynatraceT = DynatraceConnectorProfileCredentials>
    ConnectorProfileCredentials& WithDynatrace(DynatraceT&& value) { SetDynatrace(std::forward<DynatraceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Google Analytics.
     * </p>
     */
    inline const GoogleAnalyticsConnectorProfileCredentials& GetGoogleAnalytics() const { return m_googleAnalytics; }
    inline bool GoogleAnalyticsHasBeenSet() const { return m_googleAnalyticsHasBeenSet; }
    template<typename GoogleAnalyticsT = GoogleAnalyticsConnectorProfileCredentials>
    void SetGoogleAnalytics(GoogleAnalyticsT&& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = std::forward<GoogleAnalyticsT>(value); }
    template<typename GoogleAnalyticsT = GoogleAnalyticsConnectorProfileCredentials>
    ConnectorProfileCredentials& WithGoogleAnalytics(GoogleAnalyticsT&& value) { SetGoogleAnalytics(std::forward<GoogleAnalyticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Amazon Honeycode.
     * </p>
     */
    inline const HoneycodeConnectorProfileCredentials& GetHoneycode() const { return m_honeycode; }
    inline bool HoneycodeHasBeenSet() const { return m_honeycodeHasBeenSet; }
    template<typename HoneycodeT = HoneycodeConnectorProfileCredentials>
    void SetHoneycode(HoneycodeT&& value) { m_honeycodeHasBeenSet = true; m_honeycode = std::forward<HoneycodeT>(value); }
    template<typename HoneycodeT = HoneycodeConnectorProfileCredentials>
    ConnectorProfileCredentials& WithHoneycode(HoneycodeT&& value) { SetHoneycode(std::forward<HoneycodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Infor Nexus. </p>
     */
    inline const InforNexusConnectorProfileCredentials& GetInforNexus() const { return m_inforNexus; }
    inline bool InforNexusHasBeenSet() const { return m_inforNexusHasBeenSet; }
    template<typename InforNexusT = InforNexusConnectorProfileCredentials>
    void SetInforNexus(InforNexusT&& value) { m_inforNexusHasBeenSet = true; m_inforNexus = std::forward<InforNexusT>(value); }
    template<typename InforNexusT = InforNexusConnectorProfileCredentials>
    ConnectorProfileCredentials& WithInforNexus(InforNexusT&& value) { SetInforNexus(std::forward<InforNexusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Marketo. </p>
     */
    inline const MarketoConnectorProfileCredentials& GetMarketo() const { return m_marketo; }
    inline bool MarketoHasBeenSet() const { return m_marketoHasBeenSet; }
    template<typename MarketoT = MarketoConnectorProfileCredentials>
    void SetMarketo(MarketoT&& value) { m_marketoHasBeenSet = true; m_marketo = std::forward<MarketoT>(value); }
    template<typename MarketoT = MarketoConnectorProfileCredentials>
    ConnectorProfileCredentials& WithMarketo(MarketoT&& value) { SetMarketo(std::forward<MarketoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Amazon Redshift. </p>
     */
    inline const RedshiftConnectorProfileCredentials& GetRedshift() const { return m_redshift; }
    inline bool RedshiftHasBeenSet() const { return m_redshiftHasBeenSet; }
    template<typename RedshiftT = RedshiftConnectorProfileCredentials>
    void SetRedshift(RedshiftT&& value) { m_redshiftHasBeenSet = true; m_redshift = std::forward<RedshiftT>(value); }
    template<typename RedshiftT = RedshiftConnectorProfileCredentials>
    ConnectorProfileCredentials& WithRedshift(RedshiftT&& value) { SetRedshift(std::forward<RedshiftT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Salesforce. </p>
     */
    inline const SalesforceConnectorProfileCredentials& GetSalesforce() const { return m_salesforce; }
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }
    template<typename SalesforceT = SalesforceConnectorProfileCredentials>
    void SetSalesforce(SalesforceT&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::forward<SalesforceT>(value); }
    template<typename SalesforceT = SalesforceConnectorProfileCredentials>
    ConnectorProfileCredentials& WithSalesforce(SalesforceT&& value) { SetSalesforce(std::forward<SalesforceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using ServiceNow. </p>
     */
    inline const ServiceNowConnectorProfileCredentials& GetServiceNow() const { return m_serviceNow; }
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }
    template<typename ServiceNowT = ServiceNowConnectorProfileCredentials>
    void SetServiceNow(ServiceNowT&& value) { m_serviceNowHasBeenSet = true; m_serviceNow = std::forward<ServiceNowT>(value); }
    template<typename ServiceNowT = ServiceNowConnectorProfileCredentials>
    ConnectorProfileCredentials& WithServiceNow(ServiceNowT&& value) { SetServiceNow(std::forward<ServiceNowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Singular. </p>
     */
    inline const SingularConnectorProfileCredentials& GetSingular() const { return m_singular; }
    inline bool SingularHasBeenSet() const { return m_singularHasBeenSet; }
    template<typename SingularT = SingularConnectorProfileCredentials>
    void SetSingular(SingularT&& value) { m_singularHasBeenSet = true; m_singular = std::forward<SingularT>(value); }
    template<typename SingularT = SingularConnectorProfileCredentials>
    ConnectorProfileCredentials& WithSingular(SingularT&& value) { SetSingular(std::forward<SingularT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Slack. </p>
     */
    inline const SlackConnectorProfileCredentials& GetSlack() const { return m_slack; }
    inline bool SlackHasBeenSet() const { return m_slackHasBeenSet; }
    template<typename SlackT = SlackConnectorProfileCredentials>
    void SetSlack(SlackT&& value) { m_slackHasBeenSet = true; m_slack = std::forward<SlackT>(value); }
    template<typename SlackT = SlackConnectorProfileCredentials>
    ConnectorProfileCredentials& WithSlack(SlackT&& value) { SetSlack(std::forward<SlackT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Snowflake. </p>
     */
    inline const SnowflakeConnectorProfileCredentials& GetSnowflake() const { return m_snowflake; }
    inline bool SnowflakeHasBeenSet() const { return m_snowflakeHasBeenSet; }
    template<typename SnowflakeT = SnowflakeConnectorProfileCredentials>
    void SetSnowflake(SnowflakeT&& value) { m_snowflakeHasBeenSet = true; m_snowflake = std::forward<SnowflakeT>(value); }
    template<typename SnowflakeT = SnowflakeConnectorProfileCredentials>
    ConnectorProfileCredentials& WithSnowflake(SnowflakeT&& value) { SetSnowflake(std::forward<SnowflakeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Trend Micro. </p>
     */
    inline const TrendmicroConnectorProfileCredentials& GetTrendmicro() const { return m_trendmicro; }
    inline bool TrendmicroHasBeenSet() const { return m_trendmicroHasBeenSet; }
    template<typename TrendmicroT = TrendmicroConnectorProfileCredentials>
    void SetTrendmicro(TrendmicroT&& value) { m_trendmicroHasBeenSet = true; m_trendmicro = std::forward<TrendmicroT>(value); }
    template<typename TrendmicroT = TrendmicroConnectorProfileCredentials>
    ConnectorProfileCredentials& WithTrendmicro(TrendmicroT&& value) { SetTrendmicro(std::forward<TrendmicroT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Veeva. </p>
     */
    inline const VeevaConnectorProfileCredentials& GetVeeva() const { return m_veeva; }
    inline bool VeevaHasBeenSet() const { return m_veevaHasBeenSet; }
    template<typename VeevaT = VeevaConnectorProfileCredentials>
    void SetVeeva(VeevaT&& value) { m_veevaHasBeenSet = true; m_veeva = std::forward<VeevaT>(value); }
    template<typename VeevaT = VeevaConnectorProfileCredentials>
    ConnectorProfileCredentials& WithVeeva(VeevaT&& value) { SetVeeva(std::forward<VeevaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required when using Zendesk. </p>
     */
    inline const ZendeskConnectorProfileCredentials& GetZendesk() const { return m_zendesk; }
    inline bool ZendeskHasBeenSet() const { return m_zendeskHasBeenSet; }
    template<typename ZendeskT = ZendeskConnectorProfileCredentials>
    void SetZendesk(ZendeskT&& value) { m_zendeskHasBeenSet = true; m_zendesk = std::forward<ZendeskT>(value); }
    template<typename ZendeskT = ZendeskConnectorProfileCredentials>
    ConnectorProfileCredentials& WithZendesk(ZendeskT&& value) { SetZendesk(std::forward<ZendeskT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SAPODataConnectorProfileCredentials& GetSAPOData() const { return m_sAPOData; }
    inline bool SAPODataHasBeenSet() const { return m_sAPODataHasBeenSet; }
    template<typename SAPODataT = SAPODataConnectorProfileCredentials>
    void SetSAPOData(SAPODataT&& value) { m_sAPODataHasBeenSet = true; m_sAPOData = std::forward<SAPODataT>(value); }
    template<typename SAPODataT = SAPODataConnectorProfileCredentials>
    ConnectorProfileCredentials& WithSAPOData(SAPODataT&& value) { SetSAPOData(std::forward<SAPODataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CustomConnectorProfileCredentials& GetCustomConnector() const { return m_customConnector; }
    inline bool CustomConnectorHasBeenSet() const { return m_customConnectorHasBeenSet; }
    template<typename CustomConnectorT = CustomConnectorProfileCredentials>
    void SetCustomConnector(CustomConnectorT&& value) { m_customConnectorHasBeenSet = true; m_customConnector = std::forward<CustomConnectorT>(value); }
    template<typename CustomConnectorT = CustomConnectorProfileCredentials>
    ConnectorProfileCredentials& WithCustomConnector(CustomConnectorT&& value) { SetCustomConnector(std::forward<CustomConnectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector-specific credentials required when using Salesforce Pardot.</p>
     */
    inline const PardotConnectorProfileCredentials& GetPardot() const { return m_pardot; }
    inline bool PardotHasBeenSet() const { return m_pardotHasBeenSet; }
    template<typename PardotT = PardotConnectorProfileCredentials>
    void SetPardot(PardotT&& value) { m_pardotHasBeenSet = true; m_pardot = std::forward<PardotT>(value); }
    template<typename PardotT = PardotConnectorProfileCredentials>
    ConnectorProfileCredentials& WithPardot(PardotT&& value) { SetPardot(std::forward<PardotT>(value)); return *this;}
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
