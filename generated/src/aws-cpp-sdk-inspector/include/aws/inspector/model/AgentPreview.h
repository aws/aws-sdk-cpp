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
    AWS_INSPECTOR_API AgentPreview();
    AWS_INSPECTOR_API AgentPreview(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AgentPreview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The hostname of the EC2 instance on which the Amazon Inspector Agent is
     * installed.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }
    inline AgentPreview& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}
    inline AgentPreview& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}
    inline AgentPreview& WithHostname(const char* value) { SetHostname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the EC2 instance where the agent is installed.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }
    inline AgentPreview& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline AgentPreview& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline AgentPreview& WithAgentId(const char* value) { SetAgentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Auto Scaling group for the EC2 instance where the agent is installed.</p>
     */
    inline const Aws::String& GetAutoScalingGroup() const{ return m_autoScalingGroup; }
    inline bool AutoScalingGroupHasBeenSet() const { return m_autoScalingGroupHasBeenSet; }
    inline void SetAutoScalingGroup(const Aws::String& value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup = value; }
    inline void SetAutoScalingGroup(Aws::String&& value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup = std::move(value); }
    inline void SetAutoScalingGroup(const char* value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup.assign(value); }
    inline AgentPreview& WithAutoScalingGroup(const Aws::String& value) { SetAutoScalingGroup(value); return *this;}
    inline AgentPreview& WithAutoScalingGroup(Aws::String&& value) { SetAutoScalingGroup(std::move(value)); return *this;}
    inline AgentPreview& WithAutoScalingGroup(const char* value) { SetAutoScalingGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health status of the Amazon Inspector Agent.</p>
     */
    inline const AgentHealth& GetAgentHealth() const{ return m_agentHealth; }
    inline bool AgentHealthHasBeenSet() const { return m_agentHealthHasBeenSet; }
    inline void SetAgentHealth(const AgentHealth& value) { m_agentHealthHasBeenSet = true; m_agentHealth = value; }
    inline void SetAgentHealth(AgentHealth&& value) { m_agentHealthHasBeenSet = true; m_agentHealth = std::move(value); }
    inline AgentPreview& WithAgentHealth(const AgentHealth& value) { SetAgentHealth(value); return *this;}
    inline AgentPreview& WithAgentHealth(AgentHealth&& value) { SetAgentHealth(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Amazon Inspector Agent.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }
    inline AgentPreview& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}
    inline AgentPreview& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}
    inline AgentPreview& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system running on the EC2 instance on which the Amazon
     * Inspector Agent is installed.</p>
     */
    inline const Aws::String& GetOperatingSystem() const{ return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(const Aws::String& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline void SetOperatingSystem(Aws::String&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }
    inline void SetOperatingSystem(const char* value) { m_operatingSystemHasBeenSet = true; m_operatingSystem.assign(value); }
    inline AgentPreview& WithOperatingSystem(const Aws::String& value) { SetOperatingSystem(value); return *this;}
    inline AgentPreview& WithOperatingSystem(Aws::String&& value) { SetOperatingSystem(std::move(value)); return *this;}
    inline AgentPreview& WithOperatingSystem(const char* value) { SetOperatingSystem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The kernel version of the operating system running on the EC2 instance on
     * which the Amazon Inspector Agent is installed.</p>
     */
    inline const Aws::String& GetKernelVersion() const{ return m_kernelVersion; }
    inline bool KernelVersionHasBeenSet() const { return m_kernelVersionHasBeenSet; }
    inline void SetKernelVersion(const Aws::String& value) { m_kernelVersionHasBeenSet = true; m_kernelVersion = value; }
    inline void SetKernelVersion(Aws::String&& value) { m_kernelVersionHasBeenSet = true; m_kernelVersion = std::move(value); }
    inline void SetKernelVersion(const char* value) { m_kernelVersionHasBeenSet = true; m_kernelVersion.assign(value); }
    inline AgentPreview& WithKernelVersion(const Aws::String& value) { SetKernelVersion(value); return *this;}
    inline AgentPreview& WithKernelVersion(Aws::String&& value) { SetKernelVersion(std::move(value)); return *this;}
    inline AgentPreview& WithKernelVersion(const char* value) { SetKernelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the EC2 instance on which the Amazon Inspector Agent is
     * installed.</p>
     */
    inline const Aws::String& GetIpv4Address() const{ return m_ipv4Address; }
    inline bool Ipv4AddressHasBeenSet() const { return m_ipv4AddressHasBeenSet; }
    inline void SetIpv4Address(const Aws::String& value) { m_ipv4AddressHasBeenSet = true; m_ipv4Address = value; }
    inline void SetIpv4Address(Aws::String&& value) { m_ipv4AddressHasBeenSet = true; m_ipv4Address = std::move(value); }
    inline void SetIpv4Address(const char* value) { m_ipv4AddressHasBeenSet = true; m_ipv4Address.assign(value); }
    inline AgentPreview& WithIpv4Address(const Aws::String& value) { SetIpv4Address(value); return *this;}
    inline AgentPreview& WithIpv4Address(Aws::String&& value) { SetIpv4Address(std::move(value)); return *this;}
    inline AgentPreview& WithIpv4Address(const char* value) { SetIpv4Address(value); return *this;}
    ///@}
  private:

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_autoScalingGroup;
    bool m_autoScalingGroupHasBeenSet = false;

    AgentHealth m_agentHealth;
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
