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
    AWS_CODEGURUPROFILER_API UpdateProfilingGroupResult() = default;
    AWS_CODEGURUPROFILER_API UpdateProfilingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUPROFILER_API UpdateProfilingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> that contains information about the
     * returned updated profiling group. </p>
     */
    inline const ProfilingGroupDescription& GetProfilingGroup() const { return m_profilingGroup; }
    template<typename ProfilingGroupT = ProfilingGroupDescription>
    void SetProfilingGroup(ProfilingGroupT&& value) { m_profilingGroupHasBeenSet = true; m_profilingGroup = std::forward<ProfilingGroupT>(value); }
    template<typename ProfilingGroupT = ProfilingGroupDescription>
    UpdateProfilingGroupResult& WithProfilingGroup(ProfilingGroupT&& value) { SetProfilingGroup(std::forward<ProfilingGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateProfilingGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProfilingGroupDescription m_profilingGroup;
    bool m_profilingGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
