﻿/**
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


    ///@{
    /**
     * <p>The operation to be performed on the provided Marketo source fields.</p>
     */
    inline const MarketoConnectorOperator& GetMarketo() const{ return m_marketo; }
    inline bool MarketoHasBeenSet() const { return m_marketoHasBeenSet; }
    inline void SetMarketo(const MarketoConnectorOperator& value) { m_marketoHasBeenSet = true; m_marketo = value; }
    inline void SetMarketo(MarketoConnectorOperator&& value) { m_marketoHasBeenSet = true; m_marketo = std::move(value); }
    inline ConnectorOperator& WithMarketo(const MarketoConnectorOperator& value) { SetMarketo(value); return *this;}
    inline ConnectorOperator& WithMarketo(MarketoConnectorOperator&& value) { SetMarketo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation to be performed on the provided Amazon S3 source fields.</p>
     */
    inline const S3ConnectorOperator& GetS3() const{ return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    inline void SetS3(const S3ConnectorOperator& value) { m_s3HasBeenSet = true; m_s3 = value; }
    inline void SetS3(S3ConnectorOperator&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }
    inline ConnectorOperator& WithS3(const S3ConnectorOperator& value) { SetS3(value); return *this;}
    inline ConnectorOperator& WithS3(S3ConnectorOperator&& value) { SetS3(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation to be performed on the provided Salesforce source fields.</p>
     */
    inline const SalesforceConnectorOperator& GetSalesforce() const{ return m_salesforce; }
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }
    inline void SetSalesforce(const SalesforceConnectorOperator& value) { m_salesforceHasBeenSet = true; m_salesforce = value; }
    inline void SetSalesforce(SalesforceConnectorOperator&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::move(value); }
    inline ConnectorOperator& WithSalesforce(const SalesforceConnectorOperator& value) { SetSalesforce(value); return *this;}
    inline ConnectorOperator& WithSalesforce(SalesforceConnectorOperator&& value) { SetSalesforce(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation to be performed on the provided ServiceNow source fields.</p>
     */
    inline const ServiceNowConnectorOperator& GetServiceNow() const{ return m_serviceNow; }
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }
    inline void SetServiceNow(const ServiceNowConnectorOperator& value) { m_serviceNowHasBeenSet = true; m_serviceNow = value; }
    inline void SetServiceNow(ServiceNowConnectorOperator&& value) { m_serviceNowHasBeenSet = true; m_serviceNow = std::move(value); }
    inline ConnectorOperator& WithServiceNow(const ServiceNowConnectorOperator& value) { SetServiceNow(value); return *this;}
    inline ConnectorOperator& WithServiceNow(ServiceNowConnectorOperator&& value) { SetServiceNow(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation to be performed on the provided Zendesk source fields.</p>
     */
    inline const ZendeskConnectorOperator& GetZendesk() const{ return m_zendesk; }
    inline bool ZendeskHasBeenSet() const { return m_zendeskHasBeenSet; }
    inline void SetZendesk(const ZendeskConnectorOperator& value) { m_zendeskHasBeenSet = true; m_zendesk = value; }
    inline void SetZendesk(ZendeskConnectorOperator&& value) { m_zendeskHasBeenSet = true; m_zendesk = std::move(value); }
    inline ConnectorOperator& WithZendesk(const ZendeskConnectorOperator& value) { SetZendesk(value); return *this;}
    inline ConnectorOperator& WithZendesk(ZendeskConnectorOperator&& value) { SetZendesk(std::move(value)); return *this;}
    ///@}
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
