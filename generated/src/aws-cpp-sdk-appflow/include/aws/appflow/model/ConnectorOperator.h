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
#include <aws/appflow/model/PardotConnectorOperator.h>
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
    AWS_APPFLOW_API ConnectorOperator() = default;
    AWS_APPFLOW_API ConnectorOperator(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorOperator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The operation to be performed on the provided Amplitude source fields. </p>
     */
    inline AmplitudeConnectorOperator GetAmplitude() const { return m_amplitude; }
    inline bool AmplitudeHasBeenSet() const { return m_amplitudeHasBeenSet; }
    inline void SetAmplitude(AmplitudeConnectorOperator value) { m_amplitudeHasBeenSet = true; m_amplitude = value; }
    inline ConnectorOperator& WithAmplitude(AmplitudeConnectorOperator value) { SetAmplitude(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The operation to be performed on the provided Datadog source fields. </p>
     */
    inline DatadogConnectorOperator GetDatadog() const { return m_datadog; }
    inline bool DatadogHasBeenSet() const { return m_datadogHasBeenSet; }
    inline void SetDatadog(DatadogConnectorOperator value) { m_datadogHasBeenSet = true; m_datadog = value; }
    inline ConnectorOperator& WithDatadog(DatadogConnectorOperator value) { SetDatadog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The operation to be performed on the provided Dynatrace source fields. </p>
     */
    inline DynatraceConnectorOperator GetDynatrace() const { return m_dynatrace; }
    inline bool DynatraceHasBeenSet() const { return m_dynatraceHasBeenSet; }
    inline void SetDynatrace(DynatraceConnectorOperator value) { m_dynatraceHasBeenSet = true; m_dynatrace = value; }
    inline ConnectorOperator& WithDynatrace(DynatraceConnectorOperator value) { SetDynatrace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The operation to be performed on the provided Google Analytics source
     * fields. </p>
     */
    inline GoogleAnalyticsConnectorOperator GetGoogleAnalytics() const { return m_googleAnalytics; }
    inline bool GoogleAnalyticsHasBeenSet() const { return m_googleAnalyticsHasBeenSet; }
    inline void SetGoogleAnalytics(GoogleAnalyticsConnectorOperator value) { m_googleAnalyticsHasBeenSet = true; m_googleAnalytics = value; }
    inline ConnectorOperator& WithGoogleAnalytics(GoogleAnalyticsConnectorOperator value) { SetGoogleAnalytics(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The operation to be performed on the provided Infor Nexus source fields.
     * </p>
     */
    inline InforNexusConnectorOperator GetInforNexus() const { return m_inforNexus; }
    inline bool InforNexusHasBeenSet() const { return m_inforNexusHasBeenSet; }
    inline void SetInforNexus(InforNexusConnectorOperator value) { m_inforNexusHasBeenSet = true; m_inforNexus = value; }
    inline ConnectorOperator& WithInforNexus(InforNexusConnectorOperator value) { SetInforNexus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The operation to be performed on the provided Marketo source fields. </p>
     */
    inline MarketoConnectorOperator GetMarketo() const { return m_marketo; }
    inline bool MarketoHasBeenSet() const { return m_marketoHasBeenSet; }
    inline void SetMarketo(MarketoConnectorOperator value) { m_marketoHasBeenSet = true; m_marketo = value; }
    inline ConnectorOperator& WithMarketo(MarketoConnectorOperator value) { SetMarketo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The operation to be performed on the provided Amazon S3 source fields. </p>
     */
    inline S3ConnectorOperator GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    inline void SetS3(S3ConnectorOperator value) { m_s3HasBeenSet = true; m_s3 = value; }
    inline ConnectorOperator& WithS3(S3ConnectorOperator value) { SetS3(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The operation to be performed on the provided Salesforce source fields. </p>
     */
    inline SalesforceConnectorOperator GetSalesforce() const { return m_salesforce; }
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }
    inline void SetSalesforce(SalesforceConnectorOperator value) { m_salesforceHasBeenSet = true; m_salesforce = value; }
    inline ConnectorOperator& WithSalesforce(SalesforceConnectorOperator value) { SetSalesforce(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The operation to be performed on the provided ServiceNow source fields. </p>
     */
    inline ServiceNowConnectorOperator GetServiceNow() const { return m_serviceNow; }
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }
    inline void SetServiceNow(ServiceNowConnectorOperator value) { m_serviceNowHasBeenSet = true; m_serviceNow = value; }
    inline ConnectorOperator& WithServiceNow(ServiceNowConnectorOperator value) { SetServiceNow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The operation to be performed on the provided Singular source fields. </p>
     */
    inline SingularConnectorOperator GetSingular() const { return m_singular; }
    inline bool SingularHasBeenSet() const { return m_singularHasBeenSet; }
    inline void SetSingular(SingularConnectorOperator value) { m_singularHasBeenSet = true; m_singular = value; }
    inline ConnectorOperator& WithSingular(SingularConnectorOperator value) { SetSingular(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The operation to be performed on the provided Slack source fields. </p>
     */
    inline SlackConnectorOperator GetSlack() const { return m_slack; }
    inline bool SlackHasBeenSet() const { return m_slackHasBeenSet; }
    inline void SetSlack(SlackConnectorOperator value) { m_slackHasBeenSet = true; m_slack = value; }
    inline ConnectorOperator& WithSlack(SlackConnectorOperator value) { SetSlack(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The operation to be performed on the provided Trend Micro source fields.
     * </p>
     */
    inline TrendmicroConnectorOperator GetTrendmicro() const { return m_trendmicro; }
    inline bool TrendmicroHasBeenSet() const { return m_trendmicroHasBeenSet; }
    inline void SetTrendmicro(TrendmicroConnectorOperator value) { m_trendmicroHasBeenSet = true; m_trendmicro = value; }
    inline ConnectorOperator& WithTrendmicro(TrendmicroConnectorOperator value) { SetTrendmicro(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The operation to be performed on the provided Veeva source fields. </p>
     */
    inline VeevaConnectorOperator GetVeeva() const { return m_veeva; }
    inline bool VeevaHasBeenSet() const { return m_veevaHasBeenSet; }
    inline void SetVeeva(VeevaConnectorOperator value) { m_veevaHasBeenSet = true; m_veeva = value; }
    inline ConnectorOperator& WithVeeva(VeevaConnectorOperator value) { SetVeeva(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The operation to be performed on the provided Zendesk source fields. </p>
     */
    inline ZendeskConnectorOperator GetZendesk() const { return m_zendesk; }
    inline bool ZendeskHasBeenSet() const { return m_zendeskHasBeenSet; }
    inline void SetZendesk(ZendeskConnectorOperator value) { m_zendeskHasBeenSet = true; m_zendesk = value; }
    inline ConnectorOperator& WithZendesk(ZendeskConnectorOperator value) { SetZendesk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The operation to be performed on the provided SAPOData source fields. </p>
     */
    inline SAPODataConnectorOperator GetSAPOData() const { return m_sAPOData; }
    inline bool SAPODataHasBeenSet() const { return m_sAPODataHasBeenSet; }
    inline void SetSAPOData(SAPODataConnectorOperator value) { m_sAPODataHasBeenSet = true; m_sAPOData = value; }
    inline ConnectorOperator& WithSAPOData(SAPODataConnectorOperator value) { SetSAPOData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operators supported by the custom connector.</p>
     */
    inline Operator GetCustomConnector() const { return m_customConnector; }
    inline bool CustomConnectorHasBeenSet() const { return m_customConnectorHasBeenSet; }
    inline void SetCustomConnector(Operator value) { m_customConnectorHasBeenSet = true; m_customConnector = value; }
    inline ConnectorOperator& WithCustomConnector(Operator value) { SetCustomConnector(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation to be performed on the provided Salesforce Pardot source
     * fields.</p>
     */
    inline PardotConnectorOperator GetPardot() const { return m_pardot; }
    inline bool PardotHasBeenSet() const { return m_pardotHasBeenSet; }
    inline void SetPardot(PardotConnectorOperator value) { m_pardotHasBeenSet = true; m_pardot = value; }
    inline ConnectorOperator& WithPardot(PardotConnectorOperator value) { SetPardot(value); return *this;}
    ///@}
  private:

    AmplitudeConnectorOperator m_amplitude{AmplitudeConnectorOperator::NOT_SET};
    bool m_amplitudeHasBeenSet = false;

    DatadogConnectorOperator m_datadog{DatadogConnectorOperator::NOT_SET};
    bool m_datadogHasBeenSet = false;

    DynatraceConnectorOperator m_dynatrace{DynatraceConnectorOperator::NOT_SET};
    bool m_dynatraceHasBeenSet = false;

    GoogleAnalyticsConnectorOperator m_googleAnalytics{GoogleAnalyticsConnectorOperator::NOT_SET};
    bool m_googleAnalyticsHasBeenSet = false;

    InforNexusConnectorOperator m_inforNexus{InforNexusConnectorOperator::NOT_SET};
    bool m_inforNexusHasBeenSet = false;

    MarketoConnectorOperator m_marketo{MarketoConnectorOperator::NOT_SET};
    bool m_marketoHasBeenSet = false;

    S3ConnectorOperator m_s3{S3ConnectorOperator::NOT_SET};
    bool m_s3HasBeenSet = false;

    SalesforceConnectorOperator m_salesforce{SalesforceConnectorOperator::NOT_SET};
    bool m_salesforceHasBeenSet = false;

    ServiceNowConnectorOperator m_serviceNow{ServiceNowConnectorOperator::NOT_SET};
    bool m_serviceNowHasBeenSet = false;

    SingularConnectorOperator m_singular{SingularConnectorOperator::NOT_SET};
    bool m_singularHasBeenSet = false;

    SlackConnectorOperator m_slack{SlackConnectorOperator::NOT_SET};
    bool m_slackHasBeenSet = false;

    TrendmicroConnectorOperator m_trendmicro{TrendmicroConnectorOperator::NOT_SET};
    bool m_trendmicroHasBeenSet = false;

    VeevaConnectorOperator m_veeva{VeevaConnectorOperator::NOT_SET};
    bool m_veevaHasBeenSet = false;

    ZendeskConnectorOperator m_zendesk{ZendeskConnectorOperator::NOT_SET};
    bool m_zendeskHasBeenSet = false;

    SAPODataConnectorOperator m_sAPOData{SAPODataConnectorOperator::NOT_SET};
    bool m_sAPODataHasBeenSet = false;

    Operator m_customConnector{Operator::NOT_SET};
    bool m_customConnectorHasBeenSet = false;

    PardotConnectorOperator m_pardot{PardotConnectorOperator::NOT_SET};
    bool m_pardotHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
