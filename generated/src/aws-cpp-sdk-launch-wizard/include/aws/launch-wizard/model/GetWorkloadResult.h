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
    AWS_LAUNCHWIZARD_API GetWorkloadResult();
    AWS_LAUNCHWIZARD_API GetWorkloadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAUNCHWIZARD_API GetWorkloadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the workload.</p>
     */
    inline const WorkloadData& GetWorkload() const{ return m_workload; }

    /**
     * <p>Information about the workload.</p>
     */
    inline void SetWorkload(const WorkloadData& value) { m_workload = value; }

    /**
     * <p>Information about the workload.</p>
     */
    inline void SetWorkload(WorkloadData&& value) { m_workload = std::move(value); }

    /**
     * <p>Information about the workload.</p>
     */
    inline GetWorkloadResult& WithWorkload(const WorkloadData& value) { SetWorkload(value); return *this;}

    /**
     * <p>Information about the workload.</p>
     */
    inline GetWorkloadResult& WithWorkload(WorkloadData&& value) { SetWorkload(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetWorkloadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetWorkloadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetWorkloadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    WorkloadData m_workload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
