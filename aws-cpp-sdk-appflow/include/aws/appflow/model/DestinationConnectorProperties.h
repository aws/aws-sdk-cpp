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
  class AWS_APPFLOW_API DestinationConnectorProperties
  {
  public:
    DestinationConnectorProperties();
    DestinationConnectorProperties(Aws::Utils::Json::JsonView jsonValue);
    DestinationConnectorProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The properties required to query Amazon Redshift. </p>
     */
    inline const RedshiftDestinationProperties& GetRedshift() const{ return m_redshift; }

    /**
     * <p> The properties required to query Amazon Redshift. </p>
     */
    inline bool RedshiftHasBeenSet() const { return m_redshiftHasBeenSet; }

    /**
     * <p> The properties required to query Amazon Redshift. </p>
     */
    inline void SetRedshift(const RedshiftDestinationProperties& value) { m_redshiftHasBeenSet = true; m_redshift = value; }

    /**
     * <p> The properties required to query Amazon Redshift. </p>
     */
    inline void SetRedshift(RedshiftDestinationProperties&& value) { m_redshiftHasBeenSet = true; m_redshift = std::move(value); }

    /**
     * <p> The properties required to query Amazon Redshift. </p>
     */
    inline DestinationConnectorProperties& WithRedshift(const RedshiftDestinationProperties& value) { SetRedshift(value); return *this;}

    /**
     * <p> The properties required to query Amazon Redshift. </p>
     */
    inline DestinationConnectorProperties& WithRedshift(RedshiftDestinationProperties&& value) { SetRedshift(std::move(value)); return *this;}


    /**
     * <p> The properties required to query Amazon S3. </p>
     */
    inline const S3DestinationProperties& GetS3() const{ return m_s3; }

    /**
     * <p> The properties required to query Amazon S3. </p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p> The properties required to query Amazon S3. </p>
     */
    inline void SetS3(const S3DestinationProperties& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p> The properties required to query Amazon S3. </p>
     */
    inline void SetS3(S3DestinationProperties&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p> The properties required to query Amazon S3. </p>
     */
    inline DestinationConnectorProperties& WithS3(const S3DestinationProperties& value) { SetS3(value); return *this;}

    /**
     * <p> The properties required to query Amazon S3. </p>
     */
    inline DestinationConnectorProperties& WithS3(S3DestinationProperties&& value) { SetS3(std::move(value)); return *this;}


    /**
     * <p> The properties required to query Salesforce. </p>
     */
    inline const SalesforceDestinationProperties& GetSalesforce() const{ return m_salesforce; }

    /**
     * <p> The properties required to query Salesforce. </p>
     */
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }

    /**
     * <p> The properties required to query Salesforce. </p>
     */
    inline void SetSalesforce(const SalesforceDestinationProperties& value) { m_salesforceHasBeenSet = true; m_salesforce = value; }

    /**
     * <p> The properties required to query Salesforce. </p>
     */
    inline void SetSalesforce(SalesforceDestinationProperties&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::move(value); }

    /**
     * <p> The properties required to query Salesforce. </p>
     */
    inline DestinationConnectorProperties& WithSalesforce(const SalesforceDestinationProperties& value) { SetSalesforce(value); return *this;}

    /**
     * <p> The properties required to query Salesforce. </p>
     */
    inline DestinationConnectorProperties& WithSalesforce(SalesforceDestinationProperties&& value) { SetSalesforce(std::move(value)); return *this;}


    /**
     * <p> The properties required to query Snowflake. </p>
     */
    inline const SnowflakeDestinationProperties& GetSnowflake() const{ return m_snowflake; }

    /**
     * <p> The properties required to query Snowflake. </p>
     */
    inline bool SnowflakeHasBeenSet() const { return m_snowflakeHasBeenSet; }

    /**
     * <p> The properties required to query Snowflake. </p>
     */
    inline void SetSnowflake(const SnowflakeDestinationProperties& value) { m_snowflakeHasBeenSet = true; m_snowflake = value; }

    /**
     * <p> The properties required to query Snowflake. </p>
     */
    inline void SetSnowflake(SnowflakeDestinationProperties&& value) { m_snowflakeHasBeenSet = true; m_snowflake = std::move(value); }

    /**
     * <p> The properties required to query Snowflake. </p>
     */
    inline DestinationConnectorProperties& WithSnowflake(const SnowflakeDestinationProperties& value) { SetSnowflake(value); return *this;}

    /**
     * <p> The properties required to query Snowflake. </p>
     */
    inline DestinationConnectorProperties& WithSnowflake(SnowflakeDestinationProperties&& value) { SetSnowflake(std::move(value)); return *this;}


    /**
     * <p> The properties required to query Amazon EventBridge. </p>
     */
    inline const EventBridgeDestinationProperties& GetEventBridge() const{ return m_eventBridge; }

    /**
     * <p> The properties required to query Amazon EventBridge. </p>
     */
    inline bool EventBridgeHasBeenSet() const { return m_eventBridgeHasBeenSet; }

    /**
     * <p> The properties required to query Amazon EventBridge. </p>
     */
    inline void SetEventBridge(const EventBridgeDestinationProperties& value) { m_eventBridgeHasBeenSet = true; m_eventBridge = value; }

    /**
     * <p> The properties required to query Amazon EventBridge. </p>
     */
    inline void SetEventBridge(EventBridgeDestinationProperties&& value) { m_eventBridgeHasBeenSet = true; m_eventBridge = std::move(value); }

    /**
     * <p> The properties required to query Amazon EventBridge. </p>
     */
    inline DestinationConnectorProperties& WithEventBridge(const EventBridgeDestinationProperties& value) { SetEventBridge(value); return *this;}

    /**
     * <p> The properties required to query Amazon EventBridge. </p>
     */
    inline DestinationConnectorProperties& WithEventBridge(EventBridgeDestinationProperties&& value) { SetEventBridge(std::move(value)); return *this;}


    /**
     * <p> The properties required to query Amazon Lookout for Metrics. </p>
     */
    inline const LookoutMetricsDestinationProperties& GetLookoutMetrics() const{ return m_lookoutMetrics; }

    /**
     * <p> The properties required to query Amazon Lookout for Metrics. </p>
     */
    inline bool LookoutMetricsHasBeenSet() const { return m_lookoutMetricsHasBeenSet; }

    /**
     * <p> The properties required to query Amazon Lookout for Metrics. </p>
     */
    inline void SetLookoutMetrics(const LookoutMetricsDestinationProperties& value) { m_lookoutMetricsHasBeenSet = true; m_lookoutMetrics = value; }

    /**
     * <p> The properties required to query Amazon Lookout for Metrics. </p>
     */
    inline void SetLookoutMetrics(LookoutMetricsDestinationProperties&& value) { m_lookoutMetricsHasBeenSet = true; m_lookoutMetrics = std::move(value); }

    /**
     * <p> The properties required to query Amazon Lookout for Metrics. </p>
     */
    inline DestinationConnectorProperties& WithLookoutMetrics(const LookoutMetricsDestinationProperties& value) { SetLookoutMetrics(value); return *this;}

    /**
     * <p> The properties required to query Amazon Lookout for Metrics. </p>
     */
    inline DestinationConnectorProperties& WithLookoutMetrics(LookoutMetricsDestinationProperties&& value) { SetLookoutMetrics(std::move(value)); return *this;}


    /**
     * <p> The properties required to query Upsolver. </p>
     */
    inline const UpsolverDestinationProperties& GetUpsolver() const{ return m_upsolver; }

    /**
     * <p> The properties required to query Upsolver. </p>
     */
    inline bool UpsolverHasBeenSet() const { return m_upsolverHasBeenSet; }

    /**
     * <p> The properties required to query Upsolver. </p>
     */
    inline void SetUpsolver(const UpsolverDestinationProperties& value) { m_upsolverHasBeenSet = true; m_upsolver = value; }

    /**
     * <p> The properties required to query Upsolver. </p>
     */
    inline void SetUpsolver(UpsolverDestinationProperties&& value) { m_upsolverHasBeenSet = true; m_upsolver = std::move(value); }

    /**
     * <p> The properties required to query Upsolver. </p>
     */
    inline DestinationConnectorProperties& WithUpsolver(const UpsolverDestinationProperties& value) { SetUpsolver(value); return *this;}

    /**
     * <p> The properties required to query Upsolver. </p>
     */
    inline DestinationConnectorProperties& WithUpsolver(UpsolverDestinationProperties&& value) { SetUpsolver(std::move(value)); return *this;}


    /**
     * <p> The properties required to query Amazon Honeycode. </p>
     */
    inline const HoneycodeDestinationProperties& GetHoneycode() const{ return m_honeycode; }

    /**
     * <p> The properties required to query Amazon Honeycode. </p>
     */
    inline bool HoneycodeHasBeenSet() const { return m_honeycodeHasBeenSet; }

    /**
     * <p> The properties required to query Amazon Honeycode. </p>
     */
    inline void SetHoneycode(const HoneycodeDestinationProperties& value) { m_honeycodeHasBeenSet = true; m_honeycode = value; }

    /**
     * <p> The properties required to query Amazon Honeycode. </p>
     */
    inline void SetHoneycode(HoneycodeDestinationProperties&& value) { m_honeycodeHasBeenSet = true; m_honeycode = std::move(value); }

    /**
     * <p> The properties required to query Amazon Honeycode. </p>
     */
    inline DestinationConnectorProperties& WithHoneycode(const HoneycodeDestinationProperties& value) { SetHoneycode(value); return *this;}

    /**
     * <p> The properties required to query Amazon Honeycode. </p>
     */
    inline DestinationConnectorProperties& WithHoneycode(HoneycodeDestinationProperties&& value) { SetHoneycode(std::move(value)); return *this;}


    /**
     * <p> The properties required to query Amazon Connect Customer Profiles. </p>
     */
    inline const CustomerProfilesDestinationProperties& GetCustomerProfiles() const{ return m_customerProfiles; }

    /**
     * <p> The properties required to query Amazon Connect Customer Profiles. </p>
     */
    inline bool CustomerProfilesHasBeenSet() const { return m_customerProfilesHasBeenSet; }

    /**
     * <p> The properties required to query Amazon Connect Customer Profiles. </p>
     */
    inline void SetCustomerProfiles(const CustomerProfilesDestinationProperties& value) { m_customerProfilesHasBeenSet = true; m_customerProfiles = value; }

    /**
     * <p> The properties required to query Amazon Connect Customer Profiles. </p>
     */
    inline void SetCustomerProfiles(CustomerProfilesDestinationProperties&& value) { m_customerProfilesHasBeenSet = true; m_customerProfiles = std::move(value); }

    /**
     * <p> The properties required to query Amazon Connect Customer Profiles. </p>
     */
    inline DestinationConnectorProperties& WithCustomerProfiles(const CustomerProfilesDestinationProperties& value) { SetCustomerProfiles(value); return *this;}

    /**
     * <p> The properties required to query Amazon Connect Customer Profiles. </p>
     */
    inline DestinationConnectorProperties& WithCustomerProfiles(CustomerProfilesDestinationProperties&& value) { SetCustomerProfiles(std::move(value)); return *this;}

  private:

    RedshiftDestinationProperties m_redshift;
    bool m_redshiftHasBeenSet;

    S3DestinationProperties m_s3;
    bool m_s3HasBeenSet;

    SalesforceDestinationProperties m_salesforce;
    bool m_salesforceHasBeenSet;

    SnowflakeDestinationProperties m_snowflake;
    bool m_snowflakeHasBeenSet;

    EventBridgeDestinationProperties m_eventBridge;
    bool m_eventBridgeHasBeenSet;

    LookoutMetricsDestinationProperties m_lookoutMetrics;
    bool m_lookoutMetricsHasBeenSet;

    UpsolverDestinationProperties m_upsolver;
    bool m_upsolverHasBeenSet;

    HoneycodeDestinationProperties m_honeycode;
    bool m_honeycodeHasBeenSet;

    CustomerProfilesDestinationProperties m_customerProfiles;
    bool m_customerProfilesHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
