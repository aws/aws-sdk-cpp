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
    AWS_APPFLOW_API SourceConnectorProperties();
    AWS_APPFLOW_API SourceConnectorProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SourceConnectorProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the information that is required for querying Amplitude. </p>
     */
    inline const AmplitudeSourceProperties& GetAmplitude() const{ return m_amplitude; }
    inline bool AmplitudeHasBeenSet() const { return m_amplitudeHasBeenSet; }
    inline void SetAmplitude(const AmplitudeSourceProperties& value) { m_amplitudeHasBeenSet = true; m_amplitude = value; }
    inline void SetAmplitude(AmplitudeSourceProperties&& value) { m_amplitudeHasBeenSet = true; m_amplitude = std::move(value); }
    inline SourceConnectorProperties& WithAmplitude(const AmplitudeSourceProperties& value) { SetAmplitude(value); return *this;}
    inline SourceConnectorProperties& WithAmplitude(AmplitudeSourceProperties&& value) { SetAmplitude(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Datadog. </p>
     */
    inline const DatadogSourceProperties& GetDatadog() const{ return m_datadog; }
    inline bool DatadogHasBeenSet() const { return m_datadogHasBeenSet; }
    inline void SetDatadog(const DatadogSourceProperties& value) { m_datadogHasBeenSet = true; m_datadog = value; }
    inline void SetDatadog(DatadogSourceProperties&& value) { m_datadogHasBeenSet = true; m_datadog = std::move(value); }
    inline SourceConnectorProperties& WithDatadog(const DatadogSourceProperties& value) { SetDatadog(value); return *this;}
    inline SourceConnectorProperties& WithDatadog(DatadogSourceProperties&& value) { SetDatadog(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Dynatrace. </p>
     */
    inline const DynatraceSourceProperties& GetDynatrace() const{ return m_dynatrace; }
    inline bool DynatraceHasBeenSet() const { return m_dynatraceHasBeenSet; }
    inline void SetDynatrace(const DynatraceSourceProperties& value) { m_dynatraceHasBeenSet = true; m_dynatrace = value; }
    inline void SetDynatrace(DynatraceSourceProperties&& value) { m_dynatraceHasBeenSet = true; m_dynatrace = std::move(value); }
    inline SourceConnectorProperties& WithDynatrace(const DynatraceSourceProperties& value) { SetDynatrace(value); return *this;}
    inline SourceConnectorProperties& WithDynatrace(DynatraceSourceProperties&& value) { SetDynatrace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Google Analytics.
     * </p>
     */
    inline const GoogleAnalyticsSourceProperties& GetGoogleAnalytics() const{ return m_googleAnalytics; }
    inline bool GoogleAnalyticsHasBeenSet() const { return m_googleAnalyticsHasBeenSet; }
    inline void SetGoogleAnalytics(const GoogleAnalyticsSourceProperties& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = value; }
    inline void SetGoogleAnalytics(GoogleAnalyticsSourceProperties&& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = std::move(value); }
    inline SourceConnectorProperties& WithGoogleAnalytics(const GoogleAnalyticsSourceProperties& value) { SetGoogleAnalytics(value); return *this;}
    inline SourceConnectorProperties& WithGoogleAnalytics(GoogleAnalyticsSourceProperties&& value) { SetGoogleAnalytics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Infor Nexus. </p>
     */
    inline const InforNexusSourceProperties& GetInforNexus() const{ return m_inforNexus; }
    inline bool InforNexusHasBeenSet() const { return m_inforNexusHasBeenSet; }
    inline void SetInforNexus(const InforNexusSourceProperties& value) { m_inforNexusHasBeenSet = true; m_inforNexus = value; }
    inline void SetInforNexus(InforNexusSourceProperties&& value) { m_inforNexusHasBeenSet = true; m_inforNexus = std::move(value); }
    inline SourceConnectorProperties& WithInforNexus(const InforNexusSourceProperties& value) { SetInforNexus(value); return *this;}
    inline SourceConnectorProperties& WithInforNexus(InforNexusSourceProperties&& value) { SetInforNexus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Marketo. </p>
     */
    inline const MarketoSourceProperties& GetMarketo() const{ return m_marketo; }
    inline bool MarketoHasBeenSet() const { return m_marketoHasBeenSet; }
    inline void SetMarketo(const MarketoSourceProperties& value) { m_marketoHasBeenSet = true; m_marketo = value; }
    inline void SetMarketo(MarketoSourceProperties&& value) { m_marketoHasBeenSet = true; m_marketo = std::move(value); }
    inline SourceConnectorProperties& WithMarketo(const MarketoSourceProperties& value) { SetMarketo(value); return *this;}
    inline SourceConnectorProperties& WithMarketo(MarketoSourceProperties&& value) { SetMarketo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Amazon S3. </p>
     */
    inline const S3SourceProperties& GetS3() const{ return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    inline void SetS3(const S3SourceProperties& value) { m_s3HasBeenSet = true; m_s3 = value; }
    inline void SetS3(S3SourceProperties&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }
    inline SourceConnectorProperties& WithS3(const S3SourceProperties& value) { SetS3(value); return *this;}
    inline SourceConnectorProperties& WithS3(S3SourceProperties&& value) { SetS3(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Salesforce. </p>
     */
    inline const SalesforceSourceProperties& GetSalesforce() const{ return m_salesforce; }
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }
    inline void SetSalesforce(const SalesforceSourceProperties& value) { m_salesforceHasBeenSet = true; m_salesforce = value; }
    inline void SetSalesforce(SalesforceSourceProperties&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::move(value); }
    inline SourceConnectorProperties& WithSalesforce(const SalesforceSourceProperties& value) { SetSalesforce(value); return *this;}
    inline SourceConnectorProperties& WithSalesforce(SalesforceSourceProperties&& value) { SetSalesforce(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying ServiceNow. </p>
     */
    inline const ServiceNowSourceProperties& GetServiceNow() const{ return m_serviceNow; }
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }
    inline void SetServiceNow(const ServiceNowSourceProperties& value) { m_serviceNowHasBeenSet = true; m_serviceNow = value; }
    inline void SetServiceNow(ServiceNowSourceProperties&& value) { m_serviceNowHasBeenSet = true; m_serviceNow = std::move(value); }
    inline SourceConnectorProperties& WithServiceNow(const ServiceNowSourceProperties& value) { SetServiceNow(value); return *this;}
    inline SourceConnectorProperties& WithServiceNow(ServiceNowSourceProperties&& value) { SetServiceNow(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Singular. </p>
     */
    inline const SingularSourceProperties& GetSingular() const{ return m_singular; }
    inline bool SingularHasBeenSet() const { return m_singularHasBeenSet; }
    inline void SetSingular(const SingularSourceProperties& value) { m_singularHasBeenSet = true; m_singular = value; }
    inline void SetSingular(SingularSourceProperties&& value) { m_singularHasBeenSet = true; m_singular = std::move(value); }
    inline SourceConnectorProperties& WithSingular(const SingularSourceProperties& value) { SetSingular(value); return *this;}
    inline SourceConnectorProperties& WithSingular(SingularSourceProperties&& value) { SetSingular(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Slack. </p>
     */
    inline const SlackSourceProperties& GetSlack() const{ return m_slack; }
    inline bool SlackHasBeenSet() const { return m_slackHasBeenSet; }
    inline void SetSlack(const SlackSourceProperties& value) { m_slackHasBeenSet = true; m_slack = value; }
    inline void SetSlack(SlackSourceProperties&& value) { m_slackHasBeenSet = true; m_slack = std::move(value); }
    inline SourceConnectorProperties& WithSlack(const SlackSourceProperties& value) { SetSlack(value); return *this;}
    inline SourceConnectorProperties& WithSlack(SlackSourceProperties&& value) { SetSlack(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Trend Micro. </p>
     */
    inline const TrendmicroSourceProperties& GetTrendmicro() const{ return m_trendmicro; }
    inline bool TrendmicroHasBeenSet() const { return m_trendmicroHasBeenSet; }
    inline void SetTrendmicro(const TrendmicroSourceProperties& value) { m_trendmicroHasBeenSet = true; m_trendmicro = value; }
    inline void SetTrendmicro(TrendmicroSourceProperties&& value) { m_trendmicroHasBeenSet = true; m_trendmicro = std::move(value); }
    inline SourceConnectorProperties& WithTrendmicro(const TrendmicroSourceProperties& value) { SetTrendmicro(value); return *this;}
    inline SourceConnectorProperties& WithTrendmicro(TrendmicroSourceProperties&& value) { SetTrendmicro(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Veeva. </p>
     */
    inline const VeevaSourceProperties& GetVeeva() const{ return m_veeva; }
    inline bool VeevaHasBeenSet() const { return m_veevaHasBeenSet; }
    inline void SetVeeva(const VeevaSourceProperties& value) { m_veevaHasBeenSet = true; m_veeva = value; }
    inline void SetVeeva(VeevaSourceProperties&& value) { m_veevaHasBeenSet = true; m_veeva = std::move(value); }
    inline SourceConnectorProperties& WithVeeva(const VeevaSourceProperties& value) { SetVeeva(value); return *this;}
    inline SourceConnectorProperties& WithVeeva(VeevaSourceProperties&& value) { SetVeeva(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required for querying Zendesk. </p>
     */
    inline const ZendeskSourceProperties& GetZendesk() const{ return m_zendesk; }
    inline bool ZendeskHasBeenSet() const { return m_zendeskHasBeenSet; }
    inline void SetZendesk(const ZendeskSourceProperties& value) { m_zendeskHasBeenSet = true; m_zendesk = value; }
    inline void SetZendesk(ZendeskSourceProperties&& value) { m_zendeskHasBeenSet = true; m_zendesk = std::move(value); }
    inline SourceConnectorProperties& WithZendesk(const ZendeskSourceProperties& value) { SetZendesk(value); return *this;}
    inline SourceConnectorProperties& WithZendesk(ZendeskSourceProperties&& value) { SetZendesk(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SAPODataSourceProperties& GetSAPOData() const{ return m_sAPOData; }
    inline bool SAPODataHasBeenSet() const { return m_sAPODataHasBeenSet; }
    inline void SetSAPOData(const SAPODataSourceProperties& value) { m_sAPODataHasBeenSet = true; m_sAPOData = value; }
    inline void SetSAPOData(SAPODataSourceProperties&& value) { m_sAPODataHasBeenSet = true; m_sAPOData = std::move(value); }
    inline SourceConnectorProperties& WithSAPOData(const SAPODataSourceProperties& value) { SetSAPOData(value); return *this;}
    inline SourceConnectorProperties& WithSAPOData(SAPODataSourceProperties&& value) { SetSAPOData(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CustomConnectorSourceProperties& GetCustomConnector() const{ return m_customConnector; }
    inline bool CustomConnectorHasBeenSet() const { return m_customConnectorHasBeenSet; }
    inline void SetCustomConnector(const CustomConnectorSourceProperties& value) { m_customConnectorHasBeenSet = true; m_customConnector = value; }
    inline void SetCustomConnector(CustomConnectorSourceProperties&& value) { m_customConnectorHasBeenSet = true; m_customConnector = std::move(value); }
    inline SourceConnectorProperties& WithCustomConnector(const CustomConnectorSourceProperties& value) { SetCustomConnector(value); return *this;}
    inline SourceConnectorProperties& WithCustomConnector(CustomConnectorSourceProperties&& value) { SetCustomConnector(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the information that is required for querying Salesforce
     * Pardot.</p>
     */
    inline const PardotSourceProperties& GetPardot() const{ return m_pardot; }
    inline bool PardotHasBeenSet() const { return m_pardotHasBeenSet; }
    inline void SetPardot(const PardotSourceProperties& value) { m_pardotHasBeenSet = true; m_pardot = value; }
    inline void SetPardot(PardotSourceProperties&& value) { m_pardotHasBeenSet = true; m_pardot = std::move(value); }
    inline SourceConnectorProperties& WithPardot(const PardotSourceProperties& value) { SetPardot(value); return *this;}
    inline SourceConnectorProperties& WithPardot(PardotSourceProperties&& value) { SetPardot(std::move(value)); return *this;}
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
