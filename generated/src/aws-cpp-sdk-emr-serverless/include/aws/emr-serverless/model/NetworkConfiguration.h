/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The network configuration for customer VPC connectivity.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/NetworkConfiguration">AWS
   * API Reference</a></p>
   */
  class NetworkConfiguration
  {
  public:
    AWS_EMRSERVERLESS_API NetworkConfiguration();
    AWS_EMRSERVERLESS_API NetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API NetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The array of subnet Ids for customer VPC connectivity.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The array of subnet Ids for customer VPC connectivity.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The array of subnet Ids for customer VPC connectivity.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The array of subnet Ids for customer VPC connectivity.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The array of subnet Ids for customer VPC connectivity.</p>
     */
    inline NetworkConfiguration& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The array of subnet Ids for customer VPC connectivity.</p>
     */
    inline NetworkConfiguration& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The array of subnet Ids for customer VPC connectivity.</p>
     */
    inline NetworkConfiguration& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The array of subnet Ids for customer VPC connectivity.</p>
     */
    inline NetworkConfiguration& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The array of subnet Ids for customer VPC connectivity.</p>
     */
    inline NetworkConfiguration& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The array of security group Ids for customer VPC connectivity.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The array of security group Ids for customer VPC connectivity.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The array of security group Ids for customer VPC connectivity.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The array of security group Ids for customer VPC connectivity.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The array of security group Ids for customer VPC connectivity.</p>
     */
    inline NetworkConfiguration& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The array of security group Ids for customer VPC connectivity.</p>
     */
    inline NetworkConfiguration& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The array of security group Ids for customer VPC connectivity.</p>
     */
    inline NetworkConfiguration& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The array of security group Ids for customer VPC connectivity.</p>
     */
    inline NetworkConfiguration& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The array of security group Ids for customer VPC connectivity.</p>
     */
    inline NetworkConfiguration& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
