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
    AWS_EKS_API RemoteAccessConfig();
    AWS_EKS_API RemoteAccessConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API RemoteAccessConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const Aws::String& GetEc2SshKey() const{ return m_ec2SshKey; }

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
    inline bool Ec2SshKeyHasBeenSet() const { return m_ec2SshKeyHasBeenSet; }

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
    inline void SetEc2SshKey(const Aws::String& value) { m_ec2SshKeyHasBeenSet = true; m_ec2SshKey = value; }

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
    inline void SetEc2SshKey(Aws::String&& value) { m_ec2SshKeyHasBeenSet = true; m_ec2SshKey = std::move(value); }

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
    inline void SetEc2SshKey(const char* value) { m_ec2SshKeyHasBeenSet = true; m_ec2SshKey.assign(value); }

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
    inline RemoteAccessConfig& WithEc2SshKey(const Aws::String& value) { SetEc2SshKey(value); return *this;}

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
    inline RemoteAccessConfig& WithEc2SshKey(Aws::String&& value) { SetEc2SshKey(std::move(value)); return *this;}

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
    inline RemoteAccessConfig& WithEc2SshKey(const char* value) { SetEc2SshKey(value); return *this;}


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
    inline const Aws::Vector<Aws::String>& GetSourceSecurityGroups() const{ return m_sourceSecurityGroups; }

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
    inline bool SourceSecurityGroupsHasBeenSet() const { return m_sourceSecurityGroupsHasBeenSet; }

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
    inline void SetSourceSecurityGroups(const Aws::Vector<Aws::String>& value) { m_sourceSecurityGroupsHasBeenSet = true; m_sourceSecurityGroups = value; }

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
    inline void SetSourceSecurityGroups(Aws::Vector<Aws::String>&& value) { m_sourceSecurityGroupsHasBeenSet = true; m_sourceSecurityGroups = std::move(value); }

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
    inline RemoteAccessConfig& WithSourceSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSourceSecurityGroups(value); return *this;}

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
    inline RemoteAccessConfig& WithSourceSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSourceSecurityGroups(std::move(value)); return *this;}

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
    inline RemoteAccessConfig& AddSourceSecurityGroups(const Aws::String& value) { m_sourceSecurityGroupsHasBeenSet = true; m_sourceSecurityGroups.push_back(value); return *this; }

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
    inline RemoteAccessConfig& AddSourceSecurityGroups(Aws::String&& value) { m_sourceSecurityGroupsHasBeenSet = true; m_sourceSecurityGroups.push_back(std::move(value)); return *this; }

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
    inline RemoteAccessConfig& AddSourceSecurityGroups(const char* value) { m_sourceSecurityGroupsHasBeenSet = true; m_sourceSecurityGroups.push_back(value); return *this; }

  private:

    Aws::String m_ec2SshKey;
    bool m_ec2SshKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceSecurityGroups;
    bool m_sourceSecurityGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
