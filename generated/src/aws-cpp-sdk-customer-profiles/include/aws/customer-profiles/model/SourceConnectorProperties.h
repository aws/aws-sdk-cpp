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
    AWS_CUSTOMERPROFILES_API SourceConnectorProperties() = default;
    AWS_CUSTOMERPROFILES_API SourceConnectorProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API SourceConnectorProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The properties that are applied when Marketo is being used as a source.</p>
     */
    inline const MarketoSourceProperties& GetMarketo() const { return m_marketo; }
    inline bool MarketoHasBeenSet() const { return m_marketoHasBeenSet; }
    template<typename MarketoT = MarketoSourceProperties>
    void SetMarketo(MarketoT&& value) { m_marketoHasBeenSet = true; m_marketo = std::forward<MarketoT>(value); }
    template<typename MarketoT = MarketoSourceProperties>
    SourceConnectorProperties& WithMarketo(MarketoT&& value) { SetMarketo(std::forward<MarketoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties that are applied when Amazon S3 is being used as the flow
     * source.</p>
     */
    inline const S3SourceProperties& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = S3SourceProperties>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = S3SourceProperties>
    SourceConnectorProperties& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties that are applied when Salesforce is being used as a
     * source.</p>
     */
    inline const SalesforceSourceProperties& GetSalesforce() const { return m_salesforce; }
    inline bool SalesforceHasBeenSet() const { return m_salesforceHasBeenSet; }
    template<typename SalesforceT = SalesforceSourceProperties>
    void SetSalesforce(SalesforceT&& value) { m_salesforceHasBeenSet = true; m_salesforce = std::forward<SalesforceT>(value); }
    template<typename SalesforceT = SalesforceSourceProperties>
    SourceConnectorProperties& WithSalesforce(SalesforceT&& value) { SetSalesforce(std::forward<SalesforceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties that are applied when ServiceNow is being used as a
     * source.</p>
     */
    inline const ServiceNowSourceProperties& GetServiceNow() const { return m_serviceNow; }
    inline bool ServiceNowHasBeenSet() const { return m_serviceNowHasBeenSet; }
    template<typename ServiceNowT = ServiceNowSourceProperties>
    void SetServiceNow(ServiceNowT&& value) { m_serviceNowHasBeenSet = true; m_serviceNow = std::forward<ServiceNowT>(value); }
    template<typename ServiceNowT = ServiceNowSourceProperties>
    SourceConnectorProperties& WithServiceNow(ServiceNowT&& value) { SetServiceNow(std::forward<ServiceNowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties that are applied when using Zendesk as a flow source.</p>
     */
    inline const ZendeskSourceProperties& GetZendesk() const { return m_zendesk; }
    inline bool ZendeskHasBeenSet() const { return m_zendeskHasBeenSet; }
    template<typename ZendeskT = ZendeskSourceProperties>
    void SetZendesk(ZendeskT&& value) { m_zendeskHasBeenSet = true; m_zendesk = std::forward<ZendeskT>(value); }
    template<typename ZendeskT = ZendeskSourceProperties>
    SourceConnectorProperties& WithZendesk(ZendeskT&& value) { SetZendesk(std::forward<ZendeskT>(value)); return *this;}
    ///@}
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
