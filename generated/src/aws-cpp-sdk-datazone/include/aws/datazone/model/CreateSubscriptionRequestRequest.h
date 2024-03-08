/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_DATAZONE_API CreateSubscriptionRequestRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSubscriptionRequest"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateSubscriptionRequestRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateSubscriptionRequestRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateSubscriptionRequestRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription request is
     * created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription request is
     * created.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription request is
     * created.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription request is
     * created.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription request is
     * created.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription request is
     * created.</p>
     */
    inline CreateSubscriptionRequestRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription request is
     * created.</p>
     */
    inline CreateSubscriptionRequestRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription request is
     * created.</p>
     */
    inline CreateSubscriptionRequestRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The reason for the subscription request.</p>
     */
    inline const Aws::String& GetRequestReason() const{ return m_requestReason; }

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline bool RequestReasonHasBeenSet() const { return m_requestReasonHasBeenSet; }

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline void SetRequestReason(const Aws::String& value) { m_requestReasonHasBeenSet = true; m_requestReason = value; }

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline void SetRequestReason(Aws::String&& value) { m_requestReasonHasBeenSet = true; m_requestReason = std::move(value); }

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline void SetRequestReason(const char* value) { m_requestReasonHasBeenSet = true; m_requestReason.assign(value); }

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline CreateSubscriptionRequestRequest& WithRequestReason(const Aws::String& value) { SetRequestReason(value); return *this;}

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline CreateSubscriptionRequestRequest& WithRequestReason(Aws::String&& value) { SetRequestReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the subscription request.</p>
     */
    inline CreateSubscriptionRequestRequest& WithRequestReason(const char* value) { SetRequestReason(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<SubscribedListingInput>& GetSubscribedListings() const{ return m_subscribedListings; }

    /**
     * <p/>
     */
    inline bool SubscribedListingsHasBeenSet() const { return m_subscribedListingsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSubscribedListings(const Aws::Vector<SubscribedListingInput>& value) { m_subscribedListingsHasBeenSet = true; m_subscribedListings = value; }

    /**
     * <p/>
     */
    inline void SetSubscribedListings(Aws::Vector<SubscribedListingInput>&& value) { m_subscribedListingsHasBeenSet = true; m_subscribedListings = std::move(value); }

    /**
     * <p/>
     */
    inline CreateSubscriptionRequestRequest& WithSubscribedListings(const Aws::Vector<SubscribedListingInput>& value) { SetSubscribedListings(value); return *this;}

    /**
     * <p/>
     */
    inline CreateSubscriptionRequestRequest& WithSubscribedListings(Aws::Vector<SubscribedListingInput>&& value) { SetSubscribedListings(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline CreateSubscriptionRequestRequest& AddSubscribedListings(const SubscribedListingInput& value) { m_subscribedListingsHasBeenSet = true; m_subscribedListings.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline CreateSubscriptionRequestRequest& AddSubscribedListings(SubscribedListingInput&& value) { m_subscribedListingsHasBeenSet = true; m_subscribedListings.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon DataZone principals for whom the subscription request is
     * created.</p>
     */
    inline const Aws::Vector<SubscribedPrincipalInput>& GetSubscribedPrincipals() const{ return m_subscribedPrincipals; }

    /**
     * <p>The Amazon DataZone principals for whom the subscription request is
     * created.</p>
     */
    inline bool SubscribedPrincipalsHasBeenSet() const { return m_subscribedPrincipalsHasBeenSet; }

    /**
     * <p>The Amazon DataZone principals for whom the subscription request is
     * created.</p>
     */
    inline void SetSubscribedPrincipals(const Aws::Vector<SubscribedPrincipalInput>& value) { m_subscribedPrincipalsHasBeenSet = true; m_subscribedPrincipals = value; }

    /**
     * <p>The Amazon DataZone principals for whom the subscription request is
     * created.</p>
     */
    inline void SetSubscribedPrincipals(Aws::Vector<SubscribedPrincipalInput>&& value) { m_subscribedPrincipalsHasBeenSet = true; m_subscribedPrincipals = std::move(value); }

    /**
     * <p>The Amazon DataZone principals for whom the subscription request is
     * created.</p>
     */
    inline CreateSubscriptionRequestRequest& WithSubscribedPrincipals(const Aws::Vector<SubscribedPrincipalInput>& value) { SetSubscribedPrincipals(value); return *this;}

    /**
     * <p>The Amazon DataZone principals for whom the subscription request is
     * created.</p>
     */
    inline CreateSubscriptionRequestRequest& WithSubscribedPrincipals(Aws::Vector<SubscribedPrincipalInput>&& value) { SetSubscribedPrincipals(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone principals for whom the subscription request is
     * created.</p>
     */
    inline CreateSubscriptionRequestRequest& AddSubscribedPrincipals(const SubscribedPrincipalInput& value) { m_subscribedPrincipalsHasBeenSet = true; m_subscribedPrincipals.push_back(value); return *this; }

    /**
     * <p>The Amazon DataZone principals for whom the subscription request is
     * created.</p>
     */
    inline CreateSubscriptionRequestRequest& AddSubscribedPrincipals(SubscribedPrincipalInput&& value) { m_subscribedPrincipalsHasBeenSet = true; m_subscribedPrincipals.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

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
