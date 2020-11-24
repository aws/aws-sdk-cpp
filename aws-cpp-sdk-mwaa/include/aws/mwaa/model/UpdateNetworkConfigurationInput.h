/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
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
namespace MWAA
{
namespace Model
{

  /**
   * <p>Provide the security group and subnet IDs for the workers and
   * scheduler.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/UpdateNetworkConfigurationInput">AWS
   * API Reference</a></p>
   */
  class AWS_MWAA_API UpdateNetworkConfigurationInput
  {
  public:
    UpdateNetworkConfigurationInput();
    UpdateNetworkConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    UpdateNetworkConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provide a JSON list of 1 or more security groups IDs by name, in the same VPC
     * as the subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>Provide a JSON list of 1 or more security groups IDs by name, in the same VPC
     * as the subnets.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>Provide a JSON list of 1 or more security groups IDs by name, in the same VPC
     * as the subnets.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>Provide a JSON list of 1 or more security groups IDs by name, in the same VPC
     * as the subnets.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>Provide a JSON list of 1 or more security groups IDs by name, in the same VPC
     * as the subnets.</p>
     */
    inline UpdateNetworkConfigurationInput& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>Provide a JSON list of 1 or more security groups IDs by name, in the same VPC
     * as the subnets.</p>
     */
    inline UpdateNetworkConfigurationInput& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>Provide a JSON list of 1 or more security groups IDs by name, in the same VPC
     * as the subnets.</p>
     */
    inline UpdateNetworkConfigurationInput& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>Provide a JSON list of 1 or more security groups IDs by name, in the same VPC
     * as the subnets.</p>
     */
    inline UpdateNetworkConfigurationInput& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Provide a JSON list of 1 or more security groups IDs by name, in the same VPC
     * as the subnets.</p>
     */
    inline UpdateNetworkConfigurationInput& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
