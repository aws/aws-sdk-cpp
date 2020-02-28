/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODEGURUPROFILER_API ConfigureAgentResult
  {
  public:
    ConfigureAgentResult();
    ConfigureAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ConfigureAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const AgentConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p/>
     */
    inline void SetConfiguration(const AgentConfiguration& value) { m_configuration = value; }

    /**
     * <p/>
     */
    inline void SetConfiguration(AgentConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p/>
     */
    inline ConfigureAgentResult& WithConfiguration(const AgentConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p/>
     */
    inline ConfigureAgentResult& WithConfiguration(AgentConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    AgentConfiguration m_configuration;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
