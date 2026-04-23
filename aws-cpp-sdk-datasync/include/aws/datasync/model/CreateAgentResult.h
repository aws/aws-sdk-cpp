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
#include <aws/datasync/DataSync_EXPORTS.h>
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
namespace DataSync
{
namespace Model
{
  /**
   * <p>CreateAgentResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateAgentResponse">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API CreateAgentResult
  {
  public:
    CreateAgentResult();
    CreateAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the agent. Use the <code>ListAgents</code>
     * operation to return a list of agents for your account and AWS Region.</p>
     */
    inline const Aws::String& GetAgentArn() const{ return m_agentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent. Use the <code>ListAgents</code>
     * operation to return a list of agents for your account and AWS Region.</p>
     */
    inline void SetAgentArn(const Aws::String& value) { m_agentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent. Use the <code>ListAgents</code>
     * operation to return a list of agents for your account and AWS Region.</p>
     */
    inline void SetAgentArn(Aws::String&& value) { m_agentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent. Use the <code>ListAgents</code>
     * operation to return a list of agents for your account and AWS Region.</p>
     */
    inline void SetAgentArn(const char* value) { m_agentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent. Use the <code>ListAgents</code>
     * operation to return a list of agents for your account and AWS Region.</p>
     */
    inline CreateAgentResult& WithAgentArn(const Aws::String& value) { SetAgentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agent. Use the <code>ListAgents</code>
     * operation to return a list of agents for your account and AWS Region.</p>
     */
    inline CreateAgentResult& WithAgentArn(Aws::String&& value) { SetAgentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agent. Use the <code>ListAgents</code>
     * operation to return a list of agents for your account and AWS Region.</p>
     */
    inline CreateAgentResult& WithAgentArn(const char* value) { SetAgentArn(value); return *this;}

  private:

    Aws::String m_agentArn;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
