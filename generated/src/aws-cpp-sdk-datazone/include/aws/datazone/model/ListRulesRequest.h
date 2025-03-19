/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/model/RuleAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/RuleType.h>
#include <aws/datazone/model/RuleTargetType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DataZone
{
namespace Model
{

  /**
   */
  class ListRulesRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListRulesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRules"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The action of the rule.</p>
     */
    inline RuleAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(RuleAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline ListRulesRequest& WithAction(RuleAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset types of the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssetTypes() const { return m_assetTypes; }
    inline bool AssetTypesHasBeenSet() const { return m_assetTypesHasBeenSet; }
    template<typename AssetTypesT = Aws::Vector<Aws::String>>
    void SetAssetTypes(AssetTypesT&& value) { m_assetTypesHasBeenSet = true; m_assetTypes = std::forward<AssetTypesT>(value); }
    template<typename AssetTypesT = Aws::Vector<Aws::String>>
    ListRulesRequest& WithAssetTypes(AssetTypesT&& value) { SetAssetTypes(std::forward<AssetTypesT>(value)); return *this;}
    template<typename AssetTypesT = Aws::String>
    ListRulesRequest& AddAssetTypes(AssetTypesT&& value) { m_assetTypesHasBeenSet = true; m_assetTypes.emplace_back(std::forward<AssetTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data product of the rule.</p>
     */
    inline bool GetDataProduct() const { return m_dataProduct; }
    inline bool DataProductHasBeenSet() const { return m_dataProductHasBeenSet; }
    inline void SetDataProduct(bool value) { m_dataProductHasBeenSet = true; m_dataProduct = value; }
    inline ListRulesRequest& WithDataProduct(bool value) { SetDataProduct(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain in which the rules are to be listed.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    ListRulesRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include cascading rules in the results.</p>
     */
    inline bool GetIncludeCascaded() const { return m_includeCascaded; }
    inline bool IncludeCascadedHasBeenSet() const { return m_includeCascadedHasBeenSet; }
    inline void SetIncludeCascaded(bool value) { m_includeCascadedHasBeenSet = true; m_includeCascaded = value; }
    inline ListRulesRequest& WithIncludeCascaded(bool value) { SetIncludeCascaded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of rules to return in a single call to
     * <code>ListRules</code>. When the number of rules to be listed is greater than
     * the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListRules</code> to list the next set of rules.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of rules is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of rules, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to <code>ListRules</code> to
     * list the next set of rules.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRulesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of projects in which rules are to be listed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProjectIds() const { return m_projectIds; }
    inline bool ProjectIdsHasBeenSet() const { return m_projectIdsHasBeenSet; }
    template<typename ProjectIdsT = Aws::Vector<Aws::String>>
    void SetProjectIds(ProjectIdsT&& value) { m_projectIdsHasBeenSet = true; m_projectIds = std::forward<ProjectIdsT>(value); }
    template<typename ProjectIdsT = Aws::Vector<Aws::String>>
    ListRulesRequest& WithProjectIds(ProjectIdsT&& value) { SetProjectIds(std::forward<ProjectIdsT>(value)); return *this;}
    template<typename ProjectIdsT = Aws::String>
    ListRulesRequest& AddProjectIds(ProjectIdsT&& value) { m_projectIdsHasBeenSet = true; m_projectIds.emplace_back(std::forward<ProjectIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the rule.</p>
     */
    inline RuleType GetRuleType() const { return m_ruleType; }
    inline bool RuleTypeHasBeenSet() const { return m_ruleTypeHasBeenSet; }
    inline void SetRuleType(RuleType value) { m_ruleTypeHasBeenSet = true; m_ruleType = value; }
    inline ListRulesRequest& WithRuleType(RuleType value) { SetRuleType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target ID of the rule.</p>
     */
    inline const Aws::String& GetTargetIdentifier() const { return m_targetIdentifier; }
    inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }
    template<typename TargetIdentifierT = Aws::String>
    void SetTargetIdentifier(TargetIdentifierT&& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = std::forward<TargetIdentifierT>(value); }
    template<typename TargetIdentifierT = Aws::String>
    ListRulesRequest& WithTargetIdentifier(TargetIdentifierT&& value) { SetTargetIdentifier(std::forward<TargetIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target type of the rule.</p>
     */
    inline RuleTargetType GetTargetType() const { return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(RuleTargetType value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline ListRulesRequest& WithTargetType(RuleTargetType value) { SetTargetType(value); return *this;}
    ///@}
  private:

    RuleAction m_action{RuleAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::Vector<Aws::String> m_assetTypes;
    bool m_assetTypesHasBeenSet = false;

    bool m_dataProduct{false};
    bool m_dataProductHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    bool m_includeCascaded{false};
    bool m_includeCascadedHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_projectIds;
    bool m_projectIdsHasBeenSet = false;

    RuleType m_ruleType{RuleType::NOT_SET};
    bool m_ruleTypeHasBeenSet = false;

    Aws::String m_targetIdentifier;
    bool m_targetIdentifierHasBeenSet = false;

    RuleTargetType m_targetType{RuleTargetType::NOT_SET};
    bool m_targetTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
