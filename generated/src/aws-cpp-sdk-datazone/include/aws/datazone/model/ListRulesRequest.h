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
    AWS_DATAZONE_API ListRulesRequest();

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
    inline const RuleAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const RuleAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(RuleAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline ListRulesRequest& WithAction(const RuleAction& value) { SetAction(value); return *this;}
    inline ListRulesRequest& WithAction(RuleAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset types of the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssetTypes() const{ return m_assetTypes; }
    inline bool AssetTypesHasBeenSet() const { return m_assetTypesHasBeenSet; }
    inline void SetAssetTypes(const Aws::Vector<Aws::String>& value) { m_assetTypesHasBeenSet = true; m_assetTypes = value; }
    inline void SetAssetTypes(Aws::Vector<Aws::String>&& value) { m_assetTypesHasBeenSet = true; m_assetTypes = std::move(value); }
    inline ListRulesRequest& WithAssetTypes(const Aws::Vector<Aws::String>& value) { SetAssetTypes(value); return *this;}
    inline ListRulesRequest& WithAssetTypes(Aws::Vector<Aws::String>&& value) { SetAssetTypes(std::move(value)); return *this;}
    inline ListRulesRequest& AddAssetTypes(const Aws::String& value) { m_assetTypesHasBeenSet = true; m_assetTypes.push_back(value); return *this; }
    inline ListRulesRequest& AddAssetTypes(Aws::String&& value) { m_assetTypesHasBeenSet = true; m_assetTypes.push_back(std::move(value)); return *this; }
    inline ListRulesRequest& AddAssetTypes(const char* value) { m_assetTypesHasBeenSet = true; m_assetTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data product of the rule.</p>
     */
    inline bool GetDataProduct() const{ return m_dataProduct; }
    inline bool DataProductHasBeenSet() const { return m_dataProductHasBeenSet; }
    inline void SetDataProduct(bool value) { m_dataProductHasBeenSet = true; m_dataProduct = value; }
    inline ListRulesRequest& WithDataProduct(bool value) { SetDataProduct(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain in which the rules are to be listed.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline ListRulesRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline ListRulesRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline ListRulesRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include cascading rules in the results.</p>
     */
    inline bool GetIncludeCascaded() const{ return m_includeCascaded; }
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
    inline int GetMaxResults() const{ return m_maxResults; }
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
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListRulesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRulesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRulesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of projects in which rules are to be listed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProjectIds() const{ return m_projectIds; }
    inline bool ProjectIdsHasBeenSet() const { return m_projectIdsHasBeenSet; }
    inline void SetProjectIds(const Aws::Vector<Aws::String>& value) { m_projectIdsHasBeenSet = true; m_projectIds = value; }
    inline void SetProjectIds(Aws::Vector<Aws::String>&& value) { m_projectIdsHasBeenSet = true; m_projectIds = std::move(value); }
    inline ListRulesRequest& WithProjectIds(const Aws::Vector<Aws::String>& value) { SetProjectIds(value); return *this;}
    inline ListRulesRequest& WithProjectIds(Aws::Vector<Aws::String>&& value) { SetProjectIds(std::move(value)); return *this;}
    inline ListRulesRequest& AddProjectIds(const Aws::String& value) { m_projectIdsHasBeenSet = true; m_projectIds.push_back(value); return *this; }
    inline ListRulesRequest& AddProjectIds(Aws::String&& value) { m_projectIdsHasBeenSet = true; m_projectIds.push_back(std::move(value)); return *this; }
    inline ListRulesRequest& AddProjectIds(const char* value) { m_projectIdsHasBeenSet = true; m_projectIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the rule.</p>
     */
    inline const RuleType& GetRuleType() const{ return m_ruleType; }
    inline bool RuleTypeHasBeenSet() const { return m_ruleTypeHasBeenSet; }
    inline void SetRuleType(const RuleType& value) { m_ruleTypeHasBeenSet = true; m_ruleType = value; }
    inline void SetRuleType(RuleType&& value) { m_ruleTypeHasBeenSet = true; m_ruleType = std::move(value); }
    inline ListRulesRequest& WithRuleType(const RuleType& value) { SetRuleType(value); return *this;}
    inline ListRulesRequest& WithRuleType(RuleType&& value) { SetRuleType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target ID of the rule.</p>
     */
    inline const Aws::String& GetTargetIdentifier() const{ return m_targetIdentifier; }
    inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }
    inline void SetTargetIdentifier(const Aws::String& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = value; }
    inline void SetTargetIdentifier(Aws::String&& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = std::move(value); }
    inline void SetTargetIdentifier(const char* value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier.assign(value); }
    inline ListRulesRequest& WithTargetIdentifier(const Aws::String& value) { SetTargetIdentifier(value); return *this;}
    inline ListRulesRequest& WithTargetIdentifier(Aws::String&& value) { SetTargetIdentifier(std::move(value)); return *this;}
    inline ListRulesRequest& WithTargetIdentifier(const char* value) { SetTargetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target type of the rule.</p>
     */
    inline const RuleTargetType& GetTargetType() const{ return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(const RuleTargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline void SetTargetType(RuleTargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }
    inline ListRulesRequest& WithTargetType(const RuleTargetType& value) { SetTargetType(value); return *this;}
    inline ListRulesRequest& WithTargetType(RuleTargetType&& value) { SetTargetType(std::move(value)); return *this;}
    ///@}
  private:

    RuleAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::Vector<Aws::String> m_assetTypes;
    bool m_assetTypesHasBeenSet = false;

    bool m_dataProduct;
    bool m_dataProductHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    bool m_includeCascaded;
    bool m_includeCascadedHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_projectIds;
    bool m_projectIdsHasBeenSet = false;

    RuleType m_ruleType;
    bool m_ruleTypeHasBeenSet = false;

    Aws::String m_targetIdentifier;
    bool m_targetIdentifierHasBeenSet = false;

    RuleTargetType m_targetType;
    bool m_targetTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
