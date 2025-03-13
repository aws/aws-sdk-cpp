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
    AWS_DATAZONE_API AcceptSubscriptionRequestRequest() = default;

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
    inline const Aws::Vector<AcceptedAssetScope>& GetAssetScopes() const { return m_assetScopes; }
    inline bool AssetScopesHasBeenSet() const { return m_assetScopesHasBeenSet; }
    template<typename AssetScopesT = Aws::Vector<AcceptedAssetScope>>
    void SetAssetScopes(AssetScopesT&& value) { m_assetScopesHasBeenSet = true; m_assetScopes = std::forward<AssetScopesT>(value); }
    template<typename AssetScopesT = Aws::Vector<AcceptedAssetScope>>
    AcceptSubscriptionRequestRequest& WithAssetScopes(AssetScopesT&& value) { SetAssetScopes(std::forward<AssetScopesT>(value)); return *this;}
    template<typename AssetScopesT = AcceptedAssetScope>
    AcceptSubscriptionRequestRequest& AddAssetScopes(AssetScopesT&& value) { m_assetScopesHasBeenSet = true; m_assetScopes.emplace_back(std::forward<AssetScopesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description that specifies the reason for accepting the specified
     * subscription request.</p>
     */
    inline const Aws::String& GetDecisionComment() const { return m_decisionComment; }
    inline bool DecisionCommentHasBeenSet() const { return m_decisionCommentHasBeenSet; }
    template<typename DecisionCommentT = Aws::String>
    void SetDecisionComment(DecisionCommentT&& value) { m_decisionCommentHasBeenSet = true; m_decisionComment = std::forward<DecisionCommentT>(value); }
    template<typename DecisionCommentT = Aws::String>
    AcceptSubscriptionRequestRequest& WithDecisionComment(DecisionCommentT&& value) { SetDecisionComment(std::forward<DecisionCommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone domain where the specified subscription request is being
     * accepted.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    AcceptSubscriptionRequestRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the subscription request that is to be accepted.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    AcceptSubscriptionRequestRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
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
