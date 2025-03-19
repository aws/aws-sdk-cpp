/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/CostAllocationTag.h>
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
  class ListCostAllocationTagsResult
  {
  public:
    AWS_COSTEXPLORER_API ListCostAllocationTagsResult() = default;
    AWS_COSTEXPLORER_API ListCostAllocationTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API ListCostAllocationTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of cost allocation tags that includes the detailed metadata for each
     * one. </p>
     */
    inline const Aws::Vector<CostAllocationTag>& GetCostAllocationTags() const { return m_costAllocationTags; }
    template<typename CostAllocationTagsT = Aws::Vector<CostAllocationTag>>
    void SetCostAllocationTags(CostAllocationTagsT&& value) { m_costAllocationTagsHasBeenSet = true; m_costAllocationTags = std::forward<CostAllocationTagsT>(value); }
    template<typename CostAllocationTagsT = Aws::Vector<CostAllocationTag>>
    ListCostAllocationTagsResult& WithCostAllocationTags(CostAllocationTagsT&& value) { SetCostAllocationTags(std::forward<CostAllocationTagsT>(value)); return *this;}
    template<typename CostAllocationTagsT = CostAllocationTag>
    ListCostAllocationTagsResult& AddCostAllocationTags(CostAllocationTagsT&& value) { m_costAllocationTagsHasBeenSet = true; m_costAllocationTags.emplace_back(std::forward<CostAllocationTagsT>(value)); return *this; }
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
    ListCostAllocationTagsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCostAllocationTagsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CostAllocationTag> m_costAllocationTags;
    bool m_costAllocationTagsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
