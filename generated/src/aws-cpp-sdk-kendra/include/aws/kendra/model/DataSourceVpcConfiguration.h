/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information to connect to an Amazon
   * VPC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DataSourceVpcConfiguration">AWS
   * API Reference</a></p>
   */
  class DataSourceVpcConfiguration
  {
  public:
    AWS_KENDRA_API DataSourceVpcConfiguration();
    AWS_KENDRA_API DataSourceVpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DataSourceVpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of identifiers for subnets within your Amazon VPC. The subnets should
     * be able to connect to each other in the VPC, and they should have outgoing
     * access to the Internet through a NAT device.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of identifiers for subnets within your Amazon VPC. The subnets should
     * be able to connect to each other in the VPC, and they should have outgoing
     * access to the Internet through a NAT device.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of identifiers for subnets within your Amazon VPC. The subnets should
     * be able to connect to each other in the VPC, and they should have outgoing
     * access to the Internet through a NAT device.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of identifiers for subnets within your Amazon VPC. The subnets should
     * be able to connect to each other in the VPC, and they should have outgoing
     * access to the Internet through a NAT device.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of identifiers for subnets within your Amazon VPC. The subnets should
     * be able to connect to each other in the VPC, and they should have outgoing
     * access to the Internet through a NAT device.</p>
     */
    inline DataSourceVpcConfiguration& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of identifiers for subnets within your Amazon VPC. The subnets should
     * be able to connect to each other in the VPC, and they should have outgoing
     * access to the Internet through a NAT device.</p>
     */
    inline DataSourceVpcConfiguration& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of identifiers for subnets within your Amazon VPC. The subnets should
     * be able to connect to each other in the VPC, and they should have outgoing
     * access to the Internet through a NAT device.</p>
     */
    inline DataSourceVpcConfiguration& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of identifiers for subnets within your Amazon VPC. The subnets should
     * be able to connect to each other in the VPC, and they should have outgoing
     * access to the Internet through a NAT device.</p>
     */
    inline DataSourceVpcConfiguration& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of identifiers for subnets within your Amazon VPC. The subnets should
     * be able to connect to each other in the VPC, and they should have outgoing
     * access to the Internet through a NAT device.</p>
     */
    inline DataSourceVpcConfiguration& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>A list of identifiers of security groups within your Amazon VPC. The security
     * groups should enable Amazon Kendra to connect to the data source.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>A list of identifiers of security groups within your Amazon VPC. The security
     * groups should enable Amazon Kendra to connect to the data source.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>A list of identifiers of security groups within your Amazon VPC. The security
     * groups should enable Amazon Kendra to connect to the data source.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>A list of identifiers of security groups within your Amazon VPC. The security
     * groups should enable Amazon Kendra to connect to the data source.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>A list of identifiers of security groups within your Amazon VPC. The security
     * groups should enable Amazon Kendra to connect to the data source.</p>
     */
    inline DataSourceVpcConfiguration& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of identifiers of security groups within your Amazon VPC. The security
     * groups should enable Amazon Kendra to connect to the data source.</p>
     */
    inline DataSourceVpcConfiguration& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of identifiers of security groups within your Amazon VPC. The security
     * groups should enable Amazon Kendra to connect to the data source.</p>
     */
    inline DataSourceVpcConfiguration& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of identifiers of security groups within your Amazon VPC. The security
     * groups should enable Amazon Kendra to connect to the data source.</p>
     */
    inline DataSourceVpcConfiguration& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of identifiers of security groups within your Amazon VPC. The security
     * groups should enable Amazon Kendra to connect to the data source.</p>
     */
    inline DataSourceVpcConfiguration& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
