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
#include <aws/codeguruprofiler/CodeGuruProfilerRequest.h>
#include <aws/codeguruprofiler/model/AgentOrchestrationConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>Request for CreateProfilingGroup operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/CreateProfilingGroupRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUPROFILER_API CreateProfilingGroupRequest : public CodeGuruProfilerRequest
  {
  public:
    CreateProfilingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProfilingGroup"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline const AgentOrchestrationConfig& GetAgentOrchestrationConfig() const{ return m_agentOrchestrationConfig; }

    
    inline bool AgentOrchestrationConfigHasBeenSet() const { return m_agentOrchestrationConfigHasBeenSet; }

    
    inline void SetAgentOrchestrationConfig(const AgentOrchestrationConfig& value) { m_agentOrchestrationConfigHasBeenSet = true; m_agentOrchestrationConfig = value; }

    
    inline void SetAgentOrchestrationConfig(AgentOrchestrationConfig&& value) { m_agentOrchestrationConfigHasBeenSet = true; m_agentOrchestrationConfig = std::move(value); }

    
    inline CreateProfilingGroupRequest& WithAgentOrchestrationConfig(const AgentOrchestrationConfig& value) { SetAgentOrchestrationConfig(value); return *this;}

    
    inline CreateProfilingGroupRequest& WithAgentOrchestrationConfig(AgentOrchestrationConfig&& value) { SetAgentOrchestrationConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    
    inline CreateProfilingGroupRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    
    inline CreateProfilingGroupRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    
    inline CreateProfilingGroupRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    
    inline const Aws::String& GetProfilingGroupName() const{ return m_profilingGroupName; }

    
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }

    
    inline void SetProfilingGroupName(const Aws::String& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = value; }

    
    inline void SetProfilingGroupName(Aws::String&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::move(value); }

    
    inline void SetProfilingGroupName(const char* value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName.assign(value); }

    
    inline CreateProfilingGroupRequest& WithProfilingGroupName(const Aws::String& value) { SetProfilingGroupName(value); return *this;}

    
    inline CreateProfilingGroupRequest& WithProfilingGroupName(Aws::String&& value) { SetProfilingGroupName(std::move(value)); return *this;}

    
    inline CreateProfilingGroupRequest& WithProfilingGroupName(const char* value) { SetProfilingGroupName(value); return *this;}

  private:

    AgentOrchestrationConfig m_agentOrchestrationConfig;
    bool m_agentOrchestrationConfigHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
