/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/FormInput.h>
#include <aws/datazone/model/SubscribedListingInput.h>
#include <aws/datazone/model/SubscribedPrincipalInput.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class CreateSubscriptionRequestRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateSubscriptionRequestRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSubscriptionRequest"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateSubscriptionRequestRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription request is
     * created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    CreateSubscriptionRequestRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata form included in the subscription request.</p>
     */
    inline const Aws::Vector<FormInput>& GetMetadataForms() const { return m_metadataForms; }
    inline bool MetadataFormsHasBeenSet() const { return m_metadataFormsHasBeenSet; }
    template<typename MetadataFormsT = Aws::Vector<FormInput>>
    void SetMetadataForms(MetadataFormsT&& value) { m_metadataFormsHasBeenSet = true; m_metadataForms = std::forward<MetadataFormsT>(value); }
    template<typename MetadataFormsT = Aws::Vector<FormInput>>
    CreateSubscriptionRequestRequest& WithMetadataForms(MetadataFormsT&& value) { SetMetadataForms(std::forward<MetadataFormsT>(value)); return *this;}
    template<typename MetadataFormsT = FormInput>
    CreateSubscriptionRequestRequest& AddMetadataForms(MetadataFormsT&& value) { m_metadataFormsHasBeenSet = true; m_metadataForms.emplace_back(std::forward<MetadataFormsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The reason for the subscription request.</p>
     */
    inline const Aws::String& GetRequestReason() const { return m_requestReason; }
    inline bool RequestReasonHasBeenSet() const { return m_requestReasonHasBeenSet; }
    template<typename RequestReasonT = Aws::String>
    void SetRequestReason(RequestReasonT&& value) { m_requestReasonHasBeenSet = true; m_requestReason = std::forward<RequestReasonT>(value); }
    template<typename RequestReasonT = Aws::String>
    CreateSubscriptionRequestRequest& WithRequestReason(RequestReasonT&& value) { SetRequestReason(std::forward<RequestReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The published asset for which the subscription grant is to be created.</p>
     */
    inline const Aws::Vector<SubscribedListingInput>& GetSubscribedListings() const { return m_subscribedListings; }
    inline bool SubscribedListingsHasBeenSet() const { return m_subscribedListingsHasBeenSet; }
    template<typename SubscribedListingsT = Aws::Vector<SubscribedListingInput>>
    void SetSubscribedListings(SubscribedListingsT&& value) { m_subscribedListingsHasBeenSet = true; m_subscribedListings = std::forward<SubscribedListingsT>(value); }
    template<typename SubscribedListingsT = Aws::Vector<SubscribedListingInput>>
    CreateSubscriptionRequestRequest& WithSubscribedListings(SubscribedListingsT&& value) { SetSubscribedListings(std::forward<SubscribedListingsT>(value)); return *this;}
    template<typename SubscribedListingsT = SubscribedListingInput>
    CreateSubscriptionRequestRequest& AddSubscribedListings(SubscribedListingsT&& value) { m_subscribedListingsHasBeenSet = true; m_subscribedListings.emplace_back(std::forward<SubscribedListingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone principals for whom the subscription request is
     * created.</p>
     */
    inline const Aws::Vector<SubscribedPrincipalInput>& GetSubscribedPrincipals() const { return m_subscribedPrincipals; }
    inline bool SubscribedPrincipalsHasBeenSet() const { return m_subscribedPrincipalsHasBeenSet; }
    template<typename SubscribedPrincipalsT = Aws::Vector<SubscribedPrincipalInput>>
    void SetSubscribedPrincipals(SubscribedPrincipalsT&& value) { m_subscribedPrincipalsHasBeenSet = true; m_subscribedPrincipals = std::forward<SubscribedPrincipalsT>(value); }
    template<typename SubscribedPrincipalsT = Aws::Vector<SubscribedPrincipalInput>>
    CreateSubscriptionRequestRequest& WithSubscribedPrincipals(SubscribedPrincipalsT&& value) { SetSubscribedPrincipals(std::forward<SubscribedPrincipalsT>(value)); return *this;}
    template<typename SubscribedPrincipalsT = SubscribedPrincipalInput>
    CreateSubscriptionRequestRequest& AddSubscribedPrincipals(SubscribedPrincipalsT&& value) { m_subscribedPrincipalsHasBeenSet = true; m_subscribedPrincipals.emplace_back(std::forward<SubscribedPrincipalsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::Vector<FormInput> m_metadataForms;
    bool m_metadataFormsHasBeenSet = false;

    Aws::String m_requestReason;
    bool m_requestReasonHasBeenSet = false;

    Aws::Vector<SubscribedListingInput> m_subscribedListings;
    bool m_subscribedListingsHasBeenSet = false;

    Aws::Vector<SubscribedPrincipalInput> m_subscribedPrincipals;
    bool m_subscribedPrincipalsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
