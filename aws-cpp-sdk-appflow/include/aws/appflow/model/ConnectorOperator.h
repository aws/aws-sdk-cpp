/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/AmplitudeConnectorOperator.h>
#include <aws/appflow/model/DatadogConnectorOperator.h>
#include <aws/appflow/model/DynatraceConnectorOperator.h>
#include <aws/appflow/model/GoogleAnalyticsConnectorOperator.h>
#include <aws/appflow/model/InforNexusConnectorOperator.h>
#include <aws/appflow/model/MarketoConnectorOperator.h>
#include <aws/appflow/model/S3ConnectorOperator.h>
#include <aws/appflow/model/SalesforceConnectorOperator.h>
#include <aws/appflow/model/ServiceNowConnectorOperator.h>
#include <aws/appflow/model/SingularConnectorOperator.h>
#include <aws/appflow/model/SlackConnectorOperator.h>
#include <aws/appflow/model/TrendmicroConnectorOperator.h>
#include <aws/appflow/model/VeevaConnectorOperator.h>
#include <aws/appflow/model/ZendeskConnectorOperator.h>
#include <aws/appflow/model/SAPODataConnectorOperator.h>
#include <aws/appflow/model/Operator.h>
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
   * <p> The operation to be performed on the provided source fields. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ConnectorOperator">AWS
   * API Reference</a></p>
   */
  class ConnectorOperator
  {
  public:
    AWS_APPFLOW_API ConnectorOperator();
    AWS_APPFLOW_API ConnectorOperator(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorOperator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The operation to be performed on the provided Amplitude source fields. </p>
     */
    inline const AmplitudeConnectorOperator& GetAmplitude() const{ return m_amplitude; }

    /**
     * <p> The operation to be performed on the provided Amplitude source fields. </p>
     */
    inline bool AmplitudeHasBeenSet() const { return m_amplitudeHasBeenSet; }

    /**
     * <p> The operation to be performed on the provided Amplitude source fields. </p>
     */
    inline void SetAmplitude(const AmplitudeConnectorOperator& value) { m_amplitudeHasBeenSet = true; m_amplitude = value; }

    /**
     * <p> The operation to be performed on the provided Amplitude source fields. </p>
     */
    inline void SetAmplitude(AmplitudeConnectorOperator&& value) { m_amplitudeHasBeenSet = true; m_amplitude = std::move(value); }

    /**
     * <p> The operation to be performed on the provided Amplitude source fields. </p>
     */
    inline ConnectorOperator& WithAmplitude(const AmplitudeConnectorOperator& value) { SetAmplitude(value); return *this;}

    /**
     * <p> The operation to be performed on the provided Amplitude source fields. </p>
     */
    inline ConnectorOperator& WithAmplitude(AmplitudeConnectorOperator&& value) { SetAmplitude(std::move(value)); return *this;}


    /**
     * <p> The operation to be performed on the provided Datadog source fields. </p>
     */
    inline const DatadogConnectorOperator& GetDatadog() const{ return m_datadog; }

    /**
     * <p> The operation to be performed on the provided Datadog source fields. </p>
     */
    inline bool DatadogHasBeenSet() const { return m_datadogHasBeenSet; }

    /**
     * <p> The operation to be performed on the provided Datadog source fields. </p>
     */
    inline void SetDatadog(const DatadogConnectorOperator& value) { m_datadogHasBeenSet = true; m_datadog = value; }

    /**
     * <p> The operation to be performed on the provided Datadog source fields. </p>
     */
    inline void SetDatadog(DatadogConnectorOperator&& value) { m_datadogHasBeenSet = true; m_datadog = std::move(value); }

    /**
     * <p> The operation to be performed on the provided Datadog source fields. </p>
     */
    inline ConnectorOperator& WithDatadog(const DatadogConnectorOperator& value) { SetDatadog(value); return *this;}

    /**
     * <p> The operation to be performed on the provided Datadog source fields. </p>
     */
    inline ConnectorOperator& WithDatadog(DatadogConnectorOperator&& value) { SetDatadog(std::move(value)); return *this;}


    /**
     * <p> The operation to be performed on the provided Dynatrace source fields. </p>
     */
    inline const DynatraceConnectorOperator& GetDynatrace() const{ return m_dynatrace; }

    /**
     * <p> The operation to be performed on the provided Dynatrace source fields. </p>
     */
    inline bool DynatraceHasBeenSet() const { return m_dynatraceHasBeenSet; }

    /**
     * <p> The operation to be performed on the provided Dynatrace source fields. </p>
     */
    inline void SetDynatrace(const DynatraceConnectorOperator& value) { m_dynatraceHasBeenSet = true; m_dynatrace = value; }

    /**
     * <p> The operation to be performed on the provided Dynatrace source fields. </p>
     */
    inline void SetDynatrace(DynatraceConnectorOperator&& value) { m_dynatraceHasBeenSet = true; m_dynatrace = std::move(value); }

    /**
     * <p> The operation to be performed on the provided Dynatrace source fields. </p>
     */
    inline ConnectorOperator& WithDynatrace(const DynatraceConnectorOperator& value) { SetDynatrace(value); return *this;}

    /**
     * <p> The operation to be performed on the provided Dynatrace source fields. </p>
     */
    inline ConnectorOperator& WithDynatrace(DynatraceConnectorOperator&& value) { SetDynatrace(std::move(value)); return *this;}


    /**
     * <p> The operation to be performed on the provided Google Analytics source
     * fields. </p>
     */
    inline const GoogleAnalyticsConnectorOperator& GetGoogleAnalytics() const{ return m_googleAnalytics; }

    /**
     * <p> The operation to be performed on the provided Google Analytics source
     * fields. </p>
     */
    inline bool GoogleAnalyticsHasBeenSet() const { return m_googleAnalyticsHasBeenSet; }

    /**
     * <p> The operation to be performed on the provided Google Analytics source
     * fields. </p>
     */
    inline void SetGoogleAnalytics(const GoogleAnalyticsConnectorOperator& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = value; }

    /**
     * <p> The operation to be performed on the provided Google Analytics source
     * fields. </p>
     */
    inline void SetGoogleAnalytics(GoogleAnalyticsConnectorOperator&& value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = std::move(value); }

    /**
     * <p> The operation to be performed on the provided Google Analytics source
     * fields. </p>
     */
    inline ConnectorOperator& WithGoogleAnalytics(const GoogleAnalyticsConnectorOperator& value) { SetGoogleAnalytics(value); return *this;}

    /**
     * <p> The operation to be performed on the provided Google Analytics source
     * fields. </p>
     */
    inline ConnectorOperator& WithGoogleAnalytics(GoogleAnalyticsConnectorOperator&& value) { SetGoogleAnalytics(std::move(value)); return *this;}


    /**
     * <p> The operation to be performed on the provided Infor Nexus source fields.
     * </p>
     */
    inline const InforNexusConnectorOperator& GetInforNexus() const{ return m_inforNexus; }

    /**
     * <p> The operation to be performed on the provided Infor Nexus source fields.
     * </p>
     */
    inline bool InforNexusHasBeenSet() const { return m_inforNexusHasBeenSet; }

    /**
     * <p> The operation to be performed on the provided Infor Nexus source fields.
     * </p>
     */
    inline void SetInforNexus(const InforNexusConnectorOperator& value) { m_inforNexusHasBeenSet = true; m_inforNexus = value; }

    /**
     * <p> The operation to be performed on the provided Infor Nexus source fields.
     * </p>
     */
    inline void SetInforNexus(InforNexusConnectorOperator&& value) { m_inforNexusHasBeenSet = true; m_inforNexus = std::move(value); }

    /**
     * <p> The operation to be performed on the provided Infor Nexus source fields.
     * </p>
     */
    inline ConnectorOperator& WithInforNexus(const InforNexusConnectorOperator& value) { SetInforNexus(value); return *this;}

    /**
     * <p> The operation to be performed on the provided Infor Nexus source fields.
     * </p>
     */
    inline ConnectorOperator& WithInforNexus(InforNexusConnectorOperator&& value) { SetInforNexus(std::move(value)); return *this;}


    /**
     * <p> The operation to be performed on the provided Marketo source fields. </p>
     */
    inline const MarketoConnectorOperator& GetMarketo() const{ return m_marketo; }

    /**
     * <p> The operation to be performed on the provided Marketo source fields. </p>
     */
    inline bool MarketoHasBeenSet() const { return m_marketoHasBeenSet; }

    /**
     * <p> The operation to be performed on the provided Marketo source fields. </p>
     */
    inline void SetMarketo(const MarketoConnectorOperator& value) { m_marketoHasBeenSet = true; m_marketo = value; }

    /**
     * <p> The operation to be performed on the provided Marketo source fields. </p>
     */
    inline void SetMarketo(MarketoConnectorOperator&& value) { m_marketoHasBeenSet = true; m_marketo = std::move(value); }

    /**
     * <p> The operation to be performed on the provided Marketo source fields. </p>
     */
    inline ConnectorOperator& WithMarketo(const MarketoConnectorOperator& value) { SetMarketo(value); return *this;}

    /**
     * <p> The operation to be performed on the provided Marketo source fields. </p>
     */
    inline ConnectorOperator& WithMarketo(MarketoConnectorOperator&& value) { SetMarketo(std::move(value)); return *this;}


    /**
     * <p> The operation to be performed on the provided Amazon S3 source fields. </p>
     */
    inline const S3ConnectorOperator& GetS3() const{ return m_s3; }

    /**
     * <p> The operation to be performed on the provided Amazon S3 source fields. </p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p> The operation to be performed on the provided Amazon S3 source fields. </p>
     */
    inline void SetS3(const S3ConnectorOperator& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p> The operation to be performed on the provided Amazon S3 source fields. </p>
     */
    inline void SetS3(S3ConnectorOperator&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p> The operation to be performed on the provided Amazon S3 source fields. </p>
     */
    inline ConnectorOperator& WithS3(const S3ConnectorOperator& value) { SetS3(value); return *this;}

    /**
     * <p> The operation to be performed on the provided Amazon S3 source fields. </p>
     */
    inline ConnectorOperator& WithS3(S3ConnectorOperator&& value) { SetS3(std::move(value)); return *this;}


    /**
     * <p> The operation to be performed on the provided Salesforce source fields. </p>
     */
    inline const SalesforceConnectorOperator& GetSalesforce() const{ return m_salesforce; }

    /**
     * <p> The operation to be performed on the provided Salesforce source fields. </p>
     */
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }

    /**
     * <p> The operation to be performed on the provided Salesforce source fields. </p>
     */
    inline void SetSalesforce(const SalesforceConnectorOperator& value) { m_salesforceHasBeenSet = true; m_salesforce = value; }

    /**
     * <p> The operation to be performed on the provided Salesforce source fields. </p>
     */
    inline void SetSalesforce(SalesforceConnectorOperator&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::move(value); }

    /**
     * <p> The operation to be performed on the provided Salesforce source fields. </p>
     */
    inline ConnectorOperator& WithSalesforce(const SalesforceConnectorOperator& value) { SetSalesforce(value); return *this;}

    /**
     * <p> The operation to be performed on the provided Salesforce source fields. </p>
     */
    inline ConnectorOperator& WithSalesforce(SalesforceConnectorOperator&& value) { SetSalesforce(std::move(value)); return *this;}


    /**
     * <p> The operation to be performed on the provided ServiceNow source fields. </p>
     */
    inline const ServiceNowConnectorOperator& GetServiceNow() const{ return m_serviceNow; }

    /**
     * <p> The operation to be performed on the provided ServiceNow source fields. </p>
     */
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }

    /**
     * <p> The operation to be performed on the provided ServiceNow source fields. </p>
     */
    inline void SetServiceNow(const ServiceNowConnectorOperator& value) { m_serviceNowHasBeenSet = true; m_serviceNow = value; }

    /**
     * <p> The operation to be performed on the provided ServiceNow source fields. </p>
     */
    inline void SetServiceNow(ServiceNowConnectorOperator&& value) { m_serviceNowHasBeenSet = true; m_serviceNow = std::move(value); }

    /**
     * <p> The operation to be performed on the provided ServiceNow source fields. </p>
     */
    inline ConnectorOperator& WithServiceNow(const ServiceNowConnectorOperator& value) { SetServiceNow(value); return *this;}

    /**
     * <p> The operation to be performed on the provided ServiceNow source fields. </p>
     */
    inline ConnectorOperator& WithServiceNow(ServiceNowConnectorOperator&& value) { SetServiceNow(std::move(value)); return *this;}


    /**
     * <p> The operation to be performed on the provided Singular source fields. </p>
     */
    inline const SingularConnectorOperator& GetSingular() const{ return m_singular; }

    /**
     * <p> The operation to be performed on the provided Singular source fields. </p>
     */
    inline bool SingularHasBeenSet() const { return m_singularHasBeenSet; }

    /**
     * <p> The operation to be performed on the provided Singular source fields. </p>
     */
    inline void SetSingular(const SingularConnectorOperator& value) { m_singularHasBeenSet = true; m_singular = value; }

    /**
     * <p> The operation to be performed on the provided Singular source fields. </p>
     */
    inline void SetSingular(SingularConnectorOperator&& value) { m_singularHasBeenSet = true; m_singular = std::move(value); }

    /**
     * <p> The operation to be performed on the provided Singular source fields. </p>
     */
    inline ConnectorOperator& WithSingular(const SingularConnectorOperator& value) { SetSingular(value); return *this;}

    /**
     * <p> The operation to be performed on the provided Singular source fields. </p>
     */
    inline ConnectorOperator& WithSingular(SingularConnectorOperator&& value) { SetSingular(std::move(value)); return *this;}


    /**
     * <p> The operation to be performed on the provided Slack source fields. </p>
     */
    inline const SlackConnectorOperator& GetSlack() const{ return m_slack; }

    /**
     * <p> The operation to be performed on the provided Slack source fields. </p>
     */
    inline bool SlackHasBeenSet() const { return m_slackHasBeenSet; }

    /**
     * <p> The operation to be performed on the provided Slack source fields. </p>
     */
    inline void SetSlack(const SlackConnectorOperator& value) { m_slackHasBeenSet = true; m_slack = value; }

    /**
     * <p> The operation to be performed on the provided Slack source fields. </p>
     */
    inline void SetSlack(SlackConnectorOperator&& value) { m_slackHasBeenSet = true; m_slack = std::move(value); }

    /**
     * <p> The operation to be performed on the provided Slack source fields. </p>
     */
    inline ConnectorOperator& WithSlack(const SlackConnectorOperator& value) { SetSlack(value); return *this;}

    /**
     * <p> The operation to be performed on the provided Slack source fields. </p>
     */
    inline ConnectorOperator& WithSlack(SlackConnectorOperator&& value) { SetSlack(std::move(value)); return *this;}


    /**
     * <p> The operation to be performed on the provided Trend Micro source fields.
     * </p>
     */
    inline const TrendmicroConnectorOperator& GetTrendmicro() const{ return m_trendmicro; }

    /**
     * <p> The operation to be performed on the provided Trend Micro source fields.
     * </p>
     */
    inline bool TrendmicroHasBeenSet() const { return m_trendmicroHasBeenSet; }

    /**
     * <p> The operation to be performed on the provided Trend Micro source fields.
     * </p>
     */
    inline void SetTrendmicro(const TrendmicroConnectorOperator& value) { m_trendmicroHasBeenSet = true; m_trendmicro = value; }

    /**
     * <p> The operation to be performed on the provided Trend Micro source fields.
     * </p>
     */
    inline void SetTrendmicro(TrendmicroConnectorOperator&& value) { m_trendmicroHasBeenSet = true; m_trendmicro = std::move(value); }

    /**
     * <p> The operation to be performed on the provided Trend Micro source fields.
     * </p>
     */
    inline ConnectorOperator& WithTrendmicro(const TrendmicroConnectorOperator& value) { SetTrendmicro(value); return *this;}

    /**
     * <p> The operation to be performed on the provided Trend Micro source fields.
     * </p>
     */
    inline ConnectorOperator& WithTrendmicro(TrendmicroConnectorOperator&& value) { SetTrendmicro(std::move(value)); return *this;}


    /**
     * <p> The operation to be performed on the provided Veeva source fields. </p>
     */
    inline const VeevaConnectorOperator& GetVeeva() const{ return m_veeva; }

    /**
     * <p> The operation to be performed on the provided Veeva source fields. </p>
     */
    inline bool VeevaHasBeenSet() const { return m_veevaHasBeenSet; }

    /**
     * <p> The operation to be performed on the provided Veeva source fields. </p>
     */
    inline void SetVeeva(const VeevaConnectorOperator& value) { m_veevaHasBeenSet = true; m_veeva = value; }

    /**
     * <p> The operation to be performed on the provided Veeva source fields. </p>
     */
    inline void SetVeeva(VeevaConnectorOperator&& value) { m_veevaHasBeenSet = true; m_veeva = std::move(value); }

    /**
     * <p> The operation to be performed on the provided Veeva source fields. </p>
     */
    inline ConnectorOperator& WithVeeva(const VeevaConnectorOperator& value) { SetVeeva(value); return *this;}

    /**
     * <p> The operation to be performed on the provided Veeva source fields. </p>
     */
    inline ConnectorOperator& WithVeeva(VeevaConnectorOperator&& value) { SetVeeva(std::move(value)); return *this;}


    /**
     * <p> The operation to be performed on the provided Zendesk source fields. </p>
     */
    inline const ZendeskConnectorOperator& GetZendesk() const{ return m_zendesk; }

    /**
     * <p> The operation to be performed on the provided Zendesk source fields. </p>
     */
    inline bool ZendeskHasBeenSet() const { return m_zendeskHasBeenSet; }

    /**
     * <p> The operation to be performed on the provided Zendesk source fields. </p>
     */
    inline void SetZendesk(const ZendeskConnectorOperator& value) { m_zendeskHasBeenSet = true; m_zendesk = value; }

    /**
     * <p> The operation to be performed on the provided Zendesk source fields. </p>
     */
    inline void SetZendesk(ZendeskConnectorOperator&& value) { m_zendeskHasBeenSet = true; m_zendesk = std::move(value); }

    /**
     * <p> The operation to be performed on the provided Zendesk source fields. </p>
     */
    inline ConnectorOperator& WithZendesk(const ZendeskConnectorOperator& value) { SetZendesk(value); return *this;}

    /**
     * <p> The operation to be performed on the provided Zendesk source fields. </p>
     */
    inline ConnectorOperator& WithZendesk(ZendeskConnectorOperator&& value) { SetZendesk(std::move(value)); return *this;}


    /**
     * <p> The operation to be performed on the provided SAPOData source fields. </p>
     */
    inline const SAPODataConnectorOperator& GetSAPOData() const{ return m_sAPOData; }

    /**
     * <p> The operation to be performed on the provided SAPOData source fields. </p>
     */
    inline bool SAPODataHasBeenSet() const { return m_sAPODataHasBeenSet; }

    /**
     * <p> The operation to be performed on the provided SAPOData source fields. </p>
     */
    inline void SetSAPOData(const SAPODataConnectorOperator& value) { m_sAPODataHasBeenSet = true; m_sAPOData = value; }

    /**
     * <p> The operation to be performed on the provided SAPOData source fields. </p>
     */
    inline void SetSAPOData(SAPODataConnectorOperator&& value) { m_sAPODataHasBeenSet = true; m_sAPOData = std::move(value); }

    /**
     * <p> The operation to be performed on the provided SAPOData source fields. </p>
     */
    inline ConnectorOperator& WithSAPOData(const SAPODataConnectorOperator& value) { SetSAPOData(value); return *this;}

    /**
     * <p> The operation to be performed on the provided SAPOData source fields. </p>
     */
    inline ConnectorOperator& WithSAPOData(SAPODataConnectorOperator&& value) { SetSAPOData(std::move(value)); return *this;}


    /**
     * <p>Operators supported by the custom connector.</p>
     */
    inline const Operator& GetCustomConnector() const{ return m_customConnector; }

    /**
     * <p>Operators supported by the custom connector.</p>
     */
    inline bool CustomConnectorHasBeenSet() const { return m_customConnectorHasBeenSet; }

    /**
     * <p>Operators supported by the custom connector.</p>
     */
    inline void SetCustomConnector(const Operator& value) { m_customConnectorHasBeenSet = true; m_customConnector = value; }

    /**
     * <p>Operators supported by the custom connector.</p>
     */
    inline void SetCustomConnector(Operator&& value) { m_customConnectorHasBeenSet = true; m_customConnector = std::move(value); }

    /**
     * <p>Operators supported by the custom connector.</p>
     */
    inline ConnectorOperator& WithCustomConnector(const Operator& value) { SetCustomConnector(value); return *this;}

    /**
     * <p>Operators supported by the custom connector.</p>
     */
    inline ConnectorOperator& WithCustomConnector(Operator&& value) { SetCustomConnector(std::move(value)); return *this;}

  private:

    AmplitudeConnectorOperator m_amplitude;
    bool m_amplitudeHasBeenSet = false;

    DatadogConnectorOperator m_datadog;
    bool m_datadogHasBeenSet = false;

    DynatraceConnectorOperator m_dynatrace;
    bool m_dynatraceHasBeenSet = false;

    GoogleAnalyticsConnectorOperator m_googleAnalytics;
    bool m_googleAnalyticsHasBeenSet = false;

    InforNexusConnectorOperator m_inforNexus;
    bool m_inforNexusHasBeenSet = false;

    MarketoConnectorOperator m_marketo;
    bool m_marketoHasBeenSet = false;

    S3ConnectorOperator m_s3;
    bool m_s3HasBeenSet = false;

    SalesforceConnectorOperator m_salesforce;
    bool m_salesforceHasBeenSet = false;

    ServiceNowConnectorOperator m_serviceNow;
    bool m_serviceNowHasBeenSet = false;

    SingularConnectorOperator m_singular;
    bool m_singularHasBeenSet = false;

    SlackConnectorOperator m_slack;
    bool m_slackHasBeenSet = false;

    TrendmicroConnectorOperator m_trendmicro;
    bool m_trendmicroHasBeenSet = false;

    VeevaConnectorOperator m_veeva;
    bool m_veevaHasBeenSet = false;

    ZendeskConnectorOperator m_zendesk;
    bool m_zendeskHasBeenSet = false;

    SAPODataConnectorOperator m_sAPOData;
    bool m_sAPODataHasBeenSet = false;

    Operator m_customConnector;
    bool m_customConnectorHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
