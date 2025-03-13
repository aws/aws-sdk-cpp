/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/WorkloadConfiguration.h>
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
  class DescribeWorkloadResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API DescribeWorkloadResult() = default;
    AWS_APPLICATIONINSIGHTS_API DescribeWorkloadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API DescribeWorkloadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the workload.</p>
     */
    inline const Aws::String& GetWorkloadId() const { return m_workloadId; }
    template<typename WorkloadIdT = Aws::String>
    void SetWorkloadId(WorkloadIdT&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::forward<WorkloadIdT>(value); }
    template<typename WorkloadIdT = Aws::String>
    DescribeWorkloadResult& WithWorkloadId(WorkloadIdT&& value) { SetWorkloadId(std::forward<WorkloadIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If logging is supported for the resource type, shows whether the component
     * has configured logs to be monitored.</p>
     */
    inline const Aws::String& GetWorkloadRemarks() const { return m_workloadRemarks; }
    template<typename WorkloadRemarksT = Aws::String>
    void SetWorkloadRemarks(WorkloadRemarksT&& value) { m_workloadRemarksHasBeenSet = true; m_workloadRemarks = std::forward<WorkloadRemarksT>(value); }
    template<typename WorkloadRemarksT = Aws::String>
    DescribeWorkloadResult& WithWorkloadRemarks(WorkloadRemarksT&& value) { SetWorkloadRemarks(std::forward<WorkloadRemarksT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings of the workload. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline const WorkloadConfiguration& GetWorkloadConfiguration() const { return m_workloadConfiguration; }
    template<typename WorkloadConfigurationT = WorkloadConfiguration>
    void SetWorkloadConfiguration(WorkloadConfigurationT&& value) { m_workloadConfigurationHasBeenSet = true; m_workloadConfiguration = std::forward<WorkloadConfigurationT>(value); }
    template<typename WorkloadConfigurationT = WorkloadConfiguration>
    DescribeWorkloadResult& WithWorkloadConfiguration(WorkloadConfigurationT&& value) { SetWorkloadConfiguration(std::forward<WorkloadConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeWorkloadResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_workloadRemarks;
    bool m_workloadRemarksHasBeenSet = false;

    WorkloadConfiguration m_workloadConfiguration;
    bool m_workloadConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
