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
  class RejectSubscriptionRequestRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API RejectSubscriptionRequestRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectSubscriptionRequest"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The decision comment of the rejected subscription request.</p>
     */
    inline const Aws::String& GetDecisionComment() const{ return m_decisionComment; }
    inline bool DecisionCommentHasBeenSet() const { return m_decisionCommentHasBeenSet; }
    inline void SetDecisionComment(const Aws::String& value) { m_decisionCommentHasBeenSet = true; m_decisionComment = value; }
    inline void SetDecisionComment(Aws::String&& value) { m_decisionCommentHasBeenSet = true; m_decisionComment = std::move(value); }
    inline void SetDecisionComment(const char* value) { m_decisionCommentHasBeenSet = true; m_decisionComment.assign(value); }
    inline RejectSubscriptionRequestRequest& WithDecisionComment(const Aws::String& value) { SetDecisionComment(value); return *this;}
    inline RejectSubscriptionRequestRequest& WithDecisionComment(Aws::String&& value) { SetDecisionComment(std::move(value)); return *this;}
    inline RejectSubscriptionRequestRequest& WithDecisionComment(const char* value) { SetDecisionComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which the subscription
     * request was rejected.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline RejectSubscriptionRequestRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline RejectSubscriptionRequestRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline RejectSubscriptionRequestRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription request that was rejected.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline RejectSubscriptionRequestRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline RejectSubscriptionRequestRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline RejectSubscriptionRequestRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}
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
