/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/Workload.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class ListWorkloadsResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API ListWorkloadsResult() = default;
    AWS_APPLICATIONINSIGHTS_API ListWorkloadsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API ListWorkloadsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of workloads.</p>
     */
    inline const Aws::Vector<Workload>& GetWorkloadList() const { return m_workloadList; }
    template<typename WorkloadListT = Aws::Vector<Workload>>
    void SetWorkloadList(WorkloadListT&& value) { m_workloadListHasBeenSet = true; m_workloadList = std::forward<WorkloadListT>(value); }
    template<typename WorkloadListT = Aws::Vector<Workload>>
    ListWorkloadsResult& WithWorkloadList(WorkloadListT&& value) { SetWorkloadList(std::forward<WorkloadListT>(value)); return *this;}
    template<typename WorkloadListT = Workload>
    ListWorkloadsResult& AddWorkloadList(WorkloadListT&& value) { m_workloadListHasBeenSet = true; m_workloadList.emplace_back(std::forward<WorkloadListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkloadsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkloadsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Workload> m_workloadList;
    bool m_workloadListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
