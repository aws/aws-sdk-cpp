/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/AmplitudeSourceProperties.h>
#include <aws/appflow/model/DatadogSourceProperties.h>
#include <aws/appflow/model/DynatraceSourceProperties.h>
#include <aws/appflow/model/GoogleAnalyticsSourceProperties.h>
#include <aws/appflow/model/InforNexusSourceProperties.h>
#include <aws/appflow/model/MarketoSourceProperties.h>
#include <aws/appflow/model/S3SourceProperties.h>
#include <aws/appflow/model/SalesforceSourceProperties.h>
#include <aws/appflow/model/ServiceNowSourceProperties.h>
#include <aws/appflow/model/SingularSourceProperties.h>
#include <aws/appflow/model/SlackSourceProperties.h>
#include <aws/appflow/model/TrendmicroSourceProperties.h>
#include <aws/appflow/model/VeevaSourceProperties.h>
#include <aws/appflow/model/ZendeskSourceProperties.h>
#include <aws/appflow/model/SAPODataSourceProperties.h>
#include <aws/appflow/model/CustomConnectorSourceProperties.h>
#include <aws/appflow/model/PardotSourceProperties.h>
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
   * <p> Specifies the information that is required to query a particular connector.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SourceConnectorProperties">AWS
   * API Reference</a></p>
   */
  class SourceConnectorProperties
  {
  public:
    AWS_APPFLOW_API SourceConnectorProperties() = default;
    AWS_APPFLOW_API SourceConnectorProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SourceConnectorProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the information that is required for querying Amplitude. </p>
     */
    inline const AmplitudeSourceProperties& GetAmplitude() const { return m_amplitude; }
    inline bool AmplitudeHasBeenSet() const { return m_amplitudeHasBeenSet; }
    template<typename AmplitudeT = AmplitudeSourceProperties>
    void SetAmplitude(AmplitudeT&& value) { m_amplitudeHasBeenSet = true; m_amplitude = std::forward<AmplitudeT>(value); }
    template<typename AmplitudeT = AmplitudeSourceProperties>
    SourceConnectorProperties& WithAmplitude(AmplitudeT&& value) { SetAmplitude(std::forward<AmplitudeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Datadog. </p>
     */
    inline const DatadogSourceProperties& GetDatadog() const { return m_datadog; }
    inline bool DatadogHasBeenSet() const { return m_datadogHasBeenSet; }
    template<typename DatadogT = DatadogSourceProperties>
    void SetDatadog(DatadogT&& value) { m_datadogHasBeenSet = true; m_datadog = std::forward<DatadogT>(value); }
    template<typename DatadogT = DatadogSourceProperties>
    SourceConnectorProperties& WithDatadog(DatadogT&& value) { SetDatadog(std::forward<DatadogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Dynatrace. </p>
     */
    inline const DynatraceSourceProperties& GetDynatrace() const { return m_dynatrace; }
    inline bool DynatraceHasBeenSet() const { return m_dynatraceHasBeenSet; }
    template<typename DynatraceT = DynatraceSourceProperties>
    void SetDynatrace(DynatraceT&& value) { m_dynatraceHasBeenSet = true; m_dynatrace = std::forward<DynatraceT>(value); }
    template<typename DynatraceT = DynatraceSourceProperties>
    SourceConnectorProperties& WithDynatrace(DynatraceT&& value) { SetDynatrace(std::forward<DynatraceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Google Analytics.
     * </p>
     */
    inline const GoogleAnalyticsSourceProperties& GetGoogleAnalytics() const { return m_googleAnalytics; }
    inline bool GoogleAnalyticsHasBeenSet() const { return m_googleAnalyticsHasBeenSet; }
    template<typename GoogleAnalyticsT = GoogleAnalyticsSourceProperties>
    void SetGoogleAnalytics(GoogleAnalyticsT&& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = std::forward<GoogleAnalyticsT>(value); }
    template<typename GoogleAnalyticsT = GoogleAnalyticsSourceProperties>
    SourceConnectorProperties& WithGoogleAnalytics(GoogleAnalyticsT&& value) { SetGoogleAnalytics(std::forward<GoogleAnalyticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Infor Nexus. </p>
     */
    inline const InforNexusSourceProperties& GetInforNexus() const { return m_inforNexus; }
    inline bool InforNexusHasBeenSet() const { return m_inforNexusHasBeenSet; }
    template<typename InforNexusT = InforNexusSourceProperties>
    void SetInforNexus(InforNexusT&& value) { m_inforNexusHasBeenSet = true; m_inforNexus = std::forward<InforNexusT>(value); }
    template<typename InforNexusT = InforNexusSourceProperties>
    SourceConnectorProperties& WithInforNexus(InforNexusT&& value) { SetInforNexus(std::forward<InforNexusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Marketo. </p>
     */
    inline const MarketoSourceProperties& GetMarketo() const { return m_marketo; }
    inline bool MarketoHasBeenSet() const { return m_marketoHasBeenSet; }
    template<typename MarketoT = MarketoSourceProperties>
    void SetMarketo(MarketoT&& value) { m_marketoHasBeenSet = true; m_marketo = std::forward<MarketoT>(value); }
    template<typename MarketoT = MarketoSourceProperties>
    SourceConnectorProperties& WithMarketo(MarketoT&& value) { SetMarketo(std::forward<MarketoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Amazon S3. </p>
     */
    inline const S3SourceProperties& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = S3SourceProperties>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = S3SourceProperties>
    SourceConnectorProperties& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Salesforce. </p>
     */
    inline const SalesforceSourceProperties& GetSalesforce() const { return m_salesforce; }
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }
    template<typename SalesforceT = SalesforceSourceProperties>
    void SetSalesforce(SalesforceT&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::forward<SalesforceT>(value); }
    template<typename SalesforceT = SalesforceSourceProperties>
    SourceConnectorProperties& WithSalesforce(SalesforceT&& value) { SetSalesforce(std::forward<SalesforceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying ServiceNow. </p>
     */
    inline const ServiceNowSourceProperties& GetServiceNow() const { return m_serviceNow; }
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }
    template<typename ServiceNowT = ServiceNowSourceProperties>
    void SetServiceNow(ServiceNowT&& value) { m_serviceNowHasBeenSet = true; m_serviceNow = std::forward<ServiceNowT>(value); }
    template<typename ServiceNowT = ServiceNowSourceProperties>
    SourceConnectorProperties& WithServiceNow(ServiceNowT&& value) { SetServiceNow(std::forward<ServiceNowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Singular. </p>
     */
    inline const SingularSourceProperties& GetSingular() const { return m_singular; }
    inline bool SingularHasBeenSet() const { return m_singularHasBeenSet; }
    template<typename SingularT = SingularSourceProperties>
    void SetSingular(SingularT&& value) { m_singularHasBeenSet = true; m_singular = std::forward<SingularT>(value); }
    template<typename SingularT = SingularSourceProperties>
    SourceConnectorProperties& WithSingular(SingularT&& value) { SetSingular(std::forward<SingularT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Slack. </p>
     */
    inline const SlackSourceProperties& GetSlack() const { return m_slack; }
    inline bool SlackHasBeenSet() const { return m_slackHasBeenSet; }
    template<typename SlackT = SlackSourceProperties>
    void SetSlack(SlackT&& value) { m_slackHasBeenSet = true; m_slack = std::forward<SlackT>(value); }
    template<typename SlackT = SlackSourceProperties>
    SourceConnectorProperties& WithSlack(SlackT&& value) { SetSlack(std::forward<SlackT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Trend Micro. </p>
     */
    inline const TrendmicroSourceProperties& GetTrendmicro() const { return m_trendmicro; }
    inline bool TrendmicroHasBeenSet() const { return m_trendmicroHasBeenSet; }
    template<typename TrendmicroT = TrendmicroSourceProperties>
    void SetTrendmicro(TrendmicroT&& value) { m_trendmicroHasBeenSet = true; m_trendmicro = std::forward<TrendmicroT>(value); }
    template<typename TrendmicroT = TrendmicroSourceProperties>
    SourceConnectorProperties& WithTrendmicro(TrendmicroT&& value) { SetTrendmicro(std::forward<TrendmicroT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Veeva. </p>
     */
    inline const VeevaSourceProperties& GetVeeva() const { return m_veeva; }
    inline bool VeevaHasBeenSet() const { return m_veevaHasBeenSet; }
    template<typename VeevaT = VeevaSourceProperties>
    void SetVeeva(VeevaT&& value) { m_veevaHasBeenSet = true; m_veeva = std::forward<VeevaT>(value); }
    template<typename VeevaT = VeevaSourceProperties>
    SourceConnectorProperties& WithVeeva(VeevaT&& value) { SetVeeva(std::forward<VeevaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Zendesk. </p>
     */
    inline const ZendeskSourceProperties& GetZendesk() const { return m_zendesk; }
    inline bool ZendeskHasBeenSet() const { return m_zendeskHasBeenSet; }
    template<typename ZendeskT = ZendeskSourceProperties>
    void SetZendesk(ZendeskT&& value) { m_zendeskHasBeenSet = true; m_zendesk = std::forward<ZendeskT>(value); }
    template<typename ZendeskT = ZendeskSourceProperties>
    SourceConnectorProperties& WithZendesk(ZendeskT&& value) { SetZendesk(std::forward<ZendeskT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SAPODataSourceProperties& GetSAPOData() const { return m_sAPOData; }
    inline bool SAPODataHasBeenSet() const { return m_sAPODataHasBeenSet; }
    template<typename SAPODataT = SAPODataSourceProperties>
    void SetSAPOData(SAPODataT&& value) { m_sAPODataHasBeenSet = true; m_sAPOData = std::forward<SAPODataT>(value); }
    template<typename SAPODataT = SAPODataSourceProperties>
    SourceConnectorProperties& WithSAPOData(SAPODataT&& value) { SetSAPOData(std::forward<SAPODataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CustomConnectorSourceProperties& GetCustomConnector() const { return m_customConnector; }
    inline bool CustomConnectorHasBeenSet() const { return m_customConnectorHasBeenSet; }
    template<typename CustomConnectorT = CustomConnectorSourceProperties>
    void SetCustomConnector(CustomConnectorT&& value) { m_customConnectorHasBeenSet = true; m_customConnector = std::forward<CustomConnectorT>(value); }
    template<typename CustomConnectorT = CustomConnectorSourceProperties>
    SourceConnectorProperties& WithCustomConnector(CustomConnectorT&& value) { SetCustomConnector(std::forward<CustomConnectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the information that is required for querying Salesforce
     * Pardot.</p>
     */
    inline const PardotSourceProperties& GetPardot() const { return m_pardot; }
    inline bool PardotHasBeenSet() const { return m_pardotHasBeenSet; }
    template<typename PardotT = PardotSourceProperties>
    void SetPardot(PardotT&& value) { m_pardotHasBeenSet = true; m_pardot = std::forward<PardotT>(value); }
    template<typename PardotT = PardotSourceProperties>
    SourceConnectorProperties& WithPardot(PardotT&& value) { SetPardot(std::forward<PardotT>(value)); return *this;}
    ///@}
  private:

    AmplitudeSourceProperties m_amplitude;
    bool m_amplitudeHasBeenSet = false;

    DatadogSourceProperties m_datadog;
    bool m_datadogHasBeenSet = false;

    DynatraceSourceProperties m_dynatrace;
    bool m_dynatraceHasBeenSet = false;

    GoogleAnalyticsSourceProperties m_googleAnalytics;
    bool m_googleAnalyticsHasBeenSet = false;

    InforNexusSourceProperties m_inforNexus;
    bool m_inforNexusHasBeenSet = false;

    MarketoSourceProperties m_marketo;
    bool m_marketoHasBeenSet = false;

    S3SourceProperties m_s3;
    bool m_s3HasBeenSet = false;

    SalesforceSourceProperties m_salesforce;
    bool m_salesforceHasBeenSet = false;

    ServiceNowSourceProperties m_serviceNow;
    bool m_serviceNowHasBeenSet = false;

    SingularSourceProperties m_singular;
    bool m_singularHasBeenSet = false;

    SlackSourceProperties m_slack;
    bool m_slackHasBeenSet = false;

    TrendmicroSourceProperties m_trendmicro;
    bool m_trendmicroHasBeenSet = false;

    VeevaSourceProperties m_veeva;
    bool m_veevaHasBeenSet = false;

    ZendeskSourceProperties m_zendesk;
    bool m_zendeskHasBeenSet = false;

    SAPODataSourceProperties m_sAPOData;
    bool m_sAPODataHasBeenSet = false;

    CustomConnectorSourceProperties m_customConnector;
    bool m_customConnectorHasBeenSet = false;

    PardotSourceProperties m_pardot;
    bool m_pardotHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
