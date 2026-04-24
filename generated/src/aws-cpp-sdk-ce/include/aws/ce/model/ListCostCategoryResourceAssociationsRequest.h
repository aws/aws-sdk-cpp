/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorerRequest.h>
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CostExplorer {
namespace Model {

/**
 */
class ListCostCategoryResourceAssociationsRequest : public CostExplorerRequest {
 public:
  AWS_COSTEXPLORER_API ListCostCategoryResourceAssociationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListCostCategoryResourceAssociations"; }

  AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

  AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier for your cost category.</p>
   */
  inline const Aws::String& GetCostCategoryArn() const { return m_costCategoryArn; }
  inline bool CostCategoryArnHasBeenSet() const { return m_costCategoryArnHasBeenSet; }
  template <typename CostCategoryArnT = Aws::String>
  void SetCostCategoryArn(CostCategoryArnT&& value) {
    m_costCategoryArnHasBeenSet = true;
    m_costCategoryArn = std::forward<CostCategoryArnT>(value);
  }
  template <typename CostCategoryArnT = Aws::String>
  ListCostCategoryResourceAssociationsRequest& WithCostCategoryArn(CostCategoryArnT&& value) {
    SetCostCategoryArn(std::forward<CostCategoryArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The token to retrieve the next set of results. Amazon Web Services provides
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
  ListCostCategoryResourceAssociationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of entries a paginated response contains. </p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListCostCategoryResourceAssociationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_costCategoryArn;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_costCategoryArnHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CostExplorer
}  // namespace Aws
