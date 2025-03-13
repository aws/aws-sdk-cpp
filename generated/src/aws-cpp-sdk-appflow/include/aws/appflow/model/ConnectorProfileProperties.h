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
    AWS_APPFLOW_API ConnectorProfileProperties() = default;
    AWS_APPFLOW_API ConnectorProfileProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorProfileProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The connector-specific properties required by Amplitude. </p>
     */
    inline const AmplitudeConnectorProfileProperties& GetAmplitude() const { return m_amplitude; }
    inline bool AmplitudeHasBeenSet() const { return m_amplitudeHasBeenSet; }
    template<typename AmplitudeT = AmplitudeConnectorProfileProperties>
    void SetAmplitude(AmplitudeT&& value) { m_amplitudeHasBeenSet = true; m_amplitude = std::forward<AmplitudeT>(value); }
    template<typename AmplitudeT = AmplitudeConnectorProfileProperties>
    ConnectorProfileProperties& WithAmplitude(AmplitudeT&& value) { SetAmplitude(std::forward<AmplitudeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Datadog. </p>
     */
    inline const DatadogConnectorProfileProperties& GetDatadog() const { return m_datadog; }
    inline bool DatadogHasBeenSet() const { return m_datadogHasBeenSet; }
    template<typename DatadogT = DatadogConnectorProfileProperties>
    void SetDatadog(DatadogT&& value) { m_datadogHasBeenSet = true; m_datadog = std::forward<DatadogT>(value); }
    template<typename DatadogT = DatadogConnectorProfileProperties>
    ConnectorProfileProperties& WithDatadog(DatadogT&& value) { SetDatadog(std::forward<DatadogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Dynatrace. </p>
     */
    inline const DynatraceConnectorProfileProperties& GetDynatrace() const { return m_dynatrace; }
    inline bool DynatraceHasBeenSet() const { return m_dynatraceHasBeenSet; }
    template<typename DynatraceT = DynatraceConnectorProfileProperties>
    void SetDynatrace(DynatraceT&& value) { m_dynatraceHasBeenSet = true; m_dynatrace = std::forward<DynatraceT>(value); }
    template<typename DynatraceT = DynatraceConnectorProfileProperties>
    ConnectorProfileProperties& WithDynatrace(DynatraceT&& value) { SetDynatrace(std::forward<DynatraceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required Google Analytics. </p>
     */
    inline const GoogleAnalyticsConnectorProfileProperties& GetGoogleAnalytics() const { return m_googleAnalytics; }
    inline bool GoogleAnalyticsHasBeenSet() const { return m_googleAnalyticsHasBeenSet; }
    template<typename GoogleAnalyticsT = GoogleAnalyticsConnectorProfileProperties>
    void SetGoogleAnalytics(GoogleAnalyticsT&& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = std::forward<GoogleAnalyticsT>(value); }
    template<typename GoogleAnalyticsT = GoogleAnalyticsConnectorProfileProperties>
    ConnectorProfileProperties& WithGoogleAnalytics(GoogleAnalyticsT&& value) { SetGoogleAnalytics(std::forward<GoogleAnalyticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Amazon Honeycode. </p>
     */
    inline const HoneycodeConnectorProfileProperties& GetHoneycode() const { return m_honeycode; }
    inline bool HoneycodeHasBeenSet() const { return m_honeycodeHasBeenSet; }
    template<typename HoneycodeT = HoneycodeConnectorProfileProperties>
    void SetHoneycode(HoneycodeT&& value) { m_honeycodeHasBeenSet = true; m_honeycode = std::forward<HoneycodeT>(value); }
    template<typename HoneycodeT = HoneycodeConnectorProfileProperties>
    ConnectorProfileProperties& WithHoneycode(HoneycodeT&& value) { SetHoneycode(std::forward<HoneycodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Infor Nexus. </p>
     */
    inline const InforNexusConnectorProfileProperties& GetInforNexus() const { return m_inforNexus; }
    inline bool InforNexusHasBeenSet() const { return m_inforNexusHasBeenSet; }
    template<typename InforNexusT = InforNexusConnectorProfileProperties>
    void SetInforNexus(InforNexusT&& value) { m_inforNexusHasBeenSet = true; m_inforNexus = std::forward<InforNexusT>(value); }
    template<typename InforNexusT = InforNexusConnectorProfileProperties>
    ConnectorProfileProperties& WithInforNexus(InforNexusT&& value) { SetInforNexus(std::forward<InforNexusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Marketo. </p>
     */
    inline const MarketoConnectorProfileProperties& GetMarketo() const { return m_marketo; }
    inline bool MarketoHasBeenSet() const { return m_marketoHasBeenSet; }
    template<typename MarketoT = MarketoConnectorProfileProperties>
    void SetMarketo(MarketoT&& value) { m_marketoHasBeenSet = true; m_marketo = std::forward<MarketoT>(value); }
    template<typename MarketoT = MarketoConnectorProfileProperties>
    ConnectorProfileProperties& WithMarketo(MarketoT&& value) { SetMarketo(std::forward<MarketoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Amazon Redshift. </p>
     */
    inline const RedshiftConnectorProfileProperties& GetRedshift() const { return m_redshift; }
    inline bool RedshiftHasBeenSet() const { return m_redshiftHasBeenSet; }
    template<typename RedshiftT = RedshiftConnectorProfileProperties>
    void SetRedshift(RedshiftT&& value) { m_redshiftHasBeenSet = true; m_redshift = std::forward<RedshiftT>(value); }
    template<typename RedshiftT = RedshiftConnectorProfileProperties>
    ConnectorProfileProperties& WithRedshift(RedshiftT&& value) { SetRedshift(std::forward<RedshiftT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Salesforce. </p>
     */
    inline const SalesforceConnectorProfileProperties& GetSalesforce() const { return m_salesforce; }
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }
    template<typename SalesforceT = SalesforceConnectorProfileProperties>
    void SetSalesforce(SalesforceT&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::forward<SalesforceT>(value); }
    template<typename SalesforceT = SalesforceConnectorProfileProperties>
    ConnectorProfileProperties& WithSalesforce(SalesforceT&& value) { SetSalesforce(std::forward<SalesforceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by serviceNow. </p>
     */
    inline const ServiceNowConnectorProfileProperties& GetServiceNow() const { return m_serviceNow; }
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }
    template<typename ServiceNowT = ServiceNowConnectorProfileProperties>
    void SetServiceNow(ServiceNowT&& value) { m_serviceNowHasBeenSet = true; m_serviceNow = std::forward<ServiceNowT>(value); }
    template<typename ServiceNowT = ServiceNowConnectorProfileProperties>
    ConnectorProfileProperties& WithServiceNow(ServiceNowT&& value) { SetServiceNow(std::forward<ServiceNowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Singular. </p>
     */
    inline const SingularConnectorProfileProperties& GetSingular() const { return m_singular; }
    inline bool SingularHasBeenSet() const { return m_singularHasBeenSet; }
    template<typename SingularT = SingularConnectorProfileProperties>
    void SetSingular(SingularT&& value) { m_singularHasBeenSet = true; m_singular = std::forward<SingularT>(value); }
    template<typename SingularT = SingularConnectorProfileProperties>
    ConnectorProfileProperties& WithSingular(SingularT&& value) { SetSingular(std::forward<SingularT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Slack. </p>
     */
    inline const SlackConnectorProfileProperties& GetSlack() const { return m_slack; }
    inline bool SlackHasBeenSet() const { return m_slackHasBeenSet; }
    template<typename SlackT = SlackConnectorProfileProperties>
    void SetSlack(SlackT&& value) { m_slackHasBeenSet = true; m_slack = std::forward<SlackT>(value); }
    template<typename SlackT = SlackConnectorProfileProperties>
    ConnectorProfileProperties& WithSlack(SlackT&& value) { SetSlack(std::forward<SlackT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Snowflake. </p>
     */
    inline const SnowflakeConnectorProfileProperties& GetSnowflake() const { return m_snowflake; }
    inline bool SnowflakeHasBeenSet() const { return m_snowflakeHasBeenSet; }
    template<typename SnowflakeT = SnowflakeConnectorProfileProperties>
    void SetSnowflake(SnowflakeT&& value) { m_snowflakeHasBeenSet = true; m_snowflake = std::forward<SnowflakeT>(value); }
    template<typename SnowflakeT = SnowflakeConnectorProfileProperties>
    ConnectorProfileProperties& WithSnowflake(SnowflakeT&& value) { SetSnowflake(std::forward<SnowflakeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Trend Micro. </p>
     */
    inline const TrendmicroConnectorProfileProperties& GetTrendmicro() const { return m_trendmicro; }
    inline bool TrendmicroHasBeenSet() const { return m_trendmicroHasBeenSet; }
    template<typename TrendmicroT = TrendmicroConnectorProfileProperties>
    void SetTrendmicro(TrendmicroT&& value) { m_trendmicroHasBeenSet = true; m_trendmicro = std::forward<TrendmicroT>(value); }
    template<typename TrendmicroT = TrendmicroConnectorProfileProperties>
    ConnectorProfileProperties& WithTrendmicro(TrendmicroT&& value) { SetTrendmicro(std::forward<TrendmicroT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Veeva. </p>
     */
    inline const VeevaConnectorProfileProperties& GetVeeva() const { return m_veeva; }
    inline bool VeevaHasBeenSet() const { return m_veevaHasBeenSet; }
    template<typename VeevaT = VeevaConnectorProfileProperties>
    void SetVeeva(VeevaT&& value) { m_veevaHasBeenSet = true; m_veeva = std::forward<VeevaT>(value); }
    template<typename VeevaT = VeevaConnectorProfileProperties>
    ConnectorProfileProperties& WithVeeva(VeevaT&& value) { SetVeeva(std::forward<VeevaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties required by Zendesk. </p>
     */
    inline const ZendeskConnectorProfileProperties& GetZendesk() const { return m_zendesk; }
    inline bool ZendeskHasBeenSet() const { return m_zendeskHasBeenSet; }
    template<typename ZendeskT = ZendeskConnectorProfileProperties>
    void SetZendesk(ZendeskT&& value) { m_zendeskHasBeenSet = true; m_zendesk = std::forward<ZendeskT>(value); }
    template<typename ZendeskT = ZendeskConnectorProfileProperties>
    ConnectorProfileProperties& WithZendesk(ZendeskT&& value) { SetZendesk(std::forward<ZendeskT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SAPODataConnectorProfileProperties& GetSAPOData() const { return m_sAPOData; }
    inline bool SAPODataHasBeenSet() const { return m_sAPODataHasBeenSet; }
    template<typename SAPODataT = SAPODataConnectorProfileProperties>
    void SetSAPOData(SAPODataT&& value) { m_sAPODataHasBeenSet = true; m_sAPOData = std::forward<SAPODataT>(value); }
    template<typename SAPODataT = SAPODataConnectorProfileProperties>
    ConnectorProfileProperties& WithSAPOData(SAPODataT&& value) { SetSAPOData(std::forward<SAPODataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties required by the custom connector.</p>
     */
    inline const CustomConnectorProfileProperties& GetCustomConnector() const { return m_customConnector; }
    inline bool CustomConnectorHasBeenSet() const { return m_customConnectorHasBeenSet; }
    template<typename CustomConnectorT = CustomConnectorProfileProperties>
    void SetCustomConnector(CustomConnectorT&& value) { m_customConnectorHasBeenSet = true; m_customConnector = std::forward<CustomConnectorT>(value); }
    template<typename CustomConnectorT = CustomConnectorProfileProperties>
    ConnectorProfileProperties& WithCustomConnector(CustomConnectorT&& value) { SetCustomConnector(std::forward<CustomConnectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector-specific properties required by Salesforce Pardot.</p>
     */
    inline const PardotConnectorProfileProperties& GetPardot() const { return m_pardot; }
    inline bool PardotHasBeenSet() const { return m_pardotHasBeenSet; }
    template<typename PardotT = PardotConnectorProfileProperties>
    void SetPardot(PardotT&& value) { m_pardotHasBeenSet = true; m_pardot = std::forward<PardotT>(value); }
    template<typename PardotT = PardotConnectorProfileProperties>
    ConnectorProfileProperties& WithPardot(PardotT&& value) { SetPardot(std::forward<PardotT>(value)); return *this;}
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
