/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/ComponentVersion.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Detailed information about the agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/AgentDetails">AWS
   * API Reference</a></p>
   */
  class AgentDetails
  {
  public:
    AWS_GROUNDSTATION_API AgentDetails();
    AWS_GROUNDSTATION_API AgentDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API AgentDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of CPU cores reserved for the agent.</p>
     */
    inline const Aws::Vector<int>& GetAgentCpuCores() const{ return m_agentCpuCores; }
    inline bool AgentCpuCoresHasBeenSet() const { return m_agentCpuCoresHasBeenSet; }
    inline void SetAgentCpuCores(const Aws::Vector<int>& value) { m_agentCpuCoresHasBeenSet = true; m_agentCpuCores = value; }
    inline void SetAgentCpuCores(Aws::Vector<int>&& value) { m_agentCpuCoresHasBeenSet = true; m_agentCpuCores = std::move(value); }
    inline AgentDetails& WithAgentCpuCores(const Aws::Vector<int>& value) { SetAgentCpuCores(value); return *this;}
    inline AgentDetails& WithAgentCpuCores(Aws::Vector<int>&& value) { SetAgentCpuCores(std::move(value)); return *this;}
    inline AgentDetails& AddAgentCpuCores(int value) { m_agentCpuCoresHasBeenSet = true; m_agentCpuCores.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Current agent version.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }
    inline AgentDetails& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}
    inline AgentDetails& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}
    inline AgentDetails& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of versions being used by agent components.</p>
     */
    inline const Aws::Vector<ComponentVersion>& GetComponentVersions() const{ return m_componentVersions; }
    inline bool ComponentVersionsHasBeenSet() const { return m_componentVersionsHasBeenSet; }
    inline void SetComponentVersions(const Aws::Vector<ComponentVersion>& value) { m_componentVersionsHasBeenSet = true; m_componentVersions = value; }
    inline void SetComponentVersions(Aws::Vector<ComponentVersion>&& value) { m_componentVersionsHasBeenSet = true; m_componentVersions = std::move(value); }
    inline AgentDetails& WithComponentVersions(const Aws::Vector<ComponentVersion>& value) { SetComponentVersions(value); return *this;}
    inline AgentDetails& WithComponentVersions(Aws::Vector<ComponentVersion>&& value) { SetComponentVersions(std::move(value)); return *this;}
    inline AgentDetails& AddComponentVersions(const ComponentVersion& value) { m_componentVersionsHasBeenSet = true; m_componentVersions.push_back(value); return *this; }
    inline AgentDetails& AddComponentVersions(ComponentVersion&& value) { m_componentVersionsHasBeenSet = true; m_componentVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>ID of EC2 instance agent is running on.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline AgentDetails& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline AgentDetails& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline AgentDetails& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of EC2 instance agent is running on.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline AgentDetails& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline AgentDetails& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline AgentDetails& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>This field should not be used. Use agentCpuCores instead.</p> 
     * <p>List of CPU cores reserved for processes other than the agent running on the
     * EC2 instance.</p>
     */
    inline const Aws::Vector<int>& GetReservedCpuCores() const{ return m_reservedCpuCores; }
    inline bool ReservedCpuCoresHasBeenSet() const { return m_reservedCpuCoresHasBeenSet; }
    inline void SetReservedCpuCores(const Aws::Vector<int>& value) { m_reservedCpuCoresHasBeenSet = true; m_reservedCpuCores = value; }
    inline void SetReservedCpuCores(Aws::Vector<int>&& value) { m_reservedCpuCoresHasBeenSet = true; m_reservedCpuCores = std::move(value); }
    inline AgentDetails& WithReservedCpuCores(const Aws::Vector<int>& value) { SetReservedCpuCores(value); return *this;}
    inline AgentDetails& WithReservedCpuCores(Aws::Vector<int>&& value) { SetReservedCpuCores(std::move(value)); return *this;}
    inline AgentDetails& AddReservedCpuCores(int value) { m_reservedCpuCoresHasBeenSet = true; m_reservedCpuCores.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<int> m_agentCpuCores;
    bool m_agentCpuCoresHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::Vector<ComponentVersion> m_componentVersions;
    bool m_componentVersionsHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::Vector<int> m_reservedCpuCores;
    bool m_reservedCpuCoresHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
