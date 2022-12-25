/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/MarketoSourceProperties.h>
#include <aws/customer-profiles/model/S3SourceProperties.h>
#include <aws/customer-profiles/model/SalesforceSourceProperties.h>
#include <aws/customer-profiles/model/ServiceNowSourceProperties.h>
#include <aws/customer-profiles/model/ZendeskSourceProperties.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Specifies the information that is required to query a particular Amazon
   * AppFlow connector. Customer Profiles supports Salesforce, Zendesk, Marketo,
   * ServiceNow and Amazon S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/SourceConnectorProperties">AWS
   * API Reference</a></p>
   */
  class SourceConnectorProperties
  {
  public:
    AWS_CUSTOMERPROFILES_API SourceConnectorProperties();
    AWS_CUSTOMERPROFILES_API SourceConnectorProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API SourceConnectorProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The properties that are applied when Marketo is being used as a source.</p>
     */
    inline const MarketoSourceProperties& GetMarketo() const{ return m_marketo; }

    /**
     * <p>The properties that are applied when Marketo is being used as a source.</p>
     */
    inline bool MarketoHasBeenSet() const { return m_marketoHasBeenSet; }

    /**
     * <p>The properties that are applied when Marketo is being used as a source.</p>
     */
    inline void SetMarketo(const MarketoSourceProperties& value) { m_marketoHasBeenSet = true; m_marketo = value; }

    /**
     * <p>The properties that are applied when Marketo is being used as a source.</p>
     */
    inline void SetMarketo(MarketoSourceProperties&& value) { m_marketoHasBeenSet = true; m_marketo = std::move(value); }

    /**
     * <p>The properties that are applied when Marketo is being used as a source.</p>
     */
    inline SourceConnectorProperties& WithMarketo(const MarketoSourceProperties& value) { SetMarketo(value); return *this;}

    /**
     * <p>The properties that are applied when Marketo is being used as a source.</p>
     */
    inline SourceConnectorProperties& WithMarketo(MarketoSourceProperties&& value) { SetMarketo(std::move(value)); return *this;}


    /**
     * <p>The properties that are applied when Amazon S3 is being used as the flow
     * source.</p>
     */
    inline const S3SourceProperties& GetS3() const{ return m_s3; }

    /**
     * <p>The properties that are applied when Amazon S3 is being used as the flow
     * source.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p>The properties that are applied when Amazon S3 is being used as the flow
     * source.</p>
     */
    inline void SetS3(const S3SourceProperties& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>The properties that are applied when Amazon S3 is being used as the flow
     * source.</p>
     */
    inline void SetS3(S3SourceProperties&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>The properties that are applied when Amazon S3 is being used as the flow
     * source.</p>
     */
    inline SourceConnectorProperties& WithS3(const S3SourceProperties& value) { SetS3(value); return *this;}

    /**
     * <p>The properties that are applied when Amazon S3 is being used as the flow
     * source.</p>
     */
    inline SourceConnectorProperties& WithS3(S3SourceProperties&& value) { SetS3(std::move(value)); return *this;}


    /**
     * <p>The properties that are applied when Salesforce is being used as a
     * source.</p>
     */
    inline const SalesforceSourceProperties& GetSalesforce() const{ return m_salesforce; }

    /**
     * <p>The properties that are applied when Salesforce is being used as a
     * source.</p>
     */
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }

    /**
     * <p>The properties that are applied when Salesforce is being used as a
     * source.</p>
     */
    inline void SetSalesforce(const SalesforceSourceProperties& value) { m_salesforceHasBeenSet = true; m_salesforce = value; }

    /**
     * <p>The properties that are applied when Salesforce is being used as a
     * source.</p>
     */
    inline void SetSalesforce(SalesforceSourceProperties&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::move(value); }

    /**
     * <p>The properties that are applied when Salesforce is being used as a
     * source.</p>
     */
    inline SourceConnectorProperties& WithSalesforce(const SalesforceSourceProperties& value) { SetSalesforce(value); return *this;}

    /**
     * <p>The properties that are applied when Salesforce is being used as a
     * source.</p>
     */
    inline SourceConnectorProperties& WithSalesforce(SalesforceSourceProperties&& value) { SetSalesforce(std::move(value)); return *this;}


    /**
     * <p>The properties that are applied when ServiceNow is being used as a
     * source.</p>
     */
    inline const ServiceNowSourceProperties& GetServiceNow() const{ return m_serviceNow; }

    /**
     * <p>The properties that are applied when ServiceNow is being used as a
     * source.</p>
     */
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }

    /**
     * <p>The properties that are applied when ServiceNow is being used as a
     * source.</p>
     */
    inline void SetServiceNow(const ServiceNowSourceProperties& value) { m_serviceNowHasBeenSet = true; m_serviceNow = value; }

    /**
     * <p>The properties that are applied when ServiceNow is being used as a
     * source.</p>
     */
    inline void SetServiceNow(ServiceNowSourceProperties&& value) { m_serviceNowHasBeenSet = true; m_serviceNow = std::move(value); }

    /**
     * <p>The properties that are applied when ServiceNow is being used as a
     * source.</p>
     */
    inline SourceConnectorProperties& WithServiceNow(const ServiceNowSourceProperties& value) { SetServiceNow(value); return *this;}

    /**
     * <p>The properties that are applied when ServiceNow is being used as a
     * source.</p>
     */
    inline SourceConnectorProperties& WithServiceNow(ServiceNowSourceProperties&& value) { SetServiceNow(std::move(value)); return *this;}


    /**
     * <p>The properties that are applied when using Zendesk as a flow source.</p>
     */
    inline const ZendeskSourceProperties& GetZendesk() const{ return m_zendesk; }

    /**
     * <p>The properties that are applied when using Zendesk as a flow source.</p>
     */
    inline bool ZendeskHasBeenSet() const { return m_zendeskHasBeenSet; }

    /**
     * <p>The properties that are applied when using Zendesk as a flow source.</p>
     */
    inline void SetZendesk(const ZendeskSourceProperties& value) { m_zendeskHasBeenSet = true; m_zendesk = value; }

    /**
     * <p>The properties that are applied when using Zendesk as a flow source.</p>
     */
    inline void SetZendesk(ZendeskSourceProperties&& value) { m_zendeskHasBeenSet = true; m_zendesk = std::move(value); }

    /**
     * <p>The properties that are applied when using Zendesk as a flow source.</p>
     */
    inline SourceConnectorProperties& WithZendesk(const ZendeskSourceProperties& value) { SetZendesk(value); return *this;}

    /**
     * <p>The properties that are applied when using Zendesk as a flow source.</p>
     */
    inline SourceConnectorProperties& WithZendesk(ZendeskSourceProperties&& value) { SetZendesk(std::move(value)); return *this;}

  private:

    MarketoSourceProperties m_marketo;
    bool m_marketoHasBeenSet = false;

    S3SourceProperties m_s3;
    bool m_s3HasBeenSet = false;

    SalesforceSourceProperties m_salesforce;
    bool m_salesforceHasBeenSet = false;

    ServiceNowSourceProperties m_serviceNow;
    bool m_serviceNowHasBeenSet = false;

    ZendeskSourceProperties m_zendesk;
    bool m_zendeskHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
