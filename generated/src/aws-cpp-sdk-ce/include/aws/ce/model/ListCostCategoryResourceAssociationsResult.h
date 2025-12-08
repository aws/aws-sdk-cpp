/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/CostCategoryResourceAssociation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CostExplorer {
namespace Model {
class ListCostCategoryResourceAssociationsResult {
 public:
  AWS_COSTEXPLORER_API ListCostCategoryResourceAssociationsResult() = default;
  AWS_COSTEXPLORER_API ListCostCategoryResourceAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COSTEXPLORER_API ListCostCategoryResourceAssociationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> A reference to a cost category association that contains information on an
   * associated resource. </p>
   */
  inline const Aws::Vector<CostCategoryResourceAssociation>& GetCostCategoryResourceAssociations() const {
    return m_costCategoryResourceAssociations;
  }
  template <typename CostCategoryResourceAssociationsT = Aws::Vector<CostCategoryResourceAssociation>>
  void SetCostCategoryResourceAssociations(CostCategoryResourceAssociationsT&& value) {
    m_costCategoryResourceAssociationsHasBeenSet = true;
    m_costCategoryResourceAssociations = std::forward<CostCategoryResourceAssociationsT>(value);
  }
  template <typename CostCategoryResourceAssociationsT = Aws::Vector<CostCategoryResourceAssociation>>
  ListCostCategoryResourceAssociationsResult& WithCostCategoryResourceAssociations(CostCategoryResourceAssociationsT&& value) {
    SetCostCategoryResourceAssociations(std::forward<CostCategoryResourceAssociationsT>(value));
    return *this;
  }
  template <typename CostCategoryResourceAssociationsT = CostCategoryResourceAssociation>
  ListCostCategoryResourceAssociationsResult& AddCostCategoryResourceAssociations(CostCategoryResourceAssociationsT&& value) {
    m_costCategoryResourceAssociationsHasBeenSet = true;
    m_costCategoryResourceAssociations.emplace_back(std::forward<CostCategoryResourceAssociationsT>(value));
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
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListCostCategoryResourceAssociationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListCostCategoryResourceAssociationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CostCategoryResourceAssociation> m_costCategoryResourceAssociations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_costCategoryResourceAssociationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CostExplorer
}  // namespace Aws
