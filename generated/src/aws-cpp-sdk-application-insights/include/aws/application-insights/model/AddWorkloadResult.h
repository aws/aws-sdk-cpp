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
  class AddWorkloadResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API AddWorkloadResult();
    AWS_APPLICATIONINSIGHTS_API AddWorkloadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API AddWorkloadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the workload.</p>
     */
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    /**
     * <p>The ID of the workload.</p>
     */
    inline void SetWorkloadId(const Aws::String& value) { m_workloadId = value; }

    /**
     * <p>The ID of the workload.</p>
     */
    inline void SetWorkloadId(Aws::String&& value) { m_workloadId = std::move(value); }

    /**
     * <p>The ID of the workload.</p>
     */
    inline void SetWorkloadId(const char* value) { m_workloadId.assign(value); }

    /**
     * <p>The ID of the workload.</p>
     */
    inline AddWorkloadResult& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    /**
     * <p>The ID of the workload.</p>
     */
    inline AddWorkloadResult& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workload.</p>
     */
    inline AddWorkloadResult& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    /**
     * <p>The configuration settings of the workload. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline const WorkloadConfiguration& GetWorkloadConfiguration() const{ return m_workloadConfiguration; }

    /**
     * <p>The configuration settings of the workload. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline void SetWorkloadConfiguration(const WorkloadConfiguration& value) { m_workloadConfiguration = value; }

    /**
     * <p>The configuration settings of the workload. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline void SetWorkloadConfiguration(WorkloadConfiguration&& value) { m_workloadConfiguration = std::move(value); }

    /**
     * <p>The configuration settings of the workload. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline AddWorkloadResult& WithWorkloadConfiguration(const WorkloadConfiguration& value) { SetWorkloadConfiguration(value); return *this;}

    /**
     * <p>The configuration settings of the workload. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline AddWorkloadResult& WithWorkloadConfiguration(WorkloadConfiguration&& value) { SetWorkloadConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AddWorkloadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AddWorkloadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AddWorkloadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_workloadId;

    WorkloadConfiguration m_workloadConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
