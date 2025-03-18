/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/AgentHealth.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>Used as a response element in the <a>PreviewAgents</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AgentPreview">AWS
   * API Reference</a></p>
   */
  class AgentPreview
  {
  public:
    AWS_INSPECTOR_API AgentPreview() = default;
    AWS_INSPECTOR_API AgentPreview(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AgentPreview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The hostname of the EC2 instance on which the Amazon Inspector Agent is
     * installed.</p>
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    AgentPreview& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the EC2 instance where the agent is installed.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    AgentPreview& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Auto Scaling group for the EC2 instance where the agent is installed.</p>
     */
    inline const Aws::String& GetAutoScalingGroup() const { return m_autoScalingGroup; }
    inline bool AutoScalingGroupHasBeenSet() const { return m_autoScalingGroupHasBeenSet; }
    template<typename AutoScalingGroupT = Aws::String>
    void SetAutoScalingGroup(AutoScalingGroupT&& value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup = std::forward<AutoScalingGroupT>(value); }
    template<typename AutoScalingGroupT = Aws::String>
    AgentPreview& WithAutoScalingGroup(AutoScalingGroupT&& value) { SetAutoScalingGroup(std::forward<AutoScalingGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health status of the Amazon Inspector Agent.</p>
     */
    inline AgentHealth GetAgentHealth() const { return m_agentHealth; }
    inline bool AgentHealthHasBeenSet() const { return m_agentHealthHasBeenSet; }
    inline void SetAgentHealth(AgentHealth value) { m_agentHealthHasBeenSet = true; m_agentHealth = value; }
    inline AgentPreview& WithAgentHealth(AgentHealth value) { SetAgentHealth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Amazon Inspector Agent.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    AgentPreview& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system running on the EC2 instance on which the Amazon
     * Inspector Agent is installed.</p>
     */
    inline const Aws::String& GetOperatingSystem() const { return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    template<typename OperatingSystemT = Aws::String>
    void SetOperatingSystem(OperatingSystemT&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::forward<OperatingSystemT>(value); }
    template<typename OperatingSystemT = Aws::String>
    AgentPreview& WithOperatingSystem(OperatingSystemT&& value) { SetOperatingSystem(std::forward<OperatingSystemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The kernel version of the operating system running on the EC2 instance on
     * which the Amazon Inspector Agent is installed.</p>
     */
    inline const Aws::String& GetKernelVersion() const { return m_kernelVersion; }
    inline bool KernelVersionHasBeenSet() const { return m_kernelVersionHasBeenSet; }
    template<typename KernelVersionT = Aws::String>
    void SetKernelVersion(KernelVersionT&& value) { m_kernelVersionHasBeenSet = true; m_kernelVersion = std::forward<KernelVersionT>(value); }
    template<typename KernelVersionT = Aws::String>
    AgentPreview& WithKernelVersion(KernelVersionT&& value) { SetKernelVersion(std::forward<KernelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the EC2 instance on which the Amazon Inspector Agent is
     * installed.</p>
     */
    inline const Aws::String& GetIpv4Address() const { return m_ipv4Address; }
    inline bool Ipv4AddressHasBeenSet() const { return m_ipv4AddressHasBeenSet; }
    template<typename Ipv4AddressT = Aws::String>
    void SetIpv4Address(Ipv4AddressT&& value) { m_ipv4AddressHasBeenSet = true; m_ipv4Address = std::forward<Ipv4AddressT>(value); }
    template<typename Ipv4AddressT = Aws::String>
    AgentPreview& WithIpv4Address(Ipv4AddressT&& value) { SetIpv4Address(std::forward<Ipv4AddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_autoScalingGroup;
    bool m_autoScalingGroupHasBeenSet = false;

    AgentHealth m_agentHealth{AgentHealth::NOT_SET};
    bool m_agentHealthHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    Aws::String m_kernelVersion;
    bool m_kernelVersionHasBeenSet = false;

    Aws::String m_ipv4Address;
    bool m_ipv4AddressHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
