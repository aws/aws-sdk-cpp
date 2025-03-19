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
    AWS_GROUNDSTATION_API AgentDetails() = default;
    AWS_GROUNDSTATION_API AgentDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API AgentDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of CPU cores reserved for the agent.</p>
     */
    inline const Aws::Vector<int>& GetAgentCpuCores() const { return m_agentCpuCores; }
    inline bool AgentCpuCoresHasBeenSet() const { return m_agentCpuCoresHasBeenSet; }
    template<typename AgentCpuCoresT = Aws::Vector<int>>
    void SetAgentCpuCores(AgentCpuCoresT&& value) { m_agentCpuCoresHasBeenSet = true; m_agentCpuCores = std::forward<AgentCpuCoresT>(value); }
    template<typename AgentCpuCoresT = Aws::Vector<int>>
    AgentDetails& WithAgentCpuCores(AgentCpuCoresT&& value) { SetAgentCpuCores(std::forward<AgentCpuCoresT>(value)); return *this;}
    inline AgentDetails& AddAgentCpuCores(int value) { m_agentCpuCoresHasBeenSet = true; m_agentCpuCores.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Current agent version.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    AgentDetails& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of versions being used by agent components.</p>
     */
    inline const Aws::Vector<ComponentVersion>& GetComponentVersions() const { return m_componentVersions; }
    inline bool ComponentVersionsHasBeenSet() const { return m_componentVersionsHasBeenSet; }
    template<typename ComponentVersionsT = Aws::Vector<ComponentVersion>>
    void SetComponentVersions(ComponentVersionsT&& value) { m_componentVersionsHasBeenSet = true; m_componentVersions = std::forward<ComponentVersionsT>(value); }
    template<typename ComponentVersionsT = Aws::Vector<ComponentVersion>>
    AgentDetails& WithComponentVersions(ComponentVersionsT&& value) { SetComponentVersions(std::forward<ComponentVersionsT>(value)); return *this;}
    template<typename ComponentVersionsT = ComponentVersion>
    AgentDetails& AddComponentVersions(ComponentVersionsT&& value) { m_componentVersionsHasBeenSet = true; m_componentVersions.emplace_back(std::forward<ComponentVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>ID of EC2 instance agent is running on.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    AgentDetails& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of EC2 instance agent is running on.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    AgentDetails& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>This field should not be used. Use agentCpuCores instead.</p> 
     * <p>List of CPU cores reserved for processes other than the agent running on the
     * EC2 instance.</p>
     */
    inline const Aws::Vector<int>& GetReservedCpuCores() const { return m_reservedCpuCores; }
    inline bool ReservedCpuCoresHasBeenSet() const { return m_reservedCpuCoresHasBeenSet; }
    template<typename ReservedCpuCoresT = Aws::Vector<int>>
    void SetReservedCpuCores(ReservedCpuCoresT&& value) { m_reservedCpuCoresHasBeenSet = true; m_reservedCpuCores = std::forward<ReservedCpuCoresT>(value); }
    template<typename ReservedCpuCoresT = Aws::Vector<int>>
    AgentDetails& WithReservedCpuCores(ReservedCpuCoresT&& value) { SetReservedCpuCores(std::forward<ReservedCpuCoresT>(value)); return *this;}
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
