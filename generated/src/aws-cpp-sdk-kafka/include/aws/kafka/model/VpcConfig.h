/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>The configuration of the Amazon VPCs for the cluster.</p>
      
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/VpcConfig">AWS API
   * Reference</a></p>
   */
  class VpcConfig
  {
  public:
    AWS_KAFKA_API VpcConfig();
    AWS_KAFKA_API VpcConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API VpcConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>The IDs of the subnets associated with the cluster.</p>
        
     * 
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * 
            <p>The IDs of the subnets associated with the cluster.</p>
        
     * 
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * 
            <p>The IDs of the subnets associated with the cluster.</p>
        
     * 
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * 
            <p>The IDs of the subnets associated with the cluster.</p>
        
     * 
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * 
            <p>The IDs of the subnets associated with the cluster.</p>
        
     * 
     */
    inline VpcConfig& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * 
            <p>The IDs of the subnets associated with the cluster.</p>
        
     * 
     */
    inline VpcConfig& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * 
            <p>The IDs of the subnets associated with the cluster.</p>
        
     * 
     */
    inline VpcConfig& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * 
            <p>The IDs of the subnets associated with the cluster.</p>
        
     * 
     */
    inline VpcConfig& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * 
            <p>The IDs of the subnets associated with the cluster.</p>
        
     * 
     */
    inline VpcConfig& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * 
            <p>The IDs of the security groups associated with the cluster.</p>

     *         
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * 
            <p>The IDs of the security groups associated with the cluster.</p>

     *         
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * 
            <p>The IDs of the security groups associated with the cluster.</p>

     *         
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * 
            <p>The IDs of the security groups associated with the cluster.</p>

     *         
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * 
            <p>The IDs of the security groups associated with the cluster.</p>

     *         
     */
    inline VpcConfig& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * 
            <p>The IDs of the security groups associated with the cluster.</p>

     *         
     */
    inline VpcConfig& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * 
            <p>The IDs of the security groups associated with the cluster.</p>

     *         
     */
    inline VpcConfig& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * 
            <p>The IDs of the security groups associated with the cluster.</p>

     *         
     */
    inline VpcConfig& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * 
            <p>The IDs of the security groups associated with the cluster.</p>

     *         
     */
    inline VpcConfig& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
