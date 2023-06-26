/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/Job.h>
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
namespace DeviceFarm
{
namespace Model
{
  class StopJobResult
  {
  public:
    AWS_DEVICEFARM_API StopJobResult();
    AWS_DEVICEFARM_API StopJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API StopJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The job that was stopped.</p>
     */
    inline const Job& GetJob() const{ return m_job; }

    /**
     * <p>The job that was stopped.</p>
     */
    inline void SetJob(const Job& value) { m_job = value; }

    /**
     * <p>The job that was stopped.</p>
     */
    inline void SetJob(Job&& value) { m_job = std::move(value); }

    /**
     * <p>The job that was stopped.</p>
     */
    inline StopJobResult& WithJob(const Job& value) { SetJob(value); return *this;}

    /**
     * <p>The job that was stopped.</p>
     */
    inline StopJobResult& WithJob(Job&& value) { SetJob(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StopJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StopJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StopJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Job m_job;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
