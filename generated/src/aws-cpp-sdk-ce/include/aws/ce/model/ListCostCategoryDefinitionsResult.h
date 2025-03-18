/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/CostCategoryReference.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CostExplorer
{
namespace Model
{
  class ListCostCategoryDefinitionsResult
  {
  public:
    AWS_COSTEXPLORER_API ListCostCategoryDefinitionsResult() = default;
    AWS_COSTEXPLORER_API ListCostCategoryDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API ListCostCategoryDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A reference to a Cost Category that contains enough information to identify
     * the Cost Category. </p>
     */
    inline const Aws::Vector<CostCategoryReference>& GetCostCategoryReferences() const { return m_costCategoryReferences; }
    template<typename CostCategoryReferencesT = Aws::Vector<CostCategoryReference>>
    void SetCostCategoryReferences(CostCategoryReferencesT&& value) { m_costCategoryReferencesHasBeenSet = true; m_costCategoryReferences = std::forward<CostCategoryReferencesT>(value); }
    template<typename CostCategoryReferencesT = Aws::Vector<CostCategoryReference>>
    ListCostCategoryDefinitionsResult& WithCostCategoryReferences(CostCategoryReferencesT&& value) { SetCostCategoryReferences(std::forward<CostCategoryReferencesT>(value)); return *this;}
    template<typename CostCategoryReferencesT = CostCategoryReference>
    ListCostCategoryDefinitionsResult& AddCostCategoryReferences(CostCategoryReferencesT&& value) { m_costCategoryReferencesHasBeenSet = true; m_costCategoryReferences.emplace_back(std::forward<CostCategoryReferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCostCategoryDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCostCategoryDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CostCategoryReference> m_costCategoryReferences;
    bool m_costCategoryReferencesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
