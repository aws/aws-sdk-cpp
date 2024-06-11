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
    AWS_APPLICATIONINSIGHTS_API DescribeWorkloadResult();
    AWS_APPLICATIONINSIGHTS_API DescribeWorkloadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API DescribeWorkloadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the workload.</p>
     */
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }
    inline void SetWorkloadId(const Aws::String& value) { m_workloadId = value; }
    inline void SetWorkloadId(Aws::String&& value) { m_workloadId = std::move(value); }
    inline void SetWorkloadId(const char* value) { m_workloadId.assign(value); }
    inline DescribeWorkloadResult& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}
    inline DescribeWorkloadResult& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}
    inline DescribeWorkloadResult& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If logging is supported for the resource type, shows whether the component
     * has configured logs to be monitored.</p>
     */
    inline const Aws::String& GetWorkloadRemarks() const{ return m_workloadRemarks; }
    inline void SetWorkloadRemarks(const Aws::String& value) { m_workloadRemarks = value; }
    inline void SetWorkloadRemarks(Aws::String&& value) { m_workloadRemarks = std::move(value); }
    inline void SetWorkloadRemarks(const char* value) { m_workloadRemarks.assign(value); }
    inline DescribeWorkloadResult& WithWorkloadRemarks(const Aws::String& value) { SetWorkloadRemarks(value); return *this;}
    inline DescribeWorkloadResult& WithWorkloadRemarks(Aws::String&& value) { SetWorkloadRemarks(std::move(value)); return *this;}
    inline DescribeWorkloadResult& WithWorkloadRemarks(const char* value) { SetWorkloadRemarks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings of the workload. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline const WorkloadConfiguration& GetWorkloadConfiguration() const{ return m_workloadConfiguration; }
    inline void SetWorkloadConfiguration(const WorkloadConfiguration& value) { m_workloadConfiguration = value; }
    inline void SetWorkloadConfiguration(WorkloadConfiguration&& value) { m_workloadConfiguration = std::move(value); }
    inline DescribeWorkloadResult& WithWorkloadConfiguration(const WorkloadConfiguration& value) { SetWorkloadConfiguration(value); return *this;}
    inline DescribeWorkloadResult& WithWorkloadConfiguration(WorkloadConfiguration&& value) { SetWorkloadConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeWorkloadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeWorkloadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeWorkloadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_workloadId;

    Aws::String m_workloadRemarks;

    WorkloadConfiguration m_workloadConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
