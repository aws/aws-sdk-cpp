/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/PortRange.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>A configuration for Amazon EMR block public access. When
   * <code>BlockPublicSecurityGroupRules</code> is set to <code>true</code>, Amazon
   * EMR prevents cluster creation if one of the cluster's security groups has a rule
   * that allows inbound traffic from 0.0.0.0/0 or ::/0 on a port, unless the port is
   * specified as an exception using
   * <code>PermittedPublicSecurityGroupRuleRanges</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/BlockPublicAccessConfiguration">AWS
   * API Reference</a></p>
   */
  class BlockPublicAccessConfiguration
  {
  public:
    AWS_EMR_API BlockPublicAccessConfiguration();
    AWS_EMR_API BlockPublicAccessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API BlockPublicAccessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether Amazon EMR block public access is enabled
     * (<code>true</code>) or disabled (<code>false</code>). By default, the value is
     * <code>false</code> for accounts that have created EMR clusters before July 2019.
     * For accounts created after this, the default is <code>true</code>.</p>
     */
    inline bool GetBlockPublicSecurityGroupRules() const{ return m_blockPublicSecurityGroupRules; }

    /**
     * <p>Indicates whether Amazon EMR block public access is enabled
     * (<code>true</code>) or disabled (<code>false</code>). By default, the value is
     * <code>false</code> for accounts that have created EMR clusters before July 2019.
     * For accounts created after this, the default is <code>true</code>.</p>
     */
    inline bool BlockPublicSecurityGroupRulesHasBeenSet() const { return m_blockPublicSecurityGroupRulesHasBeenSet; }

    /**
     * <p>Indicates whether Amazon EMR block public access is enabled
     * (<code>true</code>) or disabled (<code>false</code>). By default, the value is
     * <code>false</code> for accounts that have created EMR clusters before July 2019.
     * For accounts created after this, the default is <code>true</code>.</p>
     */
    inline void SetBlockPublicSecurityGroupRules(bool value) { m_blockPublicSecurityGroupRulesHasBeenSet = true; m_blockPublicSecurityGroupRules = value; }

    /**
     * <p>Indicates whether Amazon EMR block public access is enabled
     * (<code>true</code>) or disabled (<code>false</code>). By default, the value is
     * <code>false</code> for accounts that have created EMR clusters before July 2019.
     * For accounts created after this, the default is <code>true</code>.</p>
     */
    inline BlockPublicAccessConfiguration& WithBlockPublicSecurityGroupRules(bool value) { SetBlockPublicSecurityGroupRules(value); return *this;}


    /**
     * <p>Specifies ports and port ranges that are permitted to have security group
     * rules that allow inbound traffic from all public sources. For example, if Port
     * 23 (Telnet) is specified for
     * <code>PermittedPublicSecurityGroupRuleRanges</code>, Amazon EMR allows cluster
     * creation if a security group associated with the cluster has a rule that allows
     * inbound traffic on Port 23 from IPv4 0.0.0.0/0 or IPv6 port ::/0 as the
     * source.</p> <p>By default, Port 22, which is used for SSH access to the cluster
     * EC2 instances, is in the list of
     * <code>PermittedPublicSecurityGroupRuleRanges</code>.</p>
     */
    inline const Aws::Vector<PortRange>& GetPermittedPublicSecurityGroupRuleRanges() const{ return m_permittedPublicSecurityGroupRuleRanges; }

    /**
     * <p>Specifies ports and port ranges that are permitted to have security group
     * rules that allow inbound traffic from all public sources. For example, if Port
     * 23 (Telnet) is specified for
     * <code>PermittedPublicSecurityGroupRuleRanges</code>, Amazon EMR allows cluster
     * creation if a security group associated with the cluster has a rule that allows
     * inbound traffic on Port 23 from IPv4 0.0.0.0/0 or IPv6 port ::/0 as the
     * source.</p> <p>By default, Port 22, which is used for SSH access to the cluster
     * EC2 instances, is in the list of
     * <code>PermittedPublicSecurityGroupRuleRanges</code>.</p>
     */
    inline bool PermittedPublicSecurityGroupRuleRangesHasBeenSet() const { return m_permittedPublicSecurityGroupRuleRangesHasBeenSet; }

    /**
     * <p>Specifies ports and port ranges that are permitted to have security group
     * rules that allow inbound traffic from all public sources. For example, if Port
     * 23 (Telnet) is specified for
     * <code>PermittedPublicSecurityGroupRuleRanges</code>, Amazon EMR allows cluster
     * creation if a security group associated with the cluster has a rule that allows
     * inbound traffic on Port 23 from IPv4 0.0.0.0/0 or IPv6 port ::/0 as the
     * source.</p> <p>By default, Port 22, which is used for SSH access to the cluster
     * EC2 instances, is in the list of
     * <code>PermittedPublicSecurityGroupRuleRanges</code>.</p>
     */
    inline void SetPermittedPublicSecurityGroupRuleRanges(const Aws::Vector<PortRange>& value) { m_permittedPublicSecurityGroupRuleRangesHasBeenSet = true; m_permittedPublicSecurityGroupRuleRanges = value; }

    /**
     * <p>Specifies ports and port ranges that are permitted to have security group
     * rules that allow inbound traffic from all public sources. For example, if Port
     * 23 (Telnet) is specified for
     * <code>PermittedPublicSecurityGroupRuleRanges</code>, Amazon EMR allows cluster
     * creation if a security group associated with the cluster has a rule that allows
     * inbound traffic on Port 23 from IPv4 0.0.0.0/0 or IPv6 port ::/0 as the
     * source.</p> <p>By default, Port 22, which is used for SSH access to the cluster
     * EC2 instances, is in the list of
     * <code>PermittedPublicSecurityGroupRuleRanges</code>.</p>
     */
    inline void SetPermittedPublicSecurityGroupRuleRanges(Aws::Vector<PortRange>&& value) { m_permittedPublicSecurityGroupRuleRangesHasBeenSet = true; m_permittedPublicSecurityGroupRuleRanges = std::move(value); }

    /**
     * <p>Specifies ports and port ranges that are permitted to have security group
     * rules that allow inbound traffic from all public sources. For example, if Port
     * 23 (Telnet) is specified for
     * <code>PermittedPublicSecurityGroupRuleRanges</code>, Amazon EMR allows cluster
     * creation if a security group associated with the cluster has a rule that allows
     * inbound traffic on Port 23 from IPv4 0.0.0.0/0 or IPv6 port ::/0 as the
     * source.</p> <p>By default, Port 22, which is used for SSH access to the cluster
     * EC2 instances, is in the list of
     * <code>PermittedPublicSecurityGroupRuleRanges</code>.</p>
     */
    inline BlockPublicAccessConfiguration& WithPermittedPublicSecurityGroupRuleRanges(const Aws::Vector<PortRange>& value) { SetPermittedPublicSecurityGroupRuleRanges(value); return *this;}

    /**
     * <p>Specifies ports and port ranges that are permitted to have security group
     * rules that allow inbound traffic from all public sources. For example, if Port
     * 23 (Telnet) is specified for
     * <code>PermittedPublicSecurityGroupRuleRanges</code>, Amazon EMR allows cluster
     * creation if a security group associated with the cluster has a rule that allows
     * inbound traffic on Port 23 from IPv4 0.0.0.0/0 or IPv6 port ::/0 as the
     * source.</p> <p>By default, Port 22, which is used for SSH access to the cluster
     * EC2 instances, is in the list of
     * <code>PermittedPublicSecurityGroupRuleRanges</code>.</p>
     */
    inline BlockPublicAccessConfiguration& WithPermittedPublicSecurityGroupRuleRanges(Aws::Vector<PortRange>&& value) { SetPermittedPublicSecurityGroupRuleRanges(std::move(value)); return *this;}

    /**
     * <p>Specifies ports and port ranges that are permitted to have security group
     * rules that allow inbound traffic from all public sources. For example, if Port
     * 23 (Telnet) is specified for
     * <code>PermittedPublicSecurityGroupRuleRanges</code>, Amazon EMR allows cluster
     * creation if a security group associated with the cluster has a rule that allows
     * inbound traffic on Port 23 from IPv4 0.0.0.0/0 or IPv6 port ::/0 as the
     * source.</p> <p>By default, Port 22, which is used for SSH access to the cluster
     * EC2 instances, is in the list of
     * <code>PermittedPublicSecurityGroupRuleRanges</code>.</p>
     */
    inline BlockPublicAccessConfiguration& AddPermittedPublicSecurityGroupRuleRanges(const PortRange& value) { m_permittedPublicSecurityGroupRuleRangesHasBeenSet = true; m_permittedPublicSecurityGroupRuleRanges.push_back(value); return *this; }

    /**
     * <p>Specifies ports and port ranges that are permitted to have security group
     * rules that allow inbound traffic from all public sources. For example, if Port
     * 23 (Telnet) is specified for
     * <code>PermittedPublicSecurityGroupRuleRanges</code>, Amazon EMR allows cluster
     * creation if a security group associated with the cluster has a rule that allows
     * inbound traffic on Port 23 from IPv4 0.0.0.0/0 or IPv6 port ::/0 as the
     * source.</p> <p>By default, Port 22, which is used for SSH access to the cluster
     * EC2 instances, is in the list of
     * <code>PermittedPublicSecurityGroupRuleRanges</code>.</p>
     */
    inline BlockPublicAccessConfiguration& AddPermittedPublicSecurityGroupRuleRanges(PortRange&& value) { m_permittedPublicSecurityGroupRuleRangesHasBeenSet = true; m_permittedPublicSecurityGroupRuleRanges.push_back(std::move(value)); return *this; }

  private:

    bool m_blockPublicSecurityGroupRules;
    bool m_blockPublicSecurityGroupRulesHasBeenSet = false;

    Aws::Vector<PortRange> m_permittedPublicSecurityGroupRuleRanges;
    bool m_permittedPublicSecurityGroupRuleRangesHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
