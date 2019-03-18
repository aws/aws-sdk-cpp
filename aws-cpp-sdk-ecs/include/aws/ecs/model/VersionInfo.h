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
  class AWS_ECS_API VersionInfo
  {
  public:
    VersionInfo();
    VersionInfo(Aws::Utils::Json::JsonView jsonValue);
    VersionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version number of the Amazon ECS container agent.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>The version number of the Amazon ECS container agent.</p>
     */
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }

    /**
     * <p>The version number of the Amazon ECS container agent.</p>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>The version number of the Amazon ECS container agent.</p>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }

    /**
     * <p>The version number of the Amazon ECS container agent.</p>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>The version number of the Amazon ECS container agent.</p>
     */
    inline VersionInfo& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>The version number of the Amazon ECS container agent.</p>
     */
    inline VersionInfo& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the Amazon ECS container agent.</p>
     */
    inline VersionInfo& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}


    /**
     * <p>The Git commit hash for the Amazon ECS container agent build on the <a
     * href="https://github.com/aws/amazon-ecs-agent/commits/master">amazon-ecs-agent
     * </a> GitHub repository.</p>
     */
    inline const Aws::String& GetAgentHash() const{ return m_agentHash; }

    /**
     * <p>The Git commit hash for the Amazon ECS container agent build on the <a
     * href="https://github.com/aws/amazon-ecs-agent/commits/master">amazon-ecs-agent
     * </a> GitHub repository.</p>
     */
    inline bool AgentHashHasBeenSet() const { return m_agentHashHasBeenSet; }

    /**
     * <p>The Git commit hash for the Amazon ECS container agent build on the <a
     * href="https://github.com/aws/amazon-ecs-agent/commits/master">amazon-ecs-agent
     * </a> GitHub repository.</p>
     */
    inline void SetAgentHash(const Aws::String& value) { m_agentHashHasBeenSet = true; m_agentHash = value; }

    /**
     * <p>The Git commit hash for the Amazon ECS container agent build on the <a
     * href="https://github.com/aws/amazon-ecs-agent/commits/master">amazon-ecs-agent
     * </a> GitHub repository.</p>
     */
    inline void SetAgentHash(Aws::String&& value) { m_agentHashHasBeenSet = true; m_agentHash = std::move(value); }

    /**
     * <p>The Git commit hash for the Amazon ECS container agent build on the <a
     * href="https://github.com/aws/amazon-ecs-agent/commits/master">amazon-ecs-agent
     * </a> GitHub repository.</p>
     */
    inline void SetAgentHash(const char* value) { m_agentHashHasBeenSet = true; m_agentHash.assign(value); }

    /**
     * <p>The Git commit hash for the Amazon ECS container agent build on the <a
     * href="https://github.com/aws/amazon-ecs-agent/commits/master">amazon-ecs-agent
     * </a> GitHub repository.</p>
     */
    inline VersionInfo& WithAgentHash(const Aws::String& value) { SetAgentHash(value); return *this;}

    /**
     * <p>The Git commit hash for the Amazon ECS container agent build on the <a
     * href="https://github.com/aws/amazon-ecs-agent/commits/master">amazon-ecs-agent
     * </a> GitHub repository.</p>
     */
    inline VersionInfo& WithAgentHash(Aws::String&& value) { SetAgentHash(std::move(value)); return *this;}

    /**
     * <p>The Git commit hash for the Amazon ECS container agent build on the <a
     * href="https://github.com/aws/amazon-ecs-agent/commits/master">amazon-ecs-agent
     * </a> GitHub repository.</p>
     */
    inline VersionInfo& WithAgentHash(const char* value) { SetAgentHash(value); return *this;}


    /**
     * <p>The Docker version running on the container instance.</p>
     */
    inline const Aws::String& GetDockerVersion() const{ return m_dockerVersion; }

    /**
     * <p>The Docker version running on the container instance.</p>
     */
    inline bool DockerVersionHasBeenSet() const { return m_dockerVersionHasBeenSet; }

    /**
     * <p>The Docker version running on the container instance.</p>
     */
    inline void SetDockerVersion(const Aws::String& value) { m_dockerVersionHasBeenSet = true; m_dockerVersion = value; }

    /**
     * <p>The Docker version running on the container instance.</p>
     */
    inline void SetDockerVersion(Aws::String&& value) { m_dockerVersionHasBeenSet = true; m_dockerVersion = std::move(value); }

    /**
     * <p>The Docker version running on the container instance.</p>
     */
    inline void SetDockerVersion(const char* value) { m_dockerVersionHasBeenSet = true; m_dockerVersion.assign(value); }

    /**
     * <p>The Docker version running on the container instance.</p>
     */
    inline VersionInfo& WithDockerVersion(const Aws::String& value) { SetDockerVersion(value); return *this;}

    /**
     * <p>The Docker version running on the container instance.</p>
     */
    inline VersionInfo& WithDockerVersion(Aws::String&& value) { SetDockerVersion(std::move(value)); return *this;}

    /**
     * <p>The Docker version running on the container instance.</p>
     */
    inline VersionInfo& WithDockerVersion(const char* value) { SetDockerVersion(value); return *this;}

  private:

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet;

    Aws::String m_agentHash;
    bool m_agentHashHasBeenSet;

    Aws::String m_dockerVersion;
    bool m_dockerVersionHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
