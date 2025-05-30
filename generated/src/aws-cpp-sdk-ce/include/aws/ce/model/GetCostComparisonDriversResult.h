/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/CostComparisonDriver.h>
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
  class GetCostComparisonDriversResult
  {
  public:
    AWS_COSTEXPLORER_API GetCostComparisonDriversResult() = default;
    AWS_COSTEXPLORER_API GetCostComparisonDriversResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetCostComparisonDriversResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of comparison results showing factors that drive significant cost
     * differences between <code>BaselineTimePeriod</code> and
     * <code>ComparisonTimePeriod</code>.</p>
     */
    inline const Aws::Vector<CostComparisonDriver>& GetCostComparisonDrivers() const { return m_costComparisonDrivers; }
    template<typename CostComparisonDriversT = Aws::Vector<CostComparisonDriver>>
    void SetCostComparisonDrivers(CostComparisonDriversT&& value) { m_costComparisonDriversHasBeenSet = true; m_costComparisonDrivers = std::forward<CostComparisonDriversT>(value); }
    template<typename CostComparisonDriversT = Aws::Vector<CostComparisonDriver>>
    GetCostComparisonDriversResult& WithCostComparisonDrivers(CostComparisonDriversT&& value) { SetCostComparisonDrivers(std::forward<CostComparisonDriversT>(value)); return *this;}
    template<typename CostComparisonDriversT = CostComparisonDriver>
    GetCostComparisonDriversResult& AddCostComparisonDrivers(CostComparisonDriversT&& value) { m_costComparisonDriversHasBeenSet = true; m_costComparisonDrivers.emplace_back(std::forward<CostComparisonDriversT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetCostComparisonDriversResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCostComparisonDriversResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CostComparisonDriver> m_costComparisonDrivers;
    bool m_costComparisonDriversHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
