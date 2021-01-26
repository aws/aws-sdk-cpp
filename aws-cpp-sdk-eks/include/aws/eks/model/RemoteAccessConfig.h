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
  class AWS_EKS_API RemoteAccessConfig
  {
  public:
    RemoteAccessConfig();
    RemoteAccessConfig(Aws::Utils::Json::JsonView jsonValue);
    RemoteAccessConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon EC2 SSH key that provides access for SSH communication with the
     * worker nodes in the managed node group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide for Linux
     * Instances</i>.</p>
     */
    inline const Aws::String& GetEc2SshKey() const{ return m_ec2SshKey; }

    /**
     * <p>The Amazon EC2 SSH key that provides access for SSH communication with the
     * worker nodes in the managed node group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide for Linux
     * Instances</i>.</p>
     */
    inline bool Ec2SshKeyHasBeenSet() const { return m_ec2SshKeyHasBeenSet; }

    /**
     * <p>The Amazon EC2 SSH key that provides access for SSH communication with the
     * worker nodes in the managed node group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetEc2SshKey(const Aws::String& value) { m_ec2SshKeyHasBeenSet = true; m_ec2SshKey = value; }

    /**
     * <p>The Amazon EC2 SSH key that provides access for SSH communication with the
     * worker nodes in the managed node group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetEc2SshKey(Aws::String&& value) { m_ec2SshKeyHasBeenSet = true; m_ec2SshKey = std::move(value); }

    /**
     * <p>The Amazon EC2 SSH key that provides access for SSH communication with the
     * worker nodes in the managed node group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetEc2SshKey(const char* value) { m_ec2SshKeyHasBeenSet = true; m_ec2SshKey.assign(value); }

    /**
     * <p>The Amazon EC2 SSH key that provides access for SSH communication with the
     * worker nodes in the managed node group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide for Linux
     * Instances</i>.</p>
     */
    inline RemoteAccessConfig& WithEc2SshKey(const Aws::String& value) { SetEc2SshKey(value); return *this;}

    /**
     * <p>The Amazon EC2 SSH key that provides access for SSH communication with the
     * worker nodes in the managed node group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide for Linux
     * Instances</i>.</p>
     */
    inline RemoteAccessConfig& WithEc2SshKey(Aws::String&& value) { SetEc2SshKey(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 SSH key that provides access for SSH communication with the
     * worker nodes in the managed node group. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon
     * EC2 Key Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide for Linux
     * Instances</i>.</p>
     */
    inline RemoteAccessConfig& WithEc2SshKey(const char* value) { SetEc2SshKey(value); return *this;}


    /**
     * <p>The security groups that are allowed SSH access (port 22) to the worker
     * nodes. If you specify an Amazon EC2 SSH key but do not specify a source security
     * group when you create a managed node group, then port 22 on the worker nodes is
     * opened to the internet (0.0.0.0/0). For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceSecurityGroups() const{ return m_sourceSecurityGroups; }

    /**
     * <p>The security groups that are allowed SSH access (port 22) to the worker
     * nodes. If you specify an Amazon EC2 SSH key but do not specify a source security
     * group when you create a managed node group, then port 22 on the worker nodes is
     * opened to the internet (0.0.0.0/0). For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline bool SourceSecurityGroupsHasBeenSet() const { return m_sourceSecurityGroupsHasBeenSet; }

    /**
     * <p>The security groups that are allowed SSH access (port 22) to the worker
     * nodes. If you specify an Amazon EC2 SSH key but do not specify a source security
     * group when you create a managed node group, then port 22 on the worker nodes is
     * opened to the internet (0.0.0.0/0). For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline void SetSourceSecurityGroups(const Aws::Vector<Aws::String>& value) { m_sourceSecurityGroupsHasBeenSet = true; m_sourceSecurityGroups = value; }

    /**
     * <p>The security groups that are allowed SSH access (port 22) to the worker
     * nodes. If you specify an Amazon EC2 SSH key but do not specify a source security
     * group when you create a managed node group, then port 22 on the worker nodes is
     * opened to the internet (0.0.0.0/0). For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline void SetSourceSecurityGroups(Aws::Vector<Aws::String>&& value) { m_sourceSecurityGroupsHasBeenSet = true; m_sourceSecurityGroups = std::move(value); }

    /**
     * <p>The security groups that are allowed SSH access (port 22) to the worker
     * nodes. If you specify an Amazon EC2 SSH key but do not specify a source security
     * group when you create a managed node group, then port 22 on the worker nodes is
     * opened to the internet (0.0.0.0/0). For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline RemoteAccessConfig& WithSourceSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSourceSecurityGroups(value); return *this;}

    /**
     * <p>The security groups that are allowed SSH access (port 22) to the worker
     * nodes. If you specify an Amazon EC2 SSH key but do not specify a source security
     * group when you create a managed node group, then port 22 on the worker nodes is
     * opened to the internet (0.0.0.0/0). For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline RemoteAccessConfig& WithSourceSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSourceSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The security groups that are allowed SSH access (port 22) to the worker
     * nodes. If you specify an Amazon EC2 SSH key but do not specify a source security
     * group when you create a managed node group, then port 22 on the worker nodes is
     * opened to the internet (0.0.0.0/0). For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline RemoteAccessConfig& AddSourceSecurityGroups(const Aws::String& value) { m_sourceSecurityGroupsHasBeenSet = true; m_sourceSecurityGroups.push_back(value); return *this; }

    /**
     * <p>The security groups that are allowed SSH access (port 22) to the worker
     * nodes. If you specify an Amazon EC2 SSH key but do not specify a source security
     * group when you create a managed node group, then port 22 on the worker nodes is
     * opened to the internet (0.0.0.0/0). For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline RemoteAccessConfig& AddSourceSecurityGroups(Aws::String&& value) { m_sourceSecurityGroupsHasBeenSet = true; m_sourceSecurityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The security groups that are allowed SSH access (port 22) to the worker
     * nodes. If you specify an Amazon EC2 SSH key but do not specify a source security
     * group when you create a managed node group, then port 22 on the worker nodes is
     * opened to the internet (0.0.0.0/0). For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Security
     * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline RemoteAccessConfig& AddSourceSecurityGroups(const char* value) { m_sourceSecurityGroupsHasBeenSet = true; m_sourceSecurityGroups.push_back(value); return *this; }

  private:

    Aws::String m_ec2SshKey;
    bool m_ec2SshKeyHasBeenSet;

    Aws::Vector<Aws::String> m_sourceSecurityGroups;
    bool m_sourceSecurityGroupsHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
