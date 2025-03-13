/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetCostCategoriesResult
  {
  public:
    AWS_COSTEXPLORER_API GetCostCategoriesResult() = default;
    AWS_COSTEXPLORER_API GetCostCategoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetCostCategoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the number of objects that are still available for retrieval exceeds the
     * quota, Amazon Web Services returns a NextPageToken value in the response. To
     * retrieve the next batch of objects, provide the marker from the prior call in
     * your next request.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetCostCategoriesResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the Cost Categories.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCostCategoryNames() const { return m_costCategoryNames; }
    template<typename CostCategoryNamesT = Aws::Vector<Aws::String>>
    void SetCostCategoryNames(CostCategoryNamesT&& value) { m_costCategoryNamesHasBeenSet = true; m_costCategoryNames = std::forward<CostCategoryNamesT>(value); }
    template<typename CostCategoryNamesT = Aws::Vector<Aws::String>>
    GetCostCategoriesResult& WithCostCategoryNames(CostCategoryNamesT&& value) { SetCostCategoryNames(std::forward<CostCategoryNamesT>(value)); return *this;}
    template<typename CostCategoryNamesT = Aws::String>
    GetCostCategoriesResult& AddCostCategoryNames(CostCategoryNamesT&& value) { m_costCategoryNamesHasBeenSet = true; m_costCategoryNames.emplace_back(std::forward<CostCategoryNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Cost Category values.</p> <p>If the <code>CostCategoryName</code> key
     * isn't specified in the request, the <code>CostCategoryValues</code> fields
     * aren't returned. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCostCategoryValues() const { return m_costCategoryValues; }
    template<typename CostCategoryValuesT = Aws::Vector<Aws::String>>
    void SetCostCategoryValues(CostCategoryValuesT&& value) { m_costCategoryValuesHasBeenSet = true; m_costCategoryValues = std::forward<CostCategoryValuesT>(value); }
    template<typename CostCategoryValuesT = Aws::Vector<Aws::String>>
    GetCostCategoriesResult& WithCostCategoryValues(CostCategoryValuesT&& value) { SetCostCategoryValues(std::forward<CostCategoryValuesT>(value)); return *this;}
    template<typename CostCategoryValuesT = Aws::String>
    GetCostCategoriesResult& AddCostCategoryValues(CostCategoryValuesT&& value) { m_costCategoryValuesHasBeenSet = true; m_costCategoryValues.emplace_back(std::forward<CostCategoryValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of objects that are returned.</p>
     */
    inline int GetReturnSize() const { return m_returnSize; }
    inline void SetReturnSize(int value) { m_returnSizeHasBeenSet = true; m_returnSize = value; }
    inline GetCostCategoriesResult& WithReturnSize(int value) { SetReturnSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of objects.</p>
     */
    inline int GetTotalSize() const { return m_totalSize; }
    inline void SetTotalSize(int value) { m_totalSizeHasBeenSet = true; m_totalSize = value; }
    inline GetCostCategoriesResult& WithTotalSize(int value) { SetTotalSize(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCostCategoriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_costCategoryNames;
    bool m_costCategoryNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_costCategoryValues;
    bool m_costCategoryValuesHasBeenSet = false;

    int m_returnSize{0};
    bool m_returnSizeHasBeenSet = false;

    int m_totalSize{0};
    bool m_totalSizeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
