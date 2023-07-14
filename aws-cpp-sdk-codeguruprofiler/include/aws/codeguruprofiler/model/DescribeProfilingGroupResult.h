﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/model/ProfilingGroupDescription.h>
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
   * <p>The structure representing the describeProfilingGroupResponse.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/DescribeProfilingGroupResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUPROFILER_API DescribeProfilingGroupResult
  {
  public:
    DescribeProfilingGroupResult();
    DescribeProfilingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeProfilingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The returned <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> object that contains information
     * about the requested profiling group. </p>
     */
    inline const ProfilingGroupDescription& GetProfilingGroup() const{ return m_profilingGroup; }

    /**
     * <p> The returned <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> object that contains information
     * about the requested profiling group. </p>
     */
    inline void SetProfilingGroup(const ProfilingGroupDescription& value) { m_profilingGroup = value; }

    /**
     * <p> The returned <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> object that contains information
     * about the requested profiling group. </p>
     */
    inline void SetProfilingGroup(ProfilingGroupDescription&& value) { m_profilingGroup = std::move(value); }

    /**
     * <p> The returned <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> object that contains information
     * about the requested profiling group. </p>
     */
    inline DescribeProfilingGroupResult& WithProfilingGroup(const ProfilingGroupDescription& value) { SetProfilingGroup(value); return *this;}

    /**
     * <p> The returned <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
     * <code>ProfilingGroupDescription</code> </a> object that contains information
     * about the requested profiling group. </p>
     */
    inline DescribeProfilingGroupResult& WithProfilingGroup(ProfilingGroupDescription&& value) { SetProfilingGroup(std::move(value)); return *this;}

  private:

    ProfilingGroupDescription m_profilingGroup;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
