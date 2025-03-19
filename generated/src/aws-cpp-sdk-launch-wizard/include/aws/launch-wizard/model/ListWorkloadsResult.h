/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/launch-wizard/model/WorkloadDataSummary.h>
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
namespace LaunchWizard
{
namespace Model
{
  class ListWorkloadsResult
  {
  public:
    AWS_LAUNCHWIZARD_API ListWorkloadsResult() = default;
    AWS_LAUNCHWIZARD_API ListWorkloadsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAUNCHWIZARD_API ListWorkloadsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkloadsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the workloads.</p>
     */
    inline const Aws::Vector<WorkloadDataSummary>& GetWorkloads() const { return m_workloads; }
    template<typename WorkloadsT = Aws::Vector<WorkloadDataSummary>>
    void SetWorkloads(WorkloadsT&& value) { m_workloadsHasBeenSet = true; m_workloads = std::forward<WorkloadsT>(value); }
    template<typename WorkloadsT = Aws::Vector<WorkloadDataSummary>>
    ListWorkloadsResult& WithWorkloads(WorkloadsT&& value) { SetWorkloads(std::forward<WorkloadsT>(value)); return *this;}
    template<typename WorkloadsT = WorkloadDataSummary>
    ListWorkloadsResult& AddWorkloads(WorkloadsT&& value) { m_workloadsHasBeenSet = true; m_workloads.emplace_back(std::forward<WorkloadsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkloadsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<WorkloadDataSummary> m_workloads;
    bool m_workloadsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
