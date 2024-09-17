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
    AWS_APPFLOW_API ConnectorMetadata();
    AWS_APPFLOW_API ConnectorMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The connector metadata specific to Amplitude. </p>
     */
    inline const AmplitudeMetadata& GetAmplitude() const{ return m_amplitude; }
    inline bool AmplitudeHasBeenSet() const { return m_amplitudeHasBeenSet; }
    inline void SetAmplitude(const AmplitudeMetadata& value) { m_amplitudeHasBeenSet = true; m_amplitude = value; }
    inline void SetAmplitude(AmplitudeMetadata&& value) { m_amplitudeHasBeenSet = true; m_amplitude = std::move(value); }
    inline ConnectorMetadata& WithAmplitude(const AmplitudeMetadata& value) { SetAmplitude(value); return *this;}
    inline ConnectorMetadata& WithAmplitude(AmplitudeMetadata&& value) { SetAmplitude(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Datadog. </p>
     */
    inline const DatadogMetadata& GetDatadog() const{ return m_datadog; }
    inline bool DatadogHasBeenSet() const { return m_datadogHasBeenSet; }
    inline void SetDatadog(const DatadogMetadata& value) { m_datadogHasBeenSet = true; m_datadog = value; }
    inline void SetDatadog(DatadogMetadata&& value) { m_datadogHasBeenSet = true; m_datadog = std::move(value); }
    inline ConnectorMetadata& WithDatadog(const DatadogMetadata& value) { SetDatadog(value); return *this;}
    inline ConnectorMetadata& WithDatadog(DatadogMetadata&& value) { SetDatadog(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Dynatrace. </p>
     */
    inline const DynatraceMetadata& GetDynatrace() const{ return m_dynatrace; }
    inline bool DynatraceHasBeenSet() const { return m_dynatraceHasBeenSet; }
    inline void SetDynatrace(const DynatraceMetadata& value) { m_dynatraceHasBeenSet = true; m_dynatrace = value; }
    inline void SetDynatrace(DynatraceMetadata&& value) { m_dynatraceHasBeenSet = true; m_dynatrace = std::move(value); }
    inline ConnectorMetadata& WithDynatrace(const DynatraceMetadata& value) { SetDynatrace(value); return *this;}
    inline ConnectorMetadata& WithDynatrace(DynatraceMetadata&& value) { SetDynatrace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Google Analytics. </p>
     */
    inline const GoogleAnalyticsMetadata& GetGoogleAnalytics() const{ return m_googleAnalytics; }
    inline bool GoogleAnalyticsHasBeenSet() const { return m_googleAnalyticsHasBeenSet; }
    inline void SetGoogleAnalytics(const GoogleAnalyticsMetadata& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = value; }
    inline void SetGoogleAnalytics(GoogleAnalyticsMetadata&& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = std::move(value); }
    inline ConnectorMetadata& WithGoogleAnalytics(const GoogleAnalyticsMetadata& value) { SetGoogleAnalytics(value); return *this;}
    inline ConnectorMetadata& WithGoogleAnalytics(GoogleAnalyticsMetadata&& value) { SetGoogleAnalytics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Infor Nexus. </p>
     */
    inline const InforNexusMetadata& GetInforNexus() const{ return m_inforNexus; }
    inline bool InforNexusHasBeenSet() const { return m_inforNexusHasBeenSet; }
    inline void SetInforNexus(const InforNexusMetadata& value) { m_inforNexusHasBeenSet = true; m_inforNexus = value; }
    inline void SetInforNexus(InforNexusMetadata&& value) { m_inforNexusHasBeenSet = true; m_inforNexus = std::move(value); }
    inline ConnectorMetadata& WithInforNexus(const InforNexusMetadata& value) { SetInforNexus(value); return *this;}
    inline ConnectorMetadata& WithInforNexus(InforNexusMetadata&& value) { SetInforNexus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Marketo. </p>
     */
    inline const MarketoMetadata& GetMarketo() const{ return m_marketo; }
    inline bool MarketoHasBeenSet() const { return m_marketoHasBeenSet; }
    inline void SetMarketo(const MarketoMetadata& value) { m_marketoHasBeenSet = true; m_marketo = value; }
    inline void SetMarketo(MarketoMetadata&& value) { m_marketoHasBeenSet = true; m_marketo = std::move(value); }
    inline ConnectorMetadata& WithMarketo(const MarketoMetadata& value) { SetMarketo(value); return *this;}
    inline ConnectorMetadata& WithMarketo(MarketoMetadata&& value) { SetMarketo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Amazon Redshift. </p>
     */
    inline const RedshiftMetadata& GetRedshift() const{ return m_redshift; }
    inline bool RedshiftHasBeenSet() const { return m_redshiftHasBeenSet; }
    inline void SetRedshift(const RedshiftMetadata& value) { m_redshiftHasBeenSet = true; m_redshift = value; }
    inline void SetRedshift(RedshiftMetadata&& value) { m_redshiftHasBeenSet = true; m_redshift = std::move(value); }
    inline ConnectorMetadata& WithRedshift(const RedshiftMetadata& value) { SetRedshift(value); return *this;}
    inline ConnectorMetadata& WithRedshift(RedshiftMetadata&& value) { SetRedshift(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Amazon S3. </p>
     */
    inline const S3Metadata& GetS3() const{ return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    inline void SetS3(const S3Metadata& value) { m_s3HasBeenSet = true; m_s3 = value; }
    inline void SetS3(S3Metadata&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }
    inline ConnectorMetadata& WithS3(const S3Metadata& value) { SetS3(value); return *this;}
    inline ConnectorMetadata& WithS3(S3Metadata&& value) { SetS3(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Salesforce. </p>
     */
    inline const SalesforceMetadata& GetSalesforce() const{ return m_salesforce; }
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }
    inline void SetSalesforce(const SalesforceMetadata& value) { m_salesforceHasBeenSet = true; m_salesforce = value; }
    inline void SetSalesforce(SalesforceMetadata&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::move(value); }
    inline ConnectorMetadata& WithSalesforce(const SalesforceMetadata& value) { SetSalesforce(value); return *this;}
    inline ConnectorMetadata& WithSalesforce(SalesforceMetadata&& value) { SetSalesforce(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to ServiceNow. </p>
     */
    inline const ServiceNowMetadata& GetServiceNow() const{ return m_serviceNow; }
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }
    inline void SetServiceNow(const ServiceNowMetadata& value) { m_serviceNowHasBeenSet = true; m_serviceNow = value; }
    inline void SetServiceNow(ServiceNowMetadata&& value) { m_serviceNowHasBeenSet = true; m_serviceNow = std::move(value); }
    inline ConnectorMetadata& WithServiceNow(const ServiceNowMetadata& value) { SetServiceNow(value); return *this;}
    inline ConnectorMetadata& WithServiceNow(ServiceNowMetadata&& value) { SetServiceNow(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Singular. </p>
     */
    inline const SingularMetadata& GetSingular() const{ return m_singular; }
    inline bool SingularHasBeenSet() const { return m_singularHasBeenSet; }
    inline void SetSingular(const SingularMetadata& value) { m_singularHasBeenSet = true; m_singular = value; }
    inline void SetSingular(SingularMetadata&& value) { m_singularHasBeenSet = true; m_singular = std::move(value); }
    inline ConnectorMetadata& WithSingular(const SingularMetadata& value) { SetSingular(value); return *this;}
    inline ConnectorMetadata& WithSingular(SingularMetadata&& value) { SetSingular(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Slack. </p>
     */
    inline const SlackMetadata& GetSlack() const{ return m_slack; }
    inline bool SlackHasBeenSet() const { return m_slackHasBeenSet; }
    inline void SetSlack(const SlackMetadata& value) { m_slackHasBeenSet = true; m_slack = value; }
    inline void SetSlack(SlackMetadata&& value) { m_slackHasBeenSet = true; m_slack = std::move(value); }
    inline ConnectorMetadata& WithSlack(const SlackMetadata& value) { SetSlack(value); return *this;}
    inline ConnectorMetadata& WithSlack(SlackMetadata&& value) { SetSlack(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Snowflake. </p>
     */
    inline const SnowflakeMetadata& GetSnowflake() const{ return m_snowflake; }
    inline bool SnowflakeHasBeenSet() const { return m_snowflakeHasBeenSet; }
    inline void SetSnowflake(const SnowflakeMetadata& value) { m_snowflakeHasBeenSet = true; m_snowflake = value; }
    inline void SetSnowflake(SnowflakeMetadata&& value) { m_snowflakeHasBeenSet = true; m_snowflake = std::move(value); }
    inline ConnectorMetadata& WithSnowflake(const SnowflakeMetadata& value) { SetSnowflake(value); return *this;}
    inline ConnectorMetadata& WithSnowflake(SnowflakeMetadata&& value) { SetSnowflake(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Trend Micro. </p>
     */
    inline const TrendmicroMetadata& GetTrendmicro() const{ return m_trendmicro; }
    inline bool TrendmicroHasBeenSet() const { return m_trendmicroHasBeenSet; }
    inline void SetTrendmicro(const TrendmicroMetadata& value) { m_trendmicroHasBeenSet = true; m_trendmicro = value; }
    inline void SetTrendmicro(TrendmicroMetadata&& value) { m_trendmicroHasBeenSet = true; m_trendmicro = std::move(value); }
    inline ConnectorMetadata& WithTrendmicro(const TrendmicroMetadata& value) { SetTrendmicro(value); return *this;}
    inline ConnectorMetadata& WithTrendmicro(TrendmicroMetadata&& value) { SetTrendmicro(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Veeva. </p>
     */
    inline const VeevaMetadata& GetVeeva() const{ return m_veeva; }
    inline bool VeevaHasBeenSet() const { return m_veevaHasBeenSet; }
    inline void SetVeeva(const VeevaMetadata& value) { m_veevaHasBeenSet = true; m_veeva = value; }
    inline void SetVeeva(VeevaMetadata&& value) { m_veevaHasBeenSet = true; m_veeva = std::move(value); }
    inline ConnectorMetadata& WithVeeva(const VeevaMetadata& value) { SetVeeva(value); return *this;}
    inline ConnectorMetadata& WithVeeva(VeevaMetadata&& value) { SetVeeva(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Zendesk. </p>
     */
    inline const ZendeskMetadata& GetZendesk() const{ return m_zendesk; }
    inline bool ZendeskHasBeenSet() const { return m_zendeskHasBeenSet; }
    inline void SetZendesk(const ZendeskMetadata& value) { m_zendeskHasBeenSet = true; m_zendesk = value; }
    inline void SetZendesk(ZendeskMetadata&& value) { m_zendeskHasBeenSet = true; m_zendesk = std::move(value); }
    inline ConnectorMetadata& WithZendesk(const ZendeskMetadata& value) { SetZendesk(value); return *this;}
    inline ConnectorMetadata& WithZendesk(ZendeskMetadata&& value) { SetZendesk(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Amazon EventBridge. </p>
     */
    inline const EventBridgeMetadata& GetEventBridge() const{ return m_eventBridge; }
    inline bool EventBridgeHasBeenSet() const { return m_eventBridgeHasBeenSet; }
    inline void SetEventBridge(const EventBridgeMetadata& value) { m_eventBridgeHasBeenSet = true; m_eventBridge = value; }
    inline void SetEventBridge(EventBridgeMetadata&& value) { m_eventBridgeHasBeenSet = true; m_eventBridge = std::move(value); }
    inline ConnectorMetadata& WithEventBridge(const EventBridgeMetadata& value) { SetEventBridge(value); return *this;}
    inline ConnectorMetadata& WithEventBridge(EventBridgeMetadata&& value) { SetEventBridge(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Upsolver. </p>
     */
    inline const UpsolverMetadata& GetUpsolver() const{ return m_upsolver; }
    inline bool UpsolverHasBeenSet() const { return m_upsolverHasBeenSet; }
    inline void SetUpsolver(const UpsolverMetadata& value) { m_upsolverHasBeenSet = true; m_upsolver = value; }
    inline void SetUpsolver(UpsolverMetadata&& value) { m_upsolverHasBeenSet = true; m_upsolver = std::move(value); }
    inline ConnectorMetadata& WithUpsolver(const UpsolverMetadata& value) { SetUpsolver(value); return *this;}
    inline ConnectorMetadata& WithUpsolver(UpsolverMetadata&& value) { SetUpsolver(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Amazon Connect Customer Profiles. </p>
     */
    inline const CustomerProfilesMetadata& GetCustomerProfiles() const{ return m_customerProfiles; }
    inline bool CustomerProfilesHasBeenSet() const { return m_customerProfilesHasBeenSet; }
    inline void SetCustomerProfiles(const CustomerProfilesMetadata& value) { m_customerProfilesHasBeenSet = true; m_customerProfiles = value; }
    inline void SetCustomerProfiles(CustomerProfilesMetadata&& value) { m_customerProfilesHasBeenSet = true; m_customerProfiles = std::move(value); }
    inline ConnectorMetadata& WithCustomerProfiles(const CustomerProfilesMetadata& value) { SetCustomerProfiles(value); return *this;}
    inline ConnectorMetadata& WithCustomerProfiles(CustomerProfilesMetadata&& value) { SetCustomerProfiles(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector metadata specific to Amazon Honeycode. </p>
     */
    inline const HoneycodeMetadata& GetHoneycode() const{ return m_honeycode; }
    inline bool HoneycodeHasBeenSet() const { return m_honeycodeHasBeenSet; }
    inline void SetHoneycode(const HoneycodeMetadata& value) { m_honeycodeHasBeenSet = true; m_honeycode = value; }
    inline void SetHoneycode(HoneycodeMetadata&& value) { m_honeycodeHasBeenSet = true; m_honeycode = std::move(value); }
    inline ConnectorMetadata& WithHoneycode(const HoneycodeMetadata& value) { SetHoneycode(value); return *this;}
    inline ConnectorMetadata& WithHoneycode(HoneycodeMetadata&& value) { SetHoneycode(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SAPODataMetadata& GetSAPOData() const{ return m_sAPOData; }
    inline bool SAPODataHasBeenSet() const { return m_sAPODataHasBeenSet; }
    inline void SetSAPOData(const SAPODataMetadata& value) { m_sAPODataHasBeenSet = true; m_sAPOData = value; }
    inline void SetSAPOData(SAPODataMetadata&& value) { m_sAPODataHasBeenSet = true; m_sAPOData = std::move(value); }
    inline ConnectorMetadata& WithSAPOData(const SAPODataMetadata& value) { SetSAPOData(value); return *this;}
    inline ConnectorMetadata& WithSAPOData(SAPODataMetadata&& value) { SetSAPOData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector metadata specific to Salesforce Pardot.</p>
     */
    inline const PardotMetadata& GetPardot() const{ return m_pardot; }
    inline bool PardotHasBeenSet() const { return m_pardotHasBeenSet; }
    inline void SetPardot(const PardotMetadata& value) { m_pardotHasBeenSet = true; m_pardot = value; }
    inline void SetPardot(PardotMetadata&& value) { m_pardotHasBeenSet = true; m_pardot = std::move(value); }
    inline ConnectorMetadata& WithPardot(const PardotMetadata& value) { SetPardot(value); return *this;}
    inline ConnectorMetadata& WithPardot(PardotMetadata&& value) { SetPardot(std::move(value)); return *this;}
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
