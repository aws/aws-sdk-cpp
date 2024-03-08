/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class UpdateSubscriptionRequestRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API UpdateSubscriptionRequestRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSubscriptionRequest"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription request
     * is to be updated.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription request
     * is to be updated.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription request
     * is to be updated.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription request
     * is to be updated.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription request
     * is to be updated.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription request
     * is to be updated.</p>
     */
    inline UpdateSubscriptionRequestRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription request
     * is to be updated.</p>
     */
    inline UpdateSubscriptionRequestRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription request
     * is to be updated.</p>
     */
    inline UpdateSubscriptionRequestRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The identifier of the subscription request that is to be updated.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier of the subscription request that is to be updated.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier of the subscription request that is to be updated.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier of the subscription request that is to be updated.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier of the subscription request that is to be updated.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier of the subscription request that is to be updated.</p>
     */
    inline UpdateSubscriptionRequestRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier of the subscription request that is to be updated.</p>
     */
    inline UpdateSubscriptionRequestRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the subscription request that is to be updated.</p>
     */
    inline UpdateSubscriptionRequestRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The reason for the <code>UpdateSubscriptionRequest</code> action.</p>
     */
    inline const Aws::String& GetRequestReason() const{ return m_requestReason; }

    /**
     * <p>The reason for the <code>UpdateSubscriptionRequest</code> action.</p>
     */
    inline bool RequestReasonHasBeenSet() const { return m_requestReasonHasBeenSet; }

    /**
     * <p>The reason for the <code>UpdateSubscriptionRequest</code> action.</p>
     */
    inline void SetRequestReason(const Aws::String& value) { m_requestReasonHasBeenSet = true; m_requestReason = value; }

    /**
     * <p>The reason for the <code>UpdateSubscriptionRequest</code> action.</p>
     */
    inline void SetRequestReason(Aws::String&& value) { m_requestReasonHasBeenSet = true; m_requestReason = std::move(value); }

    /**
     * <p>The reason for the <code>UpdateSubscriptionRequest</code> action.</p>
     */
    inline void SetRequestReason(const char* value) { m_requestReasonHasBeenSet = true; m_requestReason.assign(value); }

    /**
     * <p>The reason for the <code>UpdateSubscriptionRequest</code> action.</p>
     */
    inline UpdateSubscriptionRequestRequest& WithRequestReason(const Aws::String& value) { SetRequestReason(value); return *this;}

    /**
     * <p>The reason for the <code>UpdateSubscriptionRequest</code> action.</p>
     */
    inline UpdateSubscriptionRequestRequest& WithRequestReason(Aws::String&& value) { SetRequestReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the <code>UpdateSubscriptionRequest</code> action.</p>
     */
    inline UpdateSubscriptionRequestRequest& WithRequestReason(const char* value) { SetRequestReason(value); return *this;}

  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_requestReason;
    bool m_requestReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
