/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/MarketoConnectorOperator.h>
#include <aws/customer-profiles/model/S3ConnectorOperator.h>
#include <aws/customer-profiles/model/SalesforceConnectorOperator.h>
#include <aws/customer-profiles/model/ServiceNowConnectorOperator.h>
#include <aws/customer-profiles/model/ZendeskConnectorOperator.h>
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
   * <p>The operation to be performed on the provided source fields.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ConnectorOperator">AWS
   * API Reference</a></p>
   */
  class ConnectorOperator
  {
  public:
    AWS_CUSTOMERPROFILES_API ConnectorOperator();
    AWS_CUSTOMERPROFILES_API ConnectorOperator(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ConnectorOperator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operation to be performed on the provided Marketo source fields.</p>
     */
    inline const MarketoConnectorOperator& GetMarketo() const{ return m_marketo; }

    /**
     * <p>The operation to be performed on the provided Marketo source fields.</p>
     */
    inline bool MarketoHasBeenSet() const { return m_marketoHasBeenSet; }

    /**
     * <p>The operation to be performed on the provided Marketo source fields.</p>
     */
    inline void SetMarketo(const MarketoConnectorOperator& value) { m_marketoHasBeenSet = true; m_marketo = value; }

    /**
     * <p>The operation to be performed on the provided Marketo source fields.</p>
     */
    inline void SetMarketo(MarketoConnectorOperator&& value) { m_marketoHasBeenSet = true; m_marketo = std::move(value); }

    /**
     * <p>The operation to be performed on the provided Marketo source fields.</p>
     */
    inline ConnectorOperator& WithMarketo(const MarketoConnectorOperator& value) { SetMarketo(value); return *this;}

    /**
     * <p>The operation to be performed on the provided Marketo source fields.</p>
     */
    inline ConnectorOperator& WithMarketo(MarketoConnectorOperator&& value) { SetMarketo(std::move(value)); return *this;}


    /**
     * <p>The operation to be performed on the provided Amazon S3 source fields.</p>
     */
    inline const S3ConnectorOperator& GetS3() const{ return m_s3; }

    /**
     * <p>The operation to be performed on the provided Amazon S3 source fields.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p>The operation to be performed on the provided Amazon S3 source fields.</p>
     */
    inline void SetS3(const S3ConnectorOperator& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>The operation to be performed on the provided Amazon S3 source fields.</p>
     */
    inline void SetS3(S3ConnectorOperator&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>The operation to be performed on the provided Amazon S3 source fields.</p>
     */
    inline ConnectorOperator& WithS3(const S3ConnectorOperator& value) { SetS3(value); return *this;}

    /**
     * <p>The operation to be performed on the provided Amazon S3 source fields.</p>
     */
    inline ConnectorOperator& WithS3(S3ConnectorOperator&& value) { SetS3(std::move(value)); return *this;}


    /**
     * <p>The operation to be performed on the provided Salesforce source fields.</p>
     */
    inline const SalesforceConnectorOperator& GetSalesforce() const{ return m_salesforce; }

    /**
     * <p>The operation to be performed on the provided Salesforce source fields.</p>
     */
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }

    /**
     * <p>The operation to be performed on the provided Salesforce source fields.</p>
     */
    inline void SetSalesforce(const SalesforceConnectorOperator& value) { m_salesforceHasBeenSet = true; m_salesforce = value; }

    /**
     * <p>The operation to be performed on the provided Salesforce source fields.</p>
     */
    inline void SetSalesforce(SalesforceConnectorOperator&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::move(value); }

    /**
     * <p>The operation to be performed on the provided Salesforce source fields.</p>
     */
    inline ConnectorOperator& WithSalesforce(const SalesforceConnectorOperator& value) { SetSalesforce(value); return *this;}

    /**
     * <p>The operation to be performed on the provided Salesforce source fields.</p>
     */
    inline ConnectorOperator& WithSalesforce(SalesforceConnectorOperator&& value) { SetSalesforce(std::move(value)); return *this;}


    /**
     * <p>The operation to be performed on the provided ServiceNow source fields.</p>
     */
    inline const ServiceNowConnectorOperator& GetServiceNow() const{ return m_serviceNow; }

    /**
     * <p>The operation to be performed on the provided ServiceNow source fields.</p>
     */
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }

    /**
     * <p>The operation to be performed on the provided ServiceNow source fields.</p>
     */
    inline void SetServiceNow(const ServiceNowConnectorOperator& value) { m_serviceNowHasBeenSet = true; m_serviceNow = value; }

    /**
     * <p>The operation to be performed on the provided ServiceNow source fields.</p>
     */
    inline void SetServiceNow(ServiceNowConnectorOperator&& value) { m_serviceNowHasBeenSet = true; m_serviceNow = std::move(value); }

    /**
     * <p>The operation to be performed on the provided ServiceNow source fields.</p>
     */
    inline ConnectorOperator& WithServiceNow(const ServiceNowConnectorOperator& value) { SetServiceNow(value); return *this;}

    /**
     * <p>The operation to be performed on the provided ServiceNow source fields.</p>
     */
    inline ConnectorOperator& WithServiceNow(ServiceNowConnectorOperator&& value) { SetServiceNow(std::move(value)); return *this;}


    /**
     * <p>The operation to be performed on the provided Zendesk source fields.</p>
     */
    inline const ZendeskConnectorOperator& GetZendesk() const{ return m_zendesk; }

    /**
     * <p>The operation to be performed on the provided Zendesk source fields.</p>
     */
    inline bool ZendeskHasBeenSet() const { return m_zendeskHasBeenSet; }

    /**
     * <p>The operation to be performed on the provided Zendesk source fields.</p>
     */
    inline void SetZendesk(const ZendeskConnectorOperator& value) { m_zendeskHasBeenSet = true; m_zendesk = value; }

    /**
     * <p>The operation to be performed on the provided Zendesk source fields.</p>
     */
    inline void SetZendesk(ZendeskConnectorOperator&& value) { m_zendeskHasBeenSet = true; m_zendesk = std::move(value); }

    /**
     * <p>The operation to be performed on the provided Zendesk source fields.</p>
     */
    inline ConnectorOperator& WithZendesk(const ZendeskConnectorOperator& value) { SetZendesk(value); return *this;}

    /**
     * <p>The operation to be performed on the provided Zendesk source fields.</p>
     */
    inline ConnectorOperator& WithZendesk(ZendeskConnectorOperator&& value) { SetZendesk(std::move(value)); return *this;}

  private:

    MarketoConnectorOperator m_marketo;
    bool m_marketoHasBeenSet = false;

    S3ConnectorOperator m_s3;
    bool m_s3HasBeenSet = false;

    SalesforceConnectorOperator m_salesforce;
    bool m_salesforceHasBeenSet = false;

    ServiceNowConnectorOperator m_serviceNow;
    bool m_serviceNowHasBeenSet = false;

    ZendeskConnectorOperator m_zendesk;
    bool m_zendeskHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
