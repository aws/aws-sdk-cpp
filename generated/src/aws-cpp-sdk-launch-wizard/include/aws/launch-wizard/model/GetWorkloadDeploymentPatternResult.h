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
    AWS_LAUNCHWIZARD_API GetWorkloadDeploymentPatternResult();
    AWS_LAUNCHWIZARD_API GetWorkloadDeploymentPatternResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAUNCHWIZARD_API GetWorkloadDeploymentPatternResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the workload deployment pattern.</p>
     */
    inline const WorkloadDeploymentPatternData& GetWorkloadDeploymentPattern() const{ return m_workloadDeploymentPattern; }
    inline void SetWorkloadDeploymentPattern(const WorkloadDeploymentPatternData& value) { m_workloadDeploymentPattern = value; }
    inline void SetWorkloadDeploymentPattern(WorkloadDeploymentPatternData&& value) { m_workloadDeploymentPattern = std::move(value); }
    inline GetWorkloadDeploymentPatternResult& WithWorkloadDeploymentPattern(const WorkloadDeploymentPatternData& value) { SetWorkloadDeploymentPattern(value); return *this;}
    inline GetWorkloadDeploymentPatternResult& WithWorkloadDeploymentPattern(WorkloadDeploymentPatternData&& value) { SetWorkloadDeploymentPattern(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetWorkloadDeploymentPatternResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetWorkloadDeploymentPatternResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetWorkloadDeploymentPatternResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    WorkloadDeploymentPatternData m_workloadDeploymentPattern;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
