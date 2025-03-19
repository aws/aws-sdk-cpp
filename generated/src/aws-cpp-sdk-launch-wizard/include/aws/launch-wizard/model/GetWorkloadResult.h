/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/launch-wizard/model/WorkloadData.h>
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
namespace LaunchWizard
{
namespace Model
{
  class GetWorkloadResult
  {
  public:
    AWS_LAUNCHWIZARD_API GetWorkloadResult() = default;
    AWS_LAUNCHWIZARD_API GetWorkloadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAUNCHWIZARD_API GetWorkloadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the workload.</p>
     */
    inline const WorkloadData& GetWorkload() const { return m_workload; }
    template<typename WorkloadT = WorkloadData>
    void SetWorkload(WorkloadT&& value) { m_workloadHasBeenSet = true; m_workload = std::forward<WorkloadT>(value); }
    template<typename WorkloadT = WorkloadData>
    GetWorkloadResult& WithWorkload(WorkloadT&& value) { SetWorkload(std::forward<WorkloadT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWorkloadResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    WorkloadData m_workload;
    bool m_workloadHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
