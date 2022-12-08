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
    AWS_APPFLOW_API SourceConnectorProperties();
    AWS_APPFLOW_API SourceConnectorProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SourceConnectorProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the information that is required for querying Amplitude. </p>
     */
    inline const AmplitudeSourceProperties& GetAmplitude() const{ return m_amplitude; }

    /**
     * <p> Specifies the information that is required for querying Amplitude. </p>
     */
    inline bool AmplitudeHasBeenSet() const { return m_amplitudeHasBeenSet; }

    /**
     * <p> Specifies the information that is required for querying Amplitude. </p>
     */
    inline void SetAmplitude(const AmplitudeSourceProperties& value) { m_amplitudeHasBeenSet = true; m_amplitude = value; }

    /**
     * <p> Specifies the information that is required for querying Amplitude. </p>
     */
    inline void SetAmplitude(AmplitudeSourceProperties&& value) { m_amplitudeHasBeenSet = true; m_amplitude = std::move(value); }

    /**
     * <p> Specifies the information that is required for querying Amplitude. </p>
     */
    inline SourceConnectorProperties& WithAmplitude(const AmplitudeSourceProperties& value) { SetAmplitude(value); return *this;}

    /**
     * <p> Specifies the information that is required for querying Amplitude. </p>
     */
    inline SourceConnectorProperties& WithAmplitude(AmplitudeSourceProperties&& value) { SetAmplitude(std::move(value)); return *this;}


    /**
     * <p> Specifies the information that is required for querying Datadog. </p>
     */
    inline const DatadogSourceProperties& GetDatadog() const{ return m_datadog; }

    /**
     * <p> Specifies the information that is required for querying Datadog. </p>
     */
    inline bool DatadogHasBeenSet() const { return m_datadogHasBeenSet; }

    /**
     * <p> Specifies the information that is required for querying Datadog. </p>
     */
    inline void SetDatadog(const DatadogSourceProperties& value) { m_datadogHasBeenSet = true; m_datadog = value; }

    /**
     * <p> Specifies the information that is required for querying Datadog. </p>
     */
    inline void SetDatadog(DatadogSourceProperties&& value) { m_datadogHasBeenSet = true; m_datadog = std::move(value); }

    /**
     * <p> Specifies the information that is required for querying Datadog. </p>
     */
    inline SourceConnectorProperties& WithDatadog(const DatadogSourceProperties& value) { SetDatadog(value); return *this;}

    /**
     * <p> Specifies the information that is required for querying Datadog. </p>
     */
    inline SourceConnectorProperties& WithDatadog(DatadogSourceProperties&& value) { SetDatadog(std::move(value)); return *this;}


    /**
     * <p> Specifies the information that is required for querying Dynatrace. </p>
     */
    inline const DynatraceSourceProperties& GetDynatrace() const{ return m_dynatrace; }

    /**
     * <p> Specifies the information that is required for querying Dynatrace. </p>
     */
    inline bool DynatraceHasBeenSet() const { return m_dynatraceHasBeenSet; }

    /**
     * <p> Specifies the information that is required for querying Dynatrace. </p>
     */
    inline void SetDynatrace(const DynatraceSourceProperties& value) { m_dynatraceHasBeenSet = true; m_dynatrace = value; }

    /**
     * <p> Specifies the information that is required for querying Dynatrace. </p>
     */
    inline void SetDynatrace(DynatraceSourceProperties&& value) { m_dynatraceHasBeenSet = true; m_dynatrace = std::move(value); }

    /**
     * <p> Specifies the information that is required for querying Dynatrace. </p>
     */
    inline SourceConnectorProperties& WithDynatrace(const DynatraceSourceProperties& value) { SetDynatrace(value); return *this;}

    /**
     * <p> Specifies the information that is required for querying Dynatrace. </p>
     */
    inline SourceConnectorProperties& WithDynatrace(DynatraceSourceProperties&& value) { SetDynatrace(std::move(value)); return *this;}


    /**
     * <p> Specifies the information that is required for querying Google Analytics.
     * </p>
     */
    inline const GoogleAnalyticsSourceProperties& GetGoogleAnalytics() const{ return m_googleAnalytics; }

    /**
     * <p> Specifies the information that is required for querying Google Analytics.
     * </p>
     */
    inline bool GoogleAnalyticsHasBeenSet() const { return m_googleAnalyticsHasBeenSet; }

    /**
     * <p> Specifies the information that is required for querying Google Analytics.
     * </p>
     */
    inline void SetGoogleAnalytics(const GoogleAnalyticsSourceProperties& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = value; }

    /**
     * <p> Specifies the information that is required for querying Google Analytics.
     * </p>
     */
    inline void SetGoogleAnalytics(GoogleAnalyticsSourceProperties&& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = std::move(value); }

    /**
     * <p> Specifies the information that is required for querying Google Analytics.
     * </p>
     */
    inline SourceConnectorProperties& WithGoogleAnalytics(const GoogleAnalyticsSourceProperties& value) { SetGoogleAnalytics(value); return *this;}

    /**
     * <p> Specifies the information that is required for querying Google Analytics.
     * </p>
     */
    inline SourceConnectorProperties& WithGoogleAnalytics(GoogleAnalyticsSourceProperties&& value) { SetGoogleAnalytics(std::move(value)); return *this;}


    /**
     * <p> Specifies the information that is required for querying Infor Nexus. </p>
     */
    inline const InforNexusSourceProperties& GetInforNexus() const{ return m_inforNexus; }

    /**
     * <p> Specifies the information that is required for querying Infor Nexus. </p>
     */
    inline bool InforNexusHasBeenSet() const { return m_inforNexusHasBeenSet; }

    /**
     * <p> Specifies the information that is required for querying Infor Nexus. </p>
     */
    inline void SetInforNexus(const InforNexusSourceProperties& value) { m_inforNexusHasBeenSet = true; m_inforNexus = value; }

    /**
     * <p> Specifies the information that is required for querying Infor Nexus. </p>
     */
    inline void SetInforNexus(InforNexusSourceProperties&& value) { m_inforNexusHasBeenSet = true; m_inforNexus = std::move(value); }

    /**
     * <p> Specifies the information that is required for querying Infor Nexus. </p>
     */
    inline SourceConnectorProperties& WithInforNexus(const InforNexusSourceProperties& value) { SetInforNexus(value); return *this;}

    /**
     * <p> Specifies the information that is required for querying Infor Nexus. </p>
     */
    inline SourceConnectorProperties& WithInforNexus(InforNexusSourceProperties&& value) { SetInforNexus(std::move(value)); return *this;}


    /**
     * <p> Specifies the information that is required for querying Marketo. </p>
     */
    inline const MarketoSourceProperties& GetMarketo() const{ return m_marketo; }

    /**
     * <p> Specifies the information that is required for querying Marketo. </p>
     */
    inline bool MarketoHasBeenSet() const { return m_marketoHasBeenSet; }

    /**
     * <p> Specifies the information that is required for querying Marketo. </p>
     */
    inline void SetMarketo(const MarketoSourceProperties& value) { m_marketoHasBeenSet = true; m_marketo = value; }

    /**
     * <p> Specifies the information that is required for querying Marketo. </p>
     */
    inline void SetMarketo(MarketoSourceProperties&& value) { m_marketoHasBeenSet = true; m_marketo = std::move(value); }

    /**
     * <p> Specifies the information that is required for querying Marketo. </p>
     */
    inline SourceConnectorProperties& WithMarketo(const MarketoSourceProperties& value) { SetMarketo(value); return *this;}

    /**
     * <p> Specifies the information that is required for querying Marketo. </p>
     */
    inline SourceConnectorProperties& WithMarketo(MarketoSourceProperties&& value) { SetMarketo(std::move(value)); return *this;}


    /**
     * <p> Specifies the information that is required for querying Amazon S3. </p>
     */
    inline const S3SourceProperties& GetS3() const{ return m_s3; }

    /**
     * <p> Specifies the information that is required for querying Amazon S3. </p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p> Specifies the information that is required for querying Amazon S3. </p>
     */
    inline void SetS3(const S3SourceProperties& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p> Specifies the information that is required for querying Amazon S3. </p>
     */
    inline void SetS3(S3SourceProperties&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p> Specifies the information that is required for querying Amazon S3. </p>
     */
    inline SourceConnectorProperties& WithS3(const S3SourceProperties& value) { SetS3(value); return *this;}

    /**
     * <p> Specifies the information that is required for querying Amazon S3. </p>
     */
    inline SourceConnectorProperties& WithS3(S3SourceProperties&& value) { SetS3(std::move(value)); return *this;}


    /**
     * <p> Specifies the information that is required for querying Salesforce. </p>
     */
    inline const SalesforceSourceProperties& GetSalesforce() const{ return m_salesforce; }

    /**
     * <p> Specifies the information that is required for querying Salesforce. </p>
     */
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }

    /**
     * <p> Specifies the information that is required for querying Salesforce. </p>
     */
    inline void SetSalesforce(const SalesforceSourceProperties& value) { m_salesforceHasBeenSet = true; m_salesforce = value; }

    /**
     * <p> Specifies the information that is required for querying Salesforce. </p>
     */
    inline void SetSalesforce(SalesforceSourceProperties&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::move(value); }

    /**
     * <p> Specifies the information that is required for querying Salesforce. </p>
     */
    inline SourceConnectorProperties& WithSalesforce(const SalesforceSourceProperties& value) { SetSalesforce(value); return *this;}

    /**
     * <p> Specifies the information that is required for querying Salesforce. </p>
     */
    inline SourceConnectorProperties& WithSalesforce(SalesforceSourceProperties&& value) { SetSalesforce(std::move(value)); return *this;}


    /**
     * <p> Specifies the information that is required for querying ServiceNow. </p>
     */
    inline const ServiceNowSourceProperties& GetServiceNow() const{ return m_serviceNow; }

    /**
     * <p> Specifies the information that is required for querying ServiceNow. </p>
     */
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }

    /**
     * <p> Specifies the information that is required for querying ServiceNow. </p>
     */
    inline void SetServiceNow(const ServiceNowSourceProperties& value) { m_serviceNowHasBeenSet = true; m_serviceNow = value; }

    /**
     * <p> Specifies the information that is required for querying ServiceNow. </p>
     */
    inline void SetServiceNow(ServiceNowSourceProperties&& value) { m_serviceNowHasBeenSet = true; m_serviceNow = std::move(value); }

    /**
     * <p> Specifies the information that is required for querying ServiceNow. </p>
     */
    inline SourceConnectorProperties& WithServiceNow(const ServiceNowSourceProperties& value) { SetServiceNow(value); return *this;}

    /**
     * <p> Specifies the information that is required for querying ServiceNow. </p>
     */
    inline SourceConnectorProperties& WithServiceNow(ServiceNowSourceProperties&& value) { SetServiceNow(std::move(value)); return *this;}


    /**
     * <p> Specifies the information that is required for querying Singular. </p>
     */
    inline const SingularSourceProperties& GetSingular() const{ return m_singular; }

    /**
     * <p> Specifies the information that is required for querying Singular. </p>
     */
    inline bool SingularHasBeenSet() const { return m_singularHasBeenSet; }

    /**
     * <p> Specifies the information that is required for querying Singular. </p>
     */
    inline void SetSingular(const SingularSourceProperties& value) { m_singularHasBeenSet = true; m_singular = value; }

    /**
     * <p> Specifies the information that is required for querying Singular. </p>
     */
    inline void SetSingular(SingularSourceProperties&& value) { m_singularHasBeenSet = true; m_singular = std::move(value); }

    /**
     * <p> Specifies the information that is required for querying Singular. </p>
     */
    inline SourceConnectorProperties& WithSingular(const SingularSourceProperties& value) { SetSingular(value); return *this;}

    /**
     * <p> Specifies the information that is required for querying Singular. </p>
     */
    inline SourceConnectorProperties& WithSingular(SingularSourceProperties&& value) { SetSingular(std::move(value)); return *this;}


    /**
     * <p> Specifies the information that is required for querying Slack. </p>
     */
    inline const SlackSourceProperties& GetSlack() const{ return m_slack; }

    /**
     * <p> Specifies the information that is required for querying Slack. </p>
     */
    inline bool SlackHasBeenSet() const { return m_slackHasBeenSet; }

    /**
     * <p> Specifies the information that is required for querying Slack. </p>
     */
    inline void SetSlack(const SlackSourceProperties& value) { m_slackHasBeenSet = true; m_slack = value; }

    /**
     * <p> Specifies the information that is required for querying Slack. </p>
     */
    inline void SetSlack(SlackSourceProperties&& value) { m_slackHasBeenSet = true; m_slack = std::move(value); }

    /**
     * <p> Specifies the information that is required for querying Slack. </p>
     */
    inline SourceConnectorProperties& WithSlack(const SlackSourceProperties& value) { SetSlack(value); return *this;}

    /**
     * <p> Specifies the information that is required for querying Slack. </p>
     */
    inline SourceConnectorProperties& WithSlack(SlackSourceProperties&& value) { SetSlack(std::move(value)); return *this;}


    /**
     * <p> Specifies the information that is required for querying Trend Micro. </p>
     */
    inline const TrendmicroSourceProperties& GetTrendmicro() const{ return m_trendmicro; }

    /**
     * <p> Specifies the information that is required for querying Trend Micro. </p>
     */
    inline bool TrendmicroHasBeenSet() const { return m_trendmicroHasBeenSet; }

    /**
     * <p> Specifies the information that is required for querying Trend Micro. </p>
     */
    inline void SetTrendmicro(const TrendmicroSourceProperties& value) { m_trendmicroHasBeenSet = true; m_trendmicro = value; }

    /**
     * <p> Specifies the information that is required for querying Trend Micro. </p>
     */
    inline void SetTrendmicro(TrendmicroSourceProperties&& value) { m_trendmicroHasBeenSet = true; m_trendmicro = std::move(value); }

    /**
     * <p> Specifies the information that is required for querying Trend Micro. </p>
     */
    inline SourceConnectorProperties& WithTrendmicro(const TrendmicroSourceProperties& value) { SetTrendmicro(value); return *this;}

    /**
     * <p> Specifies the information that is required for querying Trend Micro. </p>
     */
    inline SourceConnectorProperties& WithTrendmicro(TrendmicroSourceProperties&& value) { SetTrendmicro(std::move(value)); return *this;}


    /**
     * <p> Specifies the information that is required for querying Veeva. </p>
     */
    inline const VeevaSourceProperties& GetVeeva() const{ return m_veeva; }

    /**
     * <p> Specifies the information that is required for querying Veeva. </p>
     */
    inline bool VeevaHasBeenSet() const { return m_veevaHasBeenSet; }

    /**
     * <p> Specifies the information that is required for querying Veeva. </p>
     */
    inline void SetVeeva(const VeevaSourceProperties& value) { m_veevaHasBeenSet = true; m_veeva = value; }

    /**
     * <p> Specifies the information that is required for querying Veeva. </p>
     */
    inline void SetVeeva(VeevaSourceProperties&& value) { m_veevaHasBeenSet = true; m_veeva = std::move(value); }

    /**
     * <p> Specifies the information that is required for querying Veeva. </p>
     */
    inline SourceConnectorProperties& WithVeeva(const VeevaSourceProperties& value) { SetVeeva(value); return *this;}

    /**
     * <p> Specifies the information that is required for querying Veeva. </p>
     */
    inline SourceConnectorProperties& WithVeeva(VeevaSourceProperties&& value) { SetVeeva(std::move(value)); return *this;}


    /**
     * <p> Specifies the information that is required for querying Zendesk. </p>
     */
    inline const ZendeskSourceProperties& GetZendesk() const{ return m_zendesk; }

    /**
     * <p> Specifies the information that is required for querying Zendesk. </p>
     */
    inline bool ZendeskHasBeenSet() const { return m_zendeskHasBeenSet; }

    /**
     * <p> Specifies the information that is required for querying Zendesk. </p>
     */
    inline void SetZendesk(const ZendeskSourceProperties& value) { m_zendeskHasBeenSet = true; m_zendesk = value; }

    /**
     * <p> Specifies the information that is required for querying Zendesk. </p>
     */
    inline void SetZendesk(ZendeskSourceProperties&& value) { m_zendeskHasBeenSet = true; m_zendesk = std::move(value); }

    /**
     * <p> Specifies the information that is required for querying Zendesk. </p>
     */
    inline SourceConnectorProperties& WithZendesk(const ZendeskSourceProperties& value) { SetZendesk(value); return *this;}

    /**
     * <p> Specifies the information that is required for querying Zendesk. </p>
     */
    inline SourceConnectorProperties& WithZendesk(ZendeskSourceProperties&& value) { SetZendesk(std::move(value)); return *this;}


    
    inline const SAPODataSourceProperties& GetSAPOData() const{ return m_sAPOData; }

    
    inline bool SAPODataHasBeenSet() const { return m_sAPODataHasBeenSet; }

    
    inline void SetSAPOData(const SAPODataSourceProperties& value) { m_sAPODataHasBeenSet = true; m_sAPOData = value; }

    
    inline void SetSAPOData(SAPODataSourceProperties&& value) { m_sAPODataHasBeenSet = true; m_sAPOData = std::move(value); }

    
    inline SourceConnectorProperties& WithSAPOData(const SAPODataSourceProperties& value) { SetSAPOData(value); return *this;}

    
    inline SourceConnectorProperties& WithSAPOData(SAPODataSourceProperties&& value) { SetSAPOData(std::move(value)); return *this;}


    
    inline const CustomConnectorSourceProperties& GetCustomConnector() const{ return m_customConnector; }

    
    inline bool CustomConnectorHasBeenSet() const { return m_customConnectorHasBeenSet; }

    
    inline void SetCustomConnector(const CustomConnectorSourceProperties& value) { m_customConnectorHasBeenSet = true; m_customConnector = value; }

    
    inline void SetCustomConnector(CustomConnectorSourceProperties&& value) { m_customConnectorHasBeenSet = true; m_customConnector = std::move(value); }

    
    inline SourceConnectorProperties& WithCustomConnector(const CustomConnectorSourceProperties& value) { SetCustomConnector(value); return *this;}

    
    inline SourceConnectorProperties& WithCustomConnector(CustomConnectorSourceProperties&& value) { SetCustomConnector(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
