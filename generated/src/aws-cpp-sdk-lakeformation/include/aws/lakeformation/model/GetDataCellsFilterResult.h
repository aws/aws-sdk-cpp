/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/DataCellsFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetDataCellsFilterResult
  {
  public:
    AWS_LAKEFORMATION_API GetDataCellsFilterResult() = default;
    AWS_LAKEFORMATION_API GetDataCellsFilterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetDataCellsFilterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that describes certain columns on certain rows.</p>
     */
    inline const DataCellsFilter& GetDataCellsFilter() const { return m_dataCellsFilter; }
    template<typename DataCellsFilterT = DataCellsFilter>
    void SetDataCellsFilter(DataCellsFilterT&& value) { m_dataCellsFilterHasBeenSet = true; m_dataCellsFilter = std::forward<DataCellsFilterT>(value); }
    template<typename DataCellsFilterT = DataCellsFilter>
    GetDataCellsFilterResult& WithDataCellsFilter(DataCellsFilterT&& value) { SetDataCellsFilter(std::forward<DataCellsFilterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataCellsFilterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DataCellsFilter m_dataCellsFilter;
    bool m_dataCellsFilterHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
