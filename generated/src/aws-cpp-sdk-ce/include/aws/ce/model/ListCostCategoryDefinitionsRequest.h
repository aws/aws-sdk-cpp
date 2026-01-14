/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorerRequest.h>
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace CostExplorer {
namespace Model {

/**
 */
class ListCostCategoryDefinitionsRequest : public CostExplorerRequest {
 public:
  AWS_COSTEXPLORER_API ListCostCategoryDefinitionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListCostCategoryDefinitions"; }

  AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

  AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The date when the cost category was effective. </p>
   */
  inline const Aws::String& GetEffectiveOn() const { return m_effectiveOn; }
  inline bool EffectiveOnHasBeenSet() const { return m_effectiveOnHasBeenSet; }
  template <typename EffectiveOnT = Aws::String>
  void SetEffectiveOn(EffectiveOnT&& value) {
    m_effectiveOnHasBeenSet = true;
    m_effectiveOn = std::forward<EffectiveOnT>(value);
  }
  template <typename EffectiveOnT = Aws::String>
  ListCostCategoryDefinitionsRequest& WithEffectiveOn(EffectiveOnT&& value) {
    SetEffectiveOn(std::forward<EffectiveOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to retrieve the next set of results. Amazon Web Services provides
   * the token when the response from a previous call has more results than the
   * maximum page size. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListCostCategoryDefinitionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of entries a paginated response contains. </p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListCostCategoryDefinitionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Filter cost category definitions that are supported by given resource types
   * based on the latest version. If the filter is present, the result only includes
   * Cost Categories that supports input resource type. If the filter isn't provided,
   * no filtering is applied. The valid values are
   * <code>billing:rispgroupsharing</code> and <code>billing:billingview</code>. </p>
   */
  inline const Aws::Vector<Aws::String>& GetSupportedResourceTypes() const { return m_supportedResourceTypes; }
  inline bool SupportedResourceTypesHasBeenSet() const { return m_supportedResourceTypesHasBeenSet; }
  template <typename SupportedResourceTypesT = Aws::Vector<Aws::String>>
  void SetSupportedResourceTypes(SupportedResourceTypesT&& value) {
    m_supportedResourceTypesHasBeenSet = true;
    m_supportedResourceTypes = std::forward<SupportedResourceTypesT>(value);
  }
  template <typename SupportedResourceTypesT = Aws::Vector<Aws::String>>
  ListCostCategoryDefinitionsRequest& WithSupportedResourceTypes(SupportedResourceTypesT&& value) {
    SetSupportedResourceTypes(std::forward<SupportedResourceTypesT>(value));
    return *this;
  }
  template <typename SupportedResourceTypesT = Aws::String>
  ListCostCategoryDefinitionsRequest& AddSupportedResourceTypes(SupportedResourceTypesT&& value) {
    m_supportedResourceTypesHasBeenSet = true;
    m_supportedResourceTypes.emplace_back(std::forward<SupportedResourceTypesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_effectiveOn;

  Aws::String m_nextToken;

  int m_maxResults{0};

  Aws::Vector<Aws::String> m_supportedResourceTypes;
  bool m_effectiveOnHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_supportedResourceTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CostExplorer
}  // namespace Aws
