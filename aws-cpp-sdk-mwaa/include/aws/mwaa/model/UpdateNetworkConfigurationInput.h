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
   * <p>Defines the VPC networking components used to secure and enable network
   * traffic between the Amazon Web Services resources for your environment. To learn
   * more, see <a
   * href="https://docs.aws.amazon.com/mwaa/latest/userguide/networking-about.html">About
   * networking on Amazon MWAA</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/UpdateNetworkConfigurationInput">AWS
   * API Reference</a></p>
   */
  class UpdateNetworkConfigurationInput
  {
  public:
    AWS_MWAA_API UpdateNetworkConfigurationInput();
    AWS_MWAA_API UpdateNetworkConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API UpdateNetworkConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of security group IDs. A security group must be attached to the same
     * VPC as the subnets. To learn more, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-security.html">Security
     * in your VPC on Amazon MWAA</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>A list of security group IDs. A security group must be attached to the same
     * VPC as the subnets. To learn more, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-security.html">Security
     * in your VPC on Amazon MWAA</a>.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>A list of security group IDs. A security group must be attached to the same
     * VPC as the subnets. To learn more, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-security.html">Security
     * in your VPC on Amazon MWAA</a>.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>A list of security group IDs. A security group must be attached to the same
     * VPC as the subnets. To learn more, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-security.html">Security
     * in your VPC on Amazon MWAA</a>.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>A list of security group IDs. A security group must be attached to the same
     * VPC as the subnets. To learn more, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-security.html">Security
     * in your VPC on Amazon MWAA</a>.</p>
     */
    inline UpdateNetworkConfigurationInput& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of security group IDs. A security group must be attached to the same
     * VPC as the subnets. To learn more, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-security.html">Security
     * in your VPC on Amazon MWAA</a>.</p>
     */
    inline UpdateNetworkConfigurationInput& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of security group IDs. A security group must be attached to the same
     * VPC as the subnets. To learn more, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-security.html">Security
     * in your VPC on Amazon MWAA</a>.</p>
     */
    inline UpdateNetworkConfigurationInput& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of security group IDs. A security group must be attached to the same
     * VPC as the subnets. To learn more, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-security.html">Security
     * in your VPC on Amazon MWAA</a>.</p>
     */
    inline UpdateNetworkConfigurationInput& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of security group IDs. A security group must be attached to the same
     * VPC as the subnets. To learn more, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-security.html">Security
     * in your VPC on Amazon MWAA</a>.</p>
     */
    inline UpdateNetworkConfigurationInput& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
