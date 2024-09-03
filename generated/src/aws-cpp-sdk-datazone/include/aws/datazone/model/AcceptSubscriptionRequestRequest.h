/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/AcceptedAssetScope.h>
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


    ///@{
    /**
     * <p>The asset scopes of the accept subscription request.</p>
     */
    inline const Aws::Vector<AcceptedAssetScope>& GetAssetScopes() const{ return m_assetScopes; }
    inline bool AssetScopesHasBeenSet() const { return m_assetScopesHasBeenSet; }
    inline void SetAssetScopes(const Aws::Vector<AcceptedAssetScope>& value) { m_assetScopesHasBeenSet = true; m_assetScopes = value; }
    inline void SetAssetScopes(Aws::Vector<AcceptedAssetScope>&& value) { m_assetScopesHasBeenSet = true; m_assetScopes = std::move(value); }
    inline AcceptSubscriptionRequestRequest& WithAssetScopes(const Aws::Vector<AcceptedAssetScope>& value) { SetAssetScopes(value); return *this;}
    inline AcceptSubscriptionRequestRequest& WithAssetScopes(Aws::Vector<AcceptedAssetScope>&& value) { SetAssetScopes(std::move(value)); return *this;}
    inline AcceptSubscriptionRequestRequest& AddAssetScopes(const AcceptedAssetScope& value) { m_assetScopesHasBeenSet = true; m_assetScopes.push_back(value); return *this; }
    inline AcceptSubscriptionRequestRequest& AddAssetScopes(AcceptedAssetScope&& value) { m_assetScopesHasBeenSet = true; m_assetScopes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description that specifies the reason for accepting the specified
     * subscription request.</p>
     */
    inline const Aws::String& GetDecisionComment() const{ return m_decisionComment; }
    inline bool DecisionCommentHasBeenSet() const { return m_decisionCommentHasBeenSet; }
    inline void SetDecisionComment(const Aws::String& value) { m_decisionCommentHasBeenSet = true; m_decisionComment = value; }
    inline void SetDecisionComment(Aws::String&& value) { m_decisionCommentHasBeenSet = true; m_decisionComment = std::move(value); }
    inline void SetDecisionComment(const char* value) { m_decisionCommentHasBeenSet = true; m_decisionComment.assign(value); }
    inline AcceptSubscriptionRequestRequest& WithDecisionComment(const Aws::String& value) { SetDecisionComment(value); return *this;}
    inline AcceptSubscriptionRequestRequest& WithDecisionComment(Aws::String&& value) { SetDecisionComment(std::move(value)); return *this;}
    inline AcceptSubscriptionRequestRequest& WithDecisionComment(const char* value) { SetDecisionComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone domain where the specified subscription request is being
     * accepted.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline AcceptSubscriptionRequestRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline AcceptSubscriptionRequestRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline AcceptSubscriptionRequestRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the subscription request that is to be accepted.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline AcceptSubscriptionRequestRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline AcceptSubscriptionRequestRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline AcceptSubscriptionRequestRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}
  private:

    Aws::Vector<AcceptedAssetScope> m_assetScopes;
    bool m_assetScopesHasBeenSet = false;

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
