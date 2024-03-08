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
  class AcceptSubscriptionRequestRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API AcceptSubscriptionRequestRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptSubscriptionRequest"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>A description that specifies the reason for accepting the specified
     * subscription request.</p>
     */
    inline const Aws::String& GetDecisionComment() const{ return m_decisionComment; }

    /**
     * <p>A description that specifies the reason for accepting the specified
     * subscription request.</p>
     */
    inline bool DecisionCommentHasBeenSet() const { return m_decisionCommentHasBeenSet; }

    /**
     * <p>A description that specifies the reason for accepting the specified
     * subscription request.</p>
     */
    inline void SetDecisionComment(const Aws::String& value) { m_decisionCommentHasBeenSet = true; m_decisionComment = value; }

    /**
     * <p>A description that specifies the reason for accepting the specified
     * subscription request.</p>
     */
    inline void SetDecisionComment(Aws::String&& value) { m_decisionCommentHasBeenSet = true; m_decisionComment = std::move(value); }

    /**
     * <p>A description that specifies the reason for accepting the specified
     * subscription request.</p>
     */
    inline void SetDecisionComment(const char* value) { m_decisionCommentHasBeenSet = true; m_decisionComment.assign(value); }

    /**
     * <p>A description that specifies the reason for accepting the specified
     * subscription request.</p>
     */
    inline AcceptSubscriptionRequestRequest& WithDecisionComment(const Aws::String& value) { SetDecisionComment(value); return *this;}

    /**
     * <p>A description that specifies the reason for accepting the specified
     * subscription request.</p>
     */
    inline AcceptSubscriptionRequestRequest& WithDecisionComment(Aws::String&& value) { SetDecisionComment(std::move(value)); return *this;}

    /**
     * <p>A description that specifies the reason for accepting the specified
     * subscription request.</p>
     */
    inline AcceptSubscriptionRequestRequest& WithDecisionComment(const char* value) { SetDecisionComment(value); return *this;}


    /**
     * <p>The Amazon DataZone domain where the specified subscription request is being
     * accepted.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The Amazon DataZone domain where the specified subscription request is being
     * accepted.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The Amazon DataZone domain where the specified subscription request is being
     * accepted.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The Amazon DataZone domain where the specified subscription request is being
     * accepted.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The Amazon DataZone domain where the specified subscription request is being
     * accepted.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The Amazon DataZone domain where the specified subscription request is being
     * accepted.</p>
     */
    inline AcceptSubscriptionRequestRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The Amazon DataZone domain where the specified subscription request is being
     * accepted.</p>
     */
    inline AcceptSubscriptionRequestRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone domain where the specified subscription request is being
     * accepted.</p>
     */
    inline AcceptSubscriptionRequestRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The unique identifier of the subscription request that is to be accepted.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The unique identifier of the subscription request that is to be accepted.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The unique identifier of the subscription request that is to be accepted.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The unique identifier of the subscription request that is to be accepted.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The unique identifier of the subscription request that is to be accepted.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The unique identifier of the subscription request that is to be accepted.</p>
     */
    inline AcceptSubscriptionRequestRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the subscription request that is to be accepted.</p>
     */
    inline AcceptSubscriptionRequestRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the subscription request that is to be accepted.</p>
     */
    inline AcceptSubscriptionRequestRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}

  private:

    Aws::String m_decisionComment;
    bool m_decisionCommentHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
