/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Endpoint.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/Campaign.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Request object with information to create a contact.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactDataRequest">AWS
   * API Reference</a></p>
   */
  class ContactDataRequest
  {
  public:
    AWS_CONNECT_API ContactDataRequest() = default;
    AWS_CONNECT_API ContactDataRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactDataRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Endpoint associated with the Amazon Connect instance from which outbound
     * contact will be initiated for the campaign.</p>
     */
    inline const Endpoint& GetSystemEndpoint() const { return m_systemEndpoint; }
    inline bool SystemEndpointHasBeenSet() const { return m_systemEndpointHasBeenSet; }
    template<typename SystemEndpointT = Endpoint>
    void SetSystemEndpoint(SystemEndpointT&& value) { m_systemEndpointHasBeenSet = true; m_systemEndpoint = std::forward<SystemEndpointT>(value); }
    template<typename SystemEndpointT = Endpoint>
    ContactDataRequest& WithSystemEndpoint(SystemEndpointT&& value) { SetSystemEndpoint(std::forward<SystemEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Endpoint of the customer for which contact will be initiated.</p>
     */
    inline const Endpoint& GetCustomerEndpoint() const { return m_customerEndpoint; }
    inline bool CustomerEndpointHasBeenSet() const { return m_customerEndpointHasBeenSet; }
    template<typename CustomerEndpointT = Endpoint>
    void SetCustomerEndpoint(CustomerEndpointT&& value) { m_customerEndpointHasBeenSet = true; m_customerEndpoint = std::forward<CustomerEndpointT>(value); }
    template<typename CustomerEndpointT = Endpoint>
    ContactDataRequest& WithCustomerEndpoint(CustomerEndpointT&& value) { SetCustomerEndpoint(std::forward<CustomerEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier to uniquely identify individual requests in the batch.</p>
     */
    inline const Aws::String& GetRequestIdentifier() const { return m_requestIdentifier; }
    inline bool RequestIdentifierHasBeenSet() const { return m_requestIdentifierHasBeenSet; }
    template<typename RequestIdentifierT = Aws::String>
    void SetRequestIdentifier(RequestIdentifierT&& value) { m_requestIdentifierHasBeenSet = true; m_requestIdentifier = std::forward<RequestIdentifierT>(value); }
    template<typename RequestIdentifierT = Aws::String>
    ContactDataRequest& WithRequestIdentifier(RequestIdentifierT&& value) { SetRequestIdentifier(std::forward<RequestIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the queue associated with the Amazon Connect instance in
     * which contacts that are created will be queued.</p>
     */
    inline const Aws::String& GetQueueId() const { return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    template<typename QueueIdT = Aws::String>
    void SetQueueId(QueueIdT&& value) { m_queueIdHasBeenSet = true; m_queueId = std::forward<QueueIdT>(value); }
    template<typename QueueIdT = Aws::String>
    ContactDataRequest& WithQueueId(QueueIdT&& value) { SetQueueId(std::forward<QueueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of attributes to be stored in a contact.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    ContactDataRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    ContactDataRequest& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Structure to store information associated with a campaign.</p>
     */
    inline const Campaign& GetCampaign() const { return m_campaign; }
    inline bool CampaignHasBeenSet() const { return m_campaignHasBeenSet; }
    template<typename CampaignT = Campaign>
    void SetCampaign(CampaignT&& value) { m_campaignHasBeenSet = true; m_campaign = std::forward<CampaignT>(value); }
    template<typename CampaignT = Campaign>
    ContactDataRequest& WithCampaign(CampaignT&& value) { SetCampaign(std::forward<CampaignT>(value)); return *this;}
    ///@}
  private:

    Endpoint m_systemEndpoint;
    bool m_systemEndpointHasBeenSet = false;

    Endpoint m_customerEndpoint;
    bool m_customerEndpointHasBeenSet = false;

    Aws::String m_requestIdentifier;
    bool m_requestIdentifierHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Campaign m_campaign;
    bool m_campaignHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
