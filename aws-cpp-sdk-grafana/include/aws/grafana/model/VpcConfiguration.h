/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ManagedGrafana
{
namespace Model
{

  /**
   * <p>The configuration settings for an Amazon VPC that contains data sources for
   * your Grafana workspace to connect to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/VpcConfiguration">AWS
   * API Reference</a></p>
   */
  class VpcConfiguration
  {
  public:
    AWS_MANAGEDGRAFANA_API VpcConfiguration();
    AWS_MANAGEDGRAFANA_API VpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API VpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of Amazon EC2 security group IDs attached to the Amazon VPC for your
     * Grafana workspace to connect.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The list of Amazon EC2 security group IDs attached to the Amazon VPC for your
     * Grafana workspace to connect.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The list of Amazon EC2 security group IDs attached to the Amazon VPC for your
     * Grafana workspace to connect.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The list of Amazon EC2 security group IDs attached to the Amazon VPC for your
     * Grafana workspace to connect.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The list of Amazon EC2 security group IDs attached to the Amazon VPC for your
     * Grafana workspace to connect.</p>
     */
    inline VpcConfiguration& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The list of Amazon EC2 security group IDs attached to the Amazon VPC for your
     * Grafana workspace to connect.</p>
     */
    inline VpcConfiguration& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The list of Amazon EC2 security group IDs attached to the Amazon VPC for your
     * Grafana workspace to connect.</p>
     */
    inline VpcConfiguration& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The list of Amazon EC2 security group IDs attached to the Amazon VPC for your
     * Grafana workspace to connect.</p>
     */
    inline VpcConfiguration& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Amazon EC2 security group IDs attached to the Amazon VPC for your
     * Grafana workspace to connect.</p>
     */
    inline VpcConfiguration& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The list of Amazon EC2 subnet IDs created in the Amazon VPC for your Grafana
     * workspace to connect.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The list of Amazon EC2 subnet IDs created in the Amazon VPC for your Grafana
     * workspace to connect.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The list of Amazon EC2 subnet IDs created in the Amazon VPC for your Grafana
     * workspace to connect.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The list of Amazon EC2 subnet IDs created in the Amazon VPC for your Grafana
     * workspace to connect.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The list of Amazon EC2 subnet IDs created in the Amazon VPC for your Grafana
     * workspace to connect.</p>
     */
    inline VpcConfiguration& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The list of Amazon EC2 subnet IDs created in the Amazon VPC for your Grafana
     * workspace to connect.</p>
     */
    inline VpcConfiguration& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The list of Amazon EC2 subnet IDs created in the Amazon VPC for your Grafana
     * workspace to connect.</p>
     */
    inline VpcConfiguration& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The list of Amazon EC2 subnet IDs created in the Amazon VPC for your Grafana
     * workspace to connect.</p>
     */
    inline VpcConfiguration& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Amazon EC2 subnet IDs created in the Amazon VPC for your Grafana
     * workspace to connect.</p>
     */
    inline VpcConfiguration& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
