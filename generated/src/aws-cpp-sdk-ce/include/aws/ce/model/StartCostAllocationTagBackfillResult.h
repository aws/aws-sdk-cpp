/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/CostAllocationTagBackfillRequest.h>
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
namespace CostExplorer
{
namespace Model
{
  class StartCostAllocationTagBackfillResult
  {
  public:
    AWS_COSTEXPLORER_API StartCostAllocationTagBackfillResult() = default;
    AWS_COSTEXPLORER_API StartCostAllocationTagBackfillResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API StartCostAllocationTagBackfillResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An object containing detailed metadata of your new backfill request. </p>
     */
    inline const CostAllocationTagBackfillRequest& GetBackfillRequest() const { return m_backfillRequest; }
    template<typename BackfillRequestT = CostAllocationTagBackfillRequest>
    void SetBackfillRequest(BackfillRequestT&& value) { m_backfillRequestHasBeenSet = true; m_backfillRequest = std::forward<BackfillRequestT>(value); }
    template<typename BackfillRequestT = CostAllocationTagBackfillRequest>
    StartCostAllocationTagBackfillResult& WithBackfillRequest(BackfillRequestT&& value) { SetBackfillRequest(std::forward<BackfillRequestT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartCostAllocationTagBackfillResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CostAllocationTagBackfillRequest m_backfillRequest;
    bool m_backfillRequestHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
