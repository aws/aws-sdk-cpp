/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/launch-wizard/model/WorkloadDeploymentPatternData.h>
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
  class GetWorkloadDeploymentPatternResult
  {
  public:
    AWS_LAUNCHWIZARD_API GetWorkloadDeploymentPatternResult() = default;
    AWS_LAUNCHWIZARD_API GetWorkloadDeploymentPatternResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAUNCHWIZARD_API GetWorkloadDeploymentPatternResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the workload deployment pattern.</p>
     */
    inline const WorkloadDeploymentPatternData& GetWorkloadDeploymentPattern() const { return m_workloadDeploymentPattern; }
    template<typename WorkloadDeploymentPatternT = WorkloadDeploymentPatternData>
    void SetWorkloadDeploymentPattern(WorkloadDeploymentPatternT&& value) { m_workloadDeploymentPatternHasBeenSet = true; m_workloadDeploymentPattern = std::forward<WorkloadDeploymentPatternT>(value); }
    template<typename WorkloadDeploymentPatternT = WorkloadDeploymentPatternData>
    GetWorkloadDeploymentPatternResult& WithWorkloadDeploymentPattern(WorkloadDeploymentPatternT&& value) { SetWorkloadDeploymentPattern(std::forward<WorkloadDeploymentPatternT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWorkloadDeploymentPatternResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    WorkloadDeploymentPatternData m_workloadDeploymentPattern;
    bool m_workloadDeploymentPatternHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
