﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/model/ProfilingGroupDescription.h>
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
namespace CodeGuruProfiler
{
namespace Model
{
  /**
   * <p>The structure representing the updateProfilingGroupResponse.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/UpdateProfilingGroupResponse">AWS
   * API Reference</a></p>
   */
  class UpdateProfilingGroupResult
  {
  public:
    AWS_CODEGURUPROFILER_API UpdateProfilingGroupResult();
    AWS_CODEGURUPROFILER_API UpdateProfilingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUPROFILER_API UpdateProfilingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> that contains information about the
     * returned updated profiling group. </p>
     */
    inline const ProfilingGroupDescription& GetProfilingGroup() const{ return m_profilingGroup; }

    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> that contains information about the
     * returned updated profiling group. </p>
     */
    inline void SetProfilingGroup(const ProfilingGroupDescription& value) { m_profilingGroup = value; }

    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> that contains information about the
     * returned updated profiling group. </p>
     */
    inline void SetProfilingGroup(ProfilingGroupDescription&& value) { m_profilingGroup = std::move(value); }

    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> that contains information about the
     * returned updated profiling group. </p>
     */
    inline UpdateProfilingGroupResult& WithProfilingGroup(const ProfilingGroupDescription& value) { SetProfilingGroup(value); return *this;}

    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> that contains information about the
     * returned updated profiling group. </p>
     */
    inline UpdateProfilingGroupResult& WithProfilingGroup(ProfilingGroupDescription&& value) { SetProfilingGroup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateProfilingGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateProfilingGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateProfilingGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ProfilingGroupDescription m_profilingGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
