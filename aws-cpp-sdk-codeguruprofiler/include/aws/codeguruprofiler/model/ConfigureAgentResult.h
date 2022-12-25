/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/model/AgentConfiguration.h>
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
   * <p>The structure representing the configureAgentResponse.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ConfigureAgentResponse">AWS
   * API Reference</a></p>
   */
  class ConfigureAgentResult
  {
  public:
    AWS_CODEGURUPROFILER_API ConfigureAgentResult();
    AWS_CODEGURUPROFILER_API ConfigureAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUPROFILER_API ConfigureAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AgentConfiguration.html">
     * <code>AgentConfiguration</code> </a> object that specifies if an agent profiles
     * or not and for how long to return profiling data. </p>
     */
    inline const AgentConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p> An <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AgentConfiguration.html">
     * <code>AgentConfiguration</code> </a> object that specifies if an agent profiles
     * or not and for how long to return profiling data. </p>
     */
    inline void SetConfiguration(const AgentConfiguration& value) { m_configuration = value; }

    /**
     * <p> An <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AgentConfiguration.html">
     * <code>AgentConfiguration</code> </a> object that specifies if an agent profiles
     * or not and for how long to return profiling data. </p>
     */
    inline void SetConfiguration(AgentConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p> An <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AgentConfiguration.html">
     * <code>AgentConfiguration</code> </a> object that specifies if an agent profiles
     * or not and for how long to return profiling data. </p>
     */
    inline ConfigureAgentResult& WithConfiguration(const AgentConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p> An <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AgentConfiguration.html">
     * <code>AgentConfiguration</code> </a> object that specifies if an agent profiles
     * or not and for how long to return profiling data. </p>
     */
    inline ConfigureAgentResult& WithConfiguration(AgentConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    AgentConfiguration m_configuration;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
