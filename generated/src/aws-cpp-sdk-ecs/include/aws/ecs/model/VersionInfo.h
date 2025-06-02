/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>The Docker and Amazon ECS container agent version information about a
   * container instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/VersionInfo">AWS API
   * Reference</a></p>
   */
  class VersionInfo
  {
  public:
    AWS_ECS_API VersionInfo() = default;
    AWS_ECS_API VersionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API VersionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version number of the Amazon ECS container agent.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    VersionInfo& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Git commit hash for the Amazon ECS container agent build on the <a
     * href="https://github.com/aws/amazon-ecs-agent">amazon-ecs-agent </a> GitHub
     * repository.</p>
     */
    inline const Aws::String& GetAgentHash() const { return m_agentHash; }
    inline bool AgentHashHasBeenSet() const { return m_agentHashHasBeenSet; }
    template<typename AgentHashT = Aws::String>
    void SetAgentHash(AgentHashT&& value) { m_agentHashHasBeenSet = true; m_agentHash = std::forward<AgentHashT>(value); }
    template<typename AgentHashT = Aws::String>
    VersionInfo& WithAgentHash(AgentHashT&& value) { SetAgentHash(std::forward<AgentHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Docker version that's running on the container instance.</p>
     */
    inline const Aws::String& GetDockerVersion() const { return m_dockerVersion; }
    inline bool DockerVersionHasBeenSet() const { return m_dockerVersionHasBeenSet; }
    template<typename DockerVersionT = Aws::String>
    void SetDockerVersion(DockerVersionT&& value) { m_dockerVersionHasBeenSet = true; m_dockerVersion = std::forward<DockerVersionT>(value); }
    template<typename DockerVersionT = Aws::String>
    VersionInfo& WithDockerVersion(DockerVersionT&& value) { SetDockerVersion(std::forward<DockerVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_agentHash;
    bool m_agentHashHasBeenSet = false;

    Aws::String m_dockerVersion;
    bool m_dockerVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
