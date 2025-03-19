/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/RedshiftDestinationProperties.h>
#include <aws/appflow/model/S3DestinationProperties.h>
#include <aws/appflow/model/SalesforceDestinationProperties.h>
#include <aws/appflow/model/SnowflakeDestinationProperties.h>
#include <aws/appflow/model/EventBridgeDestinationProperties.h>
#include <aws/appflow/model/LookoutMetricsDestinationProperties.h>
#include <aws/appflow/model/UpsolverDestinationProperties.h>
#include <aws/appflow/model/HoneycodeDestinationProperties.h>
#include <aws/appflow/model/CustomerProfilesDestinationProperties.h>
#include <aws/appflow/model/ZendeskDestinationProperties.h>
#include <aws/appflow/model/MarketoDestinationProperties.h>
#include <aws/appflow/model/CustomConnectorDestinationProperties.h>
#include <aws/appflow/model/SAPODataDestinationProperties.h>
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
   * <p> This stores the information that is required to query a particular
   * connector. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DestinationConnectorProperties">AWS
   * API Reference</a></p>
   */
  class DestinationConnectorProperties
  {
  public:
    AWS_APPFLOW_API DestinationConnectorProperties() = default;
    AWS_APPFLOW_API DestinationConnectorProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API DestinationConnectorProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The properties required to query Amazon Redshift. </p>
     */
    inline const RedshiftDestinationProperties& GetRedshift() const { return m_redshift; }
    inline bool RedshiftHasBeenSet() const { return m_redshiftHasBeenSet; }
    template<typename RedshiftT = RedshiftDestinationProperties>
    void SetRedshift(RedshiftT&& value) { m_redshiftHasBeenSet = true; m_redshift = std::forward<RedshiftT>(value); }
    template<typename RedshiftT = RedshiftDestinationProperties>
    DestinationConnectorProperties& WithRedshift(RedshiftT&& value) { SetRedshift(std::forward<RedshiftT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The properties required to query Amazon S3. </p>
     */
    inline const S3DestinationProperties& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = S3DestinationProperties>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = S3DestinationProperties>
    DestinationConnectorProperties& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The properties required to query Salesforce. </p>
     */
    inline const SalesforceDestinationProperties& GetSalesforce() const { return m_salesforce; }
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }
    template<typename SalesforceT = SalesforceDestinationProperties>
    void SetSalesforce(SalesforceT&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::forward<SalesforceT>(value); }
    template<typename SalesforceT = SalesforceDestinationProperties>
    DestinationConnectorProperties& WithSalesforce(SalesforceT&& value) { SetSalesforce(std::forward<SalesforceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The properties required to query Snowflake. </p>
     */
    inline const SnowflakeDestinationProperties& GetSnowflake() const { return m_snowflake; }
    inline bool SnowflakeHasBeenSet() const { return m_snowflakeHasBeenSet; }
    template<typename SnowflakeT = SnowflakeDestinationProperties>
    void SetSnowflake(SnowflakeT&& value) { m_snowflakeHasBeenSet = true; m_snowflake = std::forward<SnowflakeT>(value); }
    template<typename SnowflakeT = SnowflakeDestinationProperties>
    DestinationConnectorProperties& WithSnowflake(SnowflakeT&& value) { SetSnowflake(std::forward<SnowflakeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The properties required to query Amazon EventBridge. </p>
     */
    inline const EventBridgeDestinationProperties& GetEventBridge() const { return m_eventBridge; }
    inline bool EventBridgeHasBeenSet() const { return m_eventBridgeHasBeenSet; }
    template<typename EventBridgeT = EventBridgeDestinationProperties>
    void SetEventBridge(EventBridgeT&& value) { m_eventBridgeHasBeenSet = true; m_eventBridge = std::forward<EventBridgeT>(value); }
    template<typename EventBridgeT = EventBridgeDestinationProperties>
    DestinationConnectorProperties& WithEventBridge(EventBridgeT&& value) { SetEventBridge(std::forward<EventBridgeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The properties required to query Amazon Lookout for Metrics. </p>
     */
    inline const LookoutMetricsDestinationProperties& GetLookoutMetrics() const { return m_lookoutMetrics; }
    inline bool LookoutMetricsHasBeenSet() const { return m_lookoutMetricsHasBeenSet; }
    template<typename LookoutMetricsT = LookoutMetricsDestinationProperties>
    void SetLookoutMetrics(LookoutMetricsT&& value) { m_lookoutMetricsHasBeenSet = true; m_lookoutMetrics = std::forward<LookoutMetricsT>(value); }
    template<typename LookoutMetricsT = LookoutMetricsDestinationProperties>
    DestinationConnectorProperties& WithLookoutMetrics(LookoutMetricsT&& value) { SetLookoutMetrics(std::forward<LookoutMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The properties required to query Upsolver. </p>
     */
    inline const UpsolverDestinationProperties& GetUpsolver() const { return m_upsolver; }
    inline bool UpsolverHasBeenSet() const { return m_upsolverHasBeenSet; }
    template<typename UpsolverT = UpsolverDestinationProperties>
    void SetUpsolver(UpsolverT&& value) { m_upsolverHasBeenSet = true; m_upsolver = std::forward<UpsolverT>(value); }
    template<typename UpsolverT = UpsolverDestinationProperties>
    DestinationConnectorProperties& WithUpsolver(UpsolverT&& value) { SetUpsolver(std::forward<UpsolverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The properties required to query Amazon Honeycode. </p>
     */
    inline const HoneycodeDestinationProperties& GetHoneycode() const { return m_honeycode; }
    inline bool HoneycodeHasBeenSet() const { return m_honeycodeHasBeenSet; }
    template<typename HoneycodeT = HoneycodeDestinationProperties>
    void SetHoneycode(HoneycodeT&& value) { m_honeycodeHasBeenSet = true; m_honeycode = std::forward<HoneycodeT>(value); }
    template<typename HoneycodeT = HoneycodeDestinationProperties>
    DestinationConnectorProperties& WithHoneycode(HoneycodeT&& value) { SetHoneycode(std::forward<HoneycodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The properties required to query Amazon Connect Customer Profiles. </p>
     */
    inline const CustomerProfilesDestinationProperties& GetCustomerProfiles() const { return m_customerProfiles; }
    inline bool CustomerProfilesHasBeenSet() const { return m_customerProfilesHasBeenSet; }
    template<typename CustomerProfilesT = CustomerProfilesDestinationProperties>
    void SetCustomerProfiles(CustomerProfilesT&& value) { m_customerProfilesHasBeenSet = true; m_customerProfiles = std::forward<CustomerProfilesT>(value); }
    template<typename CustomerProfilesT = CustomerProfilesDestinationProperties>
    DestinationConnectorProperties& WithCustomerProfiles(CustomerProfilesT&& value) { SetCustomerProfiles(std::forward<CustomerProfilesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties required to query Zendesk.</p>
     */
    inline const ZendeskDestinationProperties& GetZendesk() const { return m_zendesk; }
    inline bool ZendeskHasBeenSet() const { return m_zendeskHasBeenSet; }
    template<typename ZendeskT = ZendeskDestinationProperties>
    void SetZendesk(ZendeskT&& value) { m_zendeskHasBeenSet = true; m_zendesk = std::forward<ZendeskT>(value); }
    template<typename ZendeskT = ZendeskDestinationProperties>
    DestinationConnectorProperties& WithZendesk(ZendeskT&& value) { SetZendesk(std::forward<ZendeskT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties required to query Marketo.</p>
     */
    inline const MarketoDestinationProperties& GetMarketo() const { return m_marketo; }
    inline bool MarketoHasBeenSet() const { return m_marketoHasBeenSet; }
    template<typename MarketoT = MarketoDestinationProperties>
    void SetMarketo(MarketoT&& value) { m_marketoHasBeenSet = true; m_marketo = std::forward<MarketoT>(value); }
    template<typename MarketoT = MarketoDestinationProperties>
    DestinationConnectorProperties& WithMarketo(MarketoT&& value) { SetMarketo(std::forward<MarketoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties that are required to query the custom Connector.</p>
     */
    inline const CustomConnectorDestinationProperties& GetCustomConnector() const { return m_customConnector; }
    inline bool CustomConnectorHasBeenSet() const { return m_customConnectorHasBeenSet; }
    template<typename CustomConnectorT = CustomConnectorDestinationProperties>
    void SetCustomConnector(CustomConnectorT&& value) { m_customConnectorHasBeenSet = true; m_customConnector = std::forward<CustomConnectorT>(value); }
    template<typename CustomConnectorT = CustomConnectorDestinationProperties>
    DestinationConnectorProperties& WithCustomConnector(CustomConnectorT&& value) { SetCustomConnector(std::forward<CustomConnectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties required to query SAPOData.</p>
     */
    inline const SAPODataDestinationProperties& GetSAPOData() const { return m_sAPOData; }
    inline bool SAPODataHasBeenSet() const { return m_sAPODataHasBeenSet; }
    template<typename SAPODataT = SAPODataDestinationProperties>
    void SetSAPOData(SAPODataT&& value) { m_sAPODataHasBeenSet = true; m_sAPOData = std::forward<SAPODataT>(value); }
    template<typename SAPODataT = SAPODataDestinationProperties>
    DestinationConnectorProperties& WithSAPOData(SAPODataT&& value) { SetSAPOData(std::forward<SAPODataT>(value)); return *this;}
    ///@}
  private:

    RedshiftDestinationProperties m_redshift;
    bool m_redshiftHasBeenSet = false;

    S3DestinationProperties m_s3;
    bool m_s3HasBeenSet = false;

    SalesforceDestinationProperties m_salesforce;
    bool m_salesforceHasBeenSet = false;

    SnowflakeDestinationProperties m_snowflake;
    bool m_snowflakeHasBeenSet = false;

    EventBridgeDestinationProperties m_eventBridge;
    bool m_eventBridgeHasBeenSet = false;

    LookoutMetricsDestinationProperties m_lookoutMetrics;
    bool m_lookoutMetricsHasBeenSet = false;

    UpsolverDestinationProperties m_upsolver;
    bool m_upsolverHasBeenSet = false;

    HoneycodeDestinationProperties m_honeycode;
    bool m_honeycodeHasBeenSet = false;

    CustomerProfilesDestinationProperties m_customerProfiles;
    bool m_customerProfilesHasBeenSet = false;

    ZendeskDestinationProperties m_zendesk;
    bool m_zendeskHasBeenSet = false;

    MarketoDestinationProperties m_marketo;
    bool m_marketoHasBeenSet = false;

    CustomConnectorDestinationProperties m_customConnector;
    bool m_customConnectorHasBeenSet = false;

    SAPODataDestinationProperties m_sAPOData;
    bool m_sAPODataHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
