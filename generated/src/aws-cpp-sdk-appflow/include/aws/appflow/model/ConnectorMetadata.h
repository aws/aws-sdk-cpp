/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/AmplitudeMetadata.h>
#include <aws/appflow/model/DatadogMetadata.h>
#include <aws/appflow/model/DynatraceMetadata.h>
#include <aws/appflow/model/GoogleAnalyticsMetadata.h>
#include <aws/appflow/model/InforNexusMetadata.h>
#include <aws/appflow/model/MarketoMetadata.h>
#include <aws/appflow/model/RedshiftMetadata.h>
#include <aws/appflow/model/S3Metadata.h>
#include <aws/appflow/model/SalesforceMetadata.h>
#include <aws/appflow/model/ServiceNowMetadata.h>
#include <aws/appflow/model/SingularMetadata.h>
#include <aws/appflow/model/SlackMetadata.h>
#include <aws/appflow/model/SnowflakeMetadata.h>
#include <aws/appflow/model/TrendmicroMetadata.h>
#include <aws/appflow/model/VeevaMetadata.h>
#include <aws/appflow/model/ZendeskMetadata.h>
#include <aws/appflow/model/EventBridgeMetadata.h>
#include <aws/appflow/model/UpsolverMetadata.h>
#include <aws/appflow/model/CustomerProfilesMetadata.h>
#include <aws/appflow/model/HoneycodeMetadata.h>
#include <aws/appflow/model/SAPODataMetadata.h>
#include <aws/appflow/model/PardotMetadata.h>
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
   * <p> A structure to specify connector-specific metadata such as
   * <code>oAuthScopes</code>, <code>supportedRegions</code>,
   * <code>privateLinkServiceUrl</code>, and so on. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ConnectorMetadata">AWS
   * API Reference</a></p>
   */
  class ConnectorMetadata
  {
  public:
    AWS_APPFLOW_API ConnectorMetadata() = default;
    AWS_APPFLOW_API ConnectorMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The connector metadata specific to Amplitude. </p>
     */
    inline const AmplitudeMetadata& GetAmplitude() const { return m_amplitude; }
    inline bool AmplitudeHasBeenSet() const { return m_amplitudeHasBeenSet; }
    template<typename AmplitudeT = AmplitudeMetadata>
    void SetAmplitude(AmplitudeT&& value) { m_amplitudeHasBeenSet = true; m_amplitude = std::forward<AmplitudeT>(value); }
    template<typename AmplitudeT = AmplitudeMetadata>
    ConnectorMetadata& WithAmplitude(AmplitudeT&& value) { SetAmplitude(std::forward<AmplitudeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Datadog. </p>
     */
    inline const DatadogMetadata& GetDatadog() const { return m_datadog; }
    inline bool DatadogHasBeenSet() const { return m_datadogHasBeenSet; }
    template<typename DatadogT = DatadogMetadata>
    void SetDatadog(DatadogT&& value) { m_datadogHasBeenSet = true; m_datadog = std::forward<DatadogT>(value); }
    template<typename DatadogT = DatadogMetadata>
    ConnectorMetadata& WithDatadog(DatadogT&& value) { SetDatadog(std::forward<DatadogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Dynatrace. </p>
     */
    inline const DynatraceMetadata& GetDynatrace() const { return m_dynatrace; }
    inline bool DynatraceHasBeenSet() const { return m_dynatraceHasBeenSet; }
    template<typename DynatraceT = DynatraceMetadata>
    void SetDynatrace(DynatraceT&& value) { m_dynatraceHasBeenSet = true; m_dynatrace = std::forward<DynatraceT>(value); }
    template<typename DynatraceT = DynatraceMetadata>
    ConnectorMetadata& WithDynatrace(DynatraceT&& value) { SetDynatrace(std::forward<DynatraceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Google Analytics. </p>
     */
    inline const GoogleAnalyticsMetadata& GetGoogleAnalytics() const { return m_googleAnalytics; }
    inline bool GoogleAnalyticsHasBeenSet() const { return m_googleAnalyticsHasBeenSet; }
    template<typename GoogleAnalyticsT = GoogleAnalyticsMetadata>
    void SetGoogleAnalytics(GoogleAnalyticsT&& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = std::forward<GoogleAnalyticsT>(value); }
    template<typename GoogleAnalyticsT = GoogleAnalyticsMetadata>
    ConnectorMetadata& WithGoogleAnalytics(GoogleAnalyticsT&& value) { SetGoogleAnalytics(std::forward<GoogleAnalyticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Infor Nexus. </p>
     */
    inline const InforNexusMetadata& GetInforNexus() const { return m_inforNexus; }
    inline bool InforNexusHasBeenSet() const { return m_inforNexusHasBeenSet; }
    template<typename InforNexusT = InforNexusMetadata>
    void SetInforNexus(InforNexusT&& value) { m_inforNexusHasBeenSet = true; m_inforNexus = std::forward<InforNexusT>(value); }
    template<typename InforNexusT = InforNexusMetadata>
    ConnectorMetadata& WithInforNexus(InforNexusT&& value) { SetInforNexus(std::forward<InforNexusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Marketo. </p>
     */
    inline const MarketoMetadata& GetMarketo() const { return m_marketo; }
    inline bool MarketoHasBeenSet() const { return m_marketoHasBeenSet; }
    template<typename MarketoT = MarketoMetadata>
    void SetMarketo(MarketoT&& value) { m_marketoHasBeenSet = true; m_marketo = std::forward<MarketoT>(value); }
    template<typename MarketoT = MarketoMetadata>
    ConnectorMetadata& WithMarketo(MarketoT&& value) { SetMarketo(std::forward<MarketoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Amazon Redshift. </p>
     */
    inline const RedshiftMetadata& GetRedshift() const { return m_redshift; }
    inline bool RedshiftHasBeenSet() const { return m_redshiftHasBeenSet; }
    template<typename RedshiftT = RedshiftMetadata>
    void SetRedshift(RedshiftT&& value) { m_redshiftHasBeenSet = true; m_redshift = std::forward<RedshiftT>(value); }
    template<typename RedshiftT = RedshiftMetadata>
    ConnectorMetadata& WithRedshift(RedshiftT&& value) { SetRedshift(std::forward<RedshiftT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Amazon S3. </p>
     */
    inline const S3Metadata& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = S3Metadata>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = S3Metadata>
    ConnectorMetadata& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Salesforce. </p>
     */
    inline const SalesforceMetadata& GetSalesforce() const { return m_salesforce; }
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }
    template<typename SalesforceT = SalesforceMetadata>
    void SetSalesforce(SalesforceT&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::forward<SalesforceT>(value); }
    template<typename SalesforceT = SalesforceMetadata>
    ConnectorMetadata& WithSalesforce(SalesforceT&& value) { SetSalesforce(std::forward<SalesforceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to ServiceNow. </p>
     */
    inline const ServiceNowMetadata& GetServiceNow() const { return m_serviceNow; }
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }
    template<typename ServiceNowT = ServiceNowMetadata>
    void SetServiceNow(ServiceNowT&& value) { m_serviceNowHasBeenSet = true; m_serviceNow = std::forward<ServiceNowT>(value); }
    template<typename ServiceNowT = ServiceNowMetadata>
    ConnectorMetadata& WithServiceNow(ServiceNowT&& value) { SetServiceNow(std::forward<ServiceNowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Singular. </p>
     */
    inline const SingularMetadata& GetSingular() const { return m_singular; }
    inline bool SingularHasBeenSet() const { return m_singularHasBeenSet; }
    template<typename SingularT = SingularMetadata>
    void SetSingular(SingularT&& value) { m_singularHasBeenSet = true; m_singular = std::forward<SingularT>(value); }
    template<typename SingularT = SingularMetadata>
    ConnectorMetadata& WithSingular(SingularT&& value) { SetSingular(std::forward<SingularT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Slack. </p>
     */
    inline const SlackMetadata& GetSlack() const { return m_slack; }
    inline bool SlackHasBeenSet() const { return m_slackHasBeenSet; }
    template<typename SlackT = SlackMetadata>
    void SetSlack(SlackT&& value) { m_slackHasBeenSet = true; m_slack = std::forward<SlackT>(value); }
    template<typename SlackT = SlackMetadata>
    ConnectorMetadata& WithSlack(SlackT&& value) { SetSlack(std::forward<SlackT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Snowflake. </p>
     */
    inline const SnowflakeMetadata& GetSnowflake() const { return m_snowflake; }
    inline bool SnowflakeHasBeenSet() const { return m_snowflakeHasBeenSet; }
    template<typename SnowflakeT = SnowflakeMetadata>
    void SetSnowflake(SnowflakeT&& value) { m_snowflakeHasBeenSet = true; m_snowflake = std::forward<SnowflakeT>(value); }
    template<typename SnowflakeT = SnowflakeMetadata>
    ConnectorMetadata& WithSnowflake(SnowflakeT&& value) { SetSnowflake(std::forward<SnowflakeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Trend Micro. </p>
     */
    inline const TrendmicroMetadata& GetTrendmicro() const { return m_trendmicro; }
    inline bool TrendmicroHasBeenSet() const { return m_trendmicroHasBeenSet; }
    template<typename TrendmicroT = TrendmicroMetadata>
    void SetTrendmicro(TrendmicroT&& value) { m_trendmicroHasBeenSet = true; m_trendmicro = std::forward<TrendmicroT>(value); }
    template<typename TrendmicroT = TrendmicroMetadata>
    ConnectorMetadata& WithTrendmicro(TrendmicroT&& value) { SetTrendmicro(std::forward<TrendmicroT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Veeva. </p>
     */
    inline const VeevaMetadata& GetVeeva() const { return m_veeva; }
    inline bool VeevaHasBeenSet() const { return m_veevaHasBeenSet; }
    template<typename VeevaT = VeevaMetadata>
    void SetVeeva(VeevaT&& value) { m_veevaHasBeenSet = true; m_veeva = std::forward<VeevaT>(value); }
    template<typename VeevaT = VeevaMetadata>
    ConnectorMetadata& WithVeeva(VeevaT&& value) { SetVeeva(std::forward<VeevaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Zendesk. </p>
     */
    inline const ZendeskMetadata& GetZendesk() const { return m_zendesk; }
    inline bool ZendeskHasBeenSet() const { return m_zendeskHasBeenSet; }
    template<typename ZendeskT = ZendeskMetadata>
    void SetZendesk(ZendeskT&& value) { m_zendeskHasBeenSet = true; m_zendesk = std::forward<ZendeskT>(value); }
    template<typename ZendeskT = ZendeskMetadata>
    ConnectorMetadata& WithZendesk(ZendeskT&& value) { SetZendesk(std::forward<ZendeskT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Amazon EventBridge. </p>
     */
    inline const EventBridgeMetadata& GetEventBridge() const { return m_eventBridge; }
    inline bool EventBridgeHasBeenSet() const { return m_eventBridgeHasBeenSet; }
    template<typename EventBridgeT = EventBridgeMetadata>
    void SetEventBridge(EventBridgeT&& value) { m_eventBridgeHasBeenSet = true; m_eventBridge = std::forward<EventBridgeT>(value); }
    template<typename EventBridgeT = EventBridgeMetadata>
    ConnectorMetadata& WithEventBridge(EventBridgeT&& value) { SetEventBridge(std::forward<EventBridgeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Upsolver. </p>
     */
    inline const UpsolverMetadata& GetUpsolver() const { return m_upsolver; }
    inline bool UpsolverHasBeenSet() const { return m_upsolverHasBeenSet; }
    template<typename UpsolverT = UpsolverMetadata>
    void SetUpsolver(UpsolverT&& value) { m_upsolverHasBeenSet = true; m_upsolver = std::forward<UpsolverT>(value); }
    template<typename UpsolverT = UpsolverMetadata>
    ConnectorMetadata& WithUpsolver(UpsolverT&& value) { SetUpsolver(std::forward<UpsolverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Amazon Connect Customer Profiles. </p>
     */
    inline const CustomerProfilesMetadata& GetCustomerProfiles() const { return m_customerProfiles; }
    inline bool CustomerProfilesHasBeenSet() const { return m_customerProfilesHasBeenSet; }
    template<typename CustomerProfilesT = CustomerProfilesMetadata>
    void SetCustomerProfiles(CustomerProfilesT&& value) { m_customerProfilesHasBeenSet = true; m_customerProfiles = std::forward<CustomerProfilesT>(value); }
    template<typename CustomerProfilesT = CustomerProfilesMetadata>
    ConnectorMetadata& WithCustomerProfiles(CustomerProfilesT&& value) { SetCustomerProfiles(std::forward<CustomerProfilesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Amazon Honeycode. </p>
     */
    inline const HoneycodeMetadata& GetHoneycode() const { return m_honeycode; }
    inline bool HoneycodeHasBeenSet() const { return m_honeycodeHasBeenSet; }
    template<typename HoneycodeT = HoneycodeMetadata>
    void SetHoneycode(HoneycodeT&& value) { m_honeycodeHasBeenSet = true; m_honeycode = std::forward<HoneycodeT>(value); }
    template<typename HoneycodeT = HoneycodeMetadata>
    ConnectorMetadata& WithHoneycode(HoneycodeT&& value) { SetHoneycode(std::forward<HoneycodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SAPODataMetadata& GetSAPOData() const { return m_sAPOData; }
    inline bool SAPODataHasBeenSet() const { return m_sAPODataHasBeenSet; }
    template<typename SAPODataT = SAPODataMetadata>
    void SetSAPOData(SAPODataT&& value) { m_sAPODataHasBeenSet = true; m_sAPOData = std::forward<SAPODataT>(value); }
    template<typename SAPODataT = SAPODataMetadata>
    ConnectorMetadata& WithSAPOData(SAPODataT&& value) { SetSAPOData(std::forward<SAPODataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector metadata specific to Salesforce Pardot.</p>
     */
    inline const PardotMetadata& GetPardot() const { return m_pardot; }
    inline bool PardotHasBeenSet() const { return m_pardotHasBeenSet; }
    template<typename PardotT = PardotMetadata>
    void SetPardot(PardotT&& value) { m_pardotHasBeenSet = true; m_pardot = std::forward<PardotT>(value); }
    template<typename PardotT = PardotMetadata>
    ConnectorMetadata& WithPardot(PardotT&& value) { SetPardot(std::forward<PardotT>(value)); return *this;}
    ///@}
  private:

    AmplitudeMetadata m_amplitude;
    bool m_amplitudeHasBeenSet = false;

    DatadogMetadata m_datadog;
    bool m_datadogHasBeenSet = false;

    DynatraceMetadata m_dynatrace;
    bool m_dynatraceHasBeenSet = false;

    GoogleAnalyticsMetadata m_googleAnalytics;
    bool m_googleAnalyticsHasBeenSet = false;

    InforNexusMetadata m_inforNexus;
    bool m_inforNexusHasBeenSet = false;

    MarketoMetadata m_marketo;
    bool m_marketoHasBeenSet = false;

    RedshiftMetadata m_redshift;
    bool m_redshiftHasBeenSet = false;

    S3Metadata m_s3;
    bool m_s3HasBeenSet = false;

    SalesforceMetadata m_salesforce;
    bool m_salesforceHasBeenSet = false;

    ServiceNowMetadata m_serviceNow;
    bool m_serviceNowHasBeenSet = false;

    SingularMetadata m_singular;
    bool m_singularHasBeenSet = false;

    SlackMetadata m_slack;
    bool m_slackHasBeenSet = false;

    SnowflakeMetadata m_snowflake;
    bool m_snowflakeHasBeenSet = false;

    TrendmicroMetadata m_trendmicro;
    bool m_trendmicroHasBeenSet = false;

    VeevaMetadata m_veeva;
    bool m_veevaHasBeenSet = false;

    ZendeskMetadata m_zendesk;
    bool m_zendeskHasBeenSet = false;

    EventBridgeMetadata m_eventBridge;
    bool m_eventBridgeHasBeenSet = false;

    UpsolverMetadata m_upsolver;
    bool m_upsolverHasBeenSet = false;

    CustomerProfilesMetadata m_customerProfiles;
    bool m_customerProfilesHasBeenSet = false;

    HoneycodeMetadata m_honeycode;
    bool m_honeycodeHasBeenSet = false;

    SAPODataMetadata m_sAPOData;
    bool m_sAPODataHasBeenSet = false;

    PardotMetadata m_pardot;
    bool m_pardotHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
