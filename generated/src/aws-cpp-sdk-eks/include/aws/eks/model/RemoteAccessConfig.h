/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing the remote access configuration for the managed node
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/RemoteAccessConfig">AWS
   * API Reference</a></p>
   */
  class RemoteAccessConfig
  {
  public:
    AWS_EKS_API RemoteAccessConfig() = default;
    AWS_EKS_API RemoteAccessConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API RemoteAccessConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon EC2 SSH key name that provides access for SSH communication with
     * the nodes in the managed node group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 key pairs and Linux instances</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide for Linux Instances</i>. For Windows, an Amazon EC2 SSH key is used
     * to obtain the RDP password. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-key-pairs.html">Amazon
     * EC2 key pairs and Windows instances</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide for Windows Instances</i>.</p>
     */
    inline const Aws::String& GetEc2SshKey() const { return m_ec2SshKey; }
    inline bool Ec2SshKeyHasBeenSet() const { return m_ec2SshKeyHasBeenSet; }
    template<typename Ec2SshKeyT = Aws::String>
    void SetEc2SshKey(Ec2SshKeyT&& value) { m_ec2SshKeyHasBeenSet = true; m_ec2SshKey = std::forward<Ec2SshKeyT>(value); }
    template<typename Ec2SshKeyT = Aws::String>
    RemoteAccessConfig& WithEc2SshKey(Ec2SshKeyT&& value) { SetEc2SshKey(std::forward<Ec2SshKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group IDs that are allowed SSH access (port 22) to the nodes.
     * For Windows, the port is 3389. If you specify an Amazon EC2 SSH key but don't
     * specify a source security group when you create a managed node group, then the
     * port on the nodes is opened to the internet (<code>0.0.0.0/0</code>). For more
     * information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceSecurityGroups() const { return m_sourceSecurityGroups; }
    inline bool SourceSecurityGroupsHasBeenSet() const { return m_sourceSecurityGroupsHasBeenSet; }
    template<typename SourceSecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSourceSecurityGroups(SourceSecurityGroupsT&& value) { m_sourceSecurityGroupsHasBeenSet = true; m_sourceSecurityGroups = std::forward<SourceSecurityGroupsT>(value); }
    template<typename SourceSecurityGroupsT = Aws::Vector<Aws::String>>
    RemoteAccessConfig& WithSourceSecurityGroups(SourceSecurityGroupsT&& value) { SetSourceSecurityGroups(std::forward<SourceSecurityGroupsT>(value)); return *this;}
    template<typename SourceSecurityGroupsT = Aws::String>
    RemoteAccessConfig& AddSourceSecurityGroups(SourceSecurityGroupsT&& value) { m_sourceSecurityGroupsHasBeenSet = true; m_sourceSecurityGroups.emplace_back(std::forward<SourceSecurityGroupsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_ec2SshKey;
    bool m_ec2SshKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceSecurityGroups;
    bool m_sourceSecurityGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
