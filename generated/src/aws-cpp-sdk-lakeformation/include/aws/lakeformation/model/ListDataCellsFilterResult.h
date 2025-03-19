/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/DataCellsFilter.h>
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
namespace LakeFormation
{
namespace Model
{
  class ListDataCellsFilterResult
  {
  public:
    AWS_LAKEFORMATION_API ListDataCellsFilterResult() = default;
    AWS_LAKEFORMATION_API ListDataCellsFilterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API ListDataCellsFilterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>DataCellFilter</code> structures.</p>
     */
    inline const Aws::Vector<DataCellsFilter>& GetDataCellsFilters() const { return m_dataCellsFilters; }
    template<typename DataCellsFiltersT = Aws::Vector<DataCellsFilter>>
    void SetDataCellsFilters(DataCellsFiltersT&& value) { m_dataCellsFiltersHasBeenSet = true; m_dataCellsFilters = std::forward<DataCellsFiltersT>(value); }
    template<typename DataCellsFiltersT = Aws::Vector<DataCellsFilter>>
    ListDataCellsFilterResult& WithDataCellsFilters(DataCellsFiltersT&& value) { SetDataCellsFilters(std::forward<DataCellsFiltersT>(value)); return *this;}
    template<typename DataCellsFiltersT = DataCellsFilter>
    ListDataCellsFilterResult& AddDataCellsFilters(DataCellsFiltersT&& value) { m_dataCellsFiltersHasBeenSet = true; m_dataCellsFilters.emplace_back(std::forward<DataCellsFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if not all requested data cell filters have been
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataCellsFilterResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataCellsFilterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataCellsFilter> m_dataCellsFilters;
    bool m_dataCellsFiltersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
