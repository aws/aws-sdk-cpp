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

  class AWS_CUSTOMERPROFILES_API ConnectorOperator
  {
  public:
    ConnectorOperator();
    ConnectorOperator(Aws::Utils::Json::JsonView jsonValue);
    ConnectorOperator& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const MarketoConnectorOperator& GetMarketo() const{ return m_marketo; }

    
    inline bool MarketoHasBeenSet() const { return m_marketoHasBeenSet; }

    
    inline void SetMarketo(const MarketoConnectorOperator& value) { m_marketoHasBeenSet = true; m_marketo = value; }

    
    inline void SetMarketo(MarketoConnectorOperator&& value) { m_marketoHasBeenSet = true; m_marketo = std::move(value); }

    
    inline ConnectorOperator& WithMarketo(const MarketoConnectorOperator& value) { SetMarketo(value); return *this;}

    
    inline ConnectorOperator& WithMarketo(MarketoConnectorOperator&& value) { SetMarketo(std::move(value)); return *this;}


    
    inline const S3ConnectorOperator& GetS3() const{ return m_s3; }

    
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    
    inline void SetS3(const S3ConnectorOperator& value) { m_s3HasBeenSet = true; m_s3 = value; }

    
    inline void SetS3(S3ConnectorOperator&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    
    inline ConnectorOperator& WithS3(const S3ConnectorOperator& value) { SetS3(value); return *this;}

    
    inline ConnectorOperator& WithS3(S3ConnectorOperator&& value) { SetS3(std::move(value)); return *this;}


    
    inline const SalesforceConnectorOperator& GetSalesforce() const{ return m_salesforce; }

    
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }

    
    inline void SetSalesforce(const SalesforceConnectorOperator& value) { m_salesforceHasBeenSet = true; m_salesforce = value; }

    
    inline void SetSalesforce(SalesforceConnectorOperator&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::move(value); }

    
    inline ConnectorOperator& WithSalesforce(const SalesforceConnectorOperator& value) { SetSalesforce(value); return *this;}

    
    inline ConnectorOperator& WithSalesforce(SalesforceConnectorOperator&& value) { SetSalesforce(std::move(value)); return *this;}


    
    inline const ServiceNowConnectorOperator& GetServiceNow() const{ return m_serviceNow; }

    
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }

    
    inline void SetServiceNow(const ServiceNowConnectorOperator& value) { m_serviceNowHasBeenSet = true; m_serviceNow = value; }

    
    inline void SetServiceNow(ServiceNowConnectorOperator&& value) { m_serviceNowHasBeenSet = true; m_serviceNow = std::move(value); }

    
    inline ConnectorOperator& WithServiceNow(const ServiceNowConnectorOperator& value) { SetServiceNow(value); return *this;}

    
    inline ConnectorOperator& WithServiceNow(ServiceNowConnectorOperator&& value) { SetServiceNow(std::move(value)); return *this;}


    
    inline const ZendeskConnectorOperator& GetZendesk() const{ return m_zendesk; }

    
    inline bool ZendeskHasBeenSet() const { return m_zendeskHasBeenSet; }

    
    inline void SetZendesk(const ZendeskConnectorOperator& value) { m_zendeskHasBeenSet = true; m_zendesk = value; }

    
    inline void SetZendesk(ZendeskConnectorOperator&& value) { m_zendeskHasBeenSet = true; m_zendesk = std::move(value); }

    
    inline ConnectorOperator& WithZendesk(const ZendeskConnectorOperator& value) { SetZendesk(value); return *this;}

    
    inline ConnectorOperator& WithZendesk(ZendeskConnectorOperator&& value) { SetZendesk(std::move(value)); return *this;}

  private:

    MarketoConnectorOperator m_marketo;
    bool m_marketoHasBeenSet;

    S3ConnectorOperator m_s3;
    bool m_s3HasBeenSet;

    SalesforceConnectorOperator m_salesforce;
    bool m_salesforceHasBeenSet;

    ServiceNowConnectorOperator m_serviceNow;
    bool m_serviceNowHasBeenSet;

    ZendeskConnectorOperator m_zendesk;
    bool m_zendeskHasBeenSet;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
