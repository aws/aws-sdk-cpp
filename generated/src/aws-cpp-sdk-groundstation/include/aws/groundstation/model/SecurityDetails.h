/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Information about endpoints.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/SecurityDetails">AWS
   * API Reference</a></p>
   */
  class SecurityDetails
  {
  public:
    AWS_GROUNDSTATION_API SecurityDetails();
    AWS_GROUNDSTATION_API SecurityDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API SecurityDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ARN to a role needed for connecting streams to your instances. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>ARN to a role needed for connecting streams to your instances. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>ARN to a role needed for connecting streams to your instances. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>ARN to a role needed for connecting streams to your instances. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>ARN to a role needed for connecting streams to your instances. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>ARN to a role needed for connecting streams to your instances. </p>
     */
    inline SecurityDetails& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>ARN to a role needed for connecting streams to your instances. </p>
     */
    inline SecurityDetails& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>ARN to a role needed for connecting streams to your instances. </p>
     */
    inline SecurityDetails& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The security groups to attach to the elastic network interfaces.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The security groups to attach to the elastic network interfaces.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The security groups to attach to the elastic network interfaces.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The security groups to attach to the elastic network interfaces.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The security groups to attach to the elastic network interfaces.</p>
     */
    inline SecurityDetails& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The security groups to attach to the elastic network interfaces.</p>
     */
    inline SecurityDetails& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The security groups to attach to the elastic network interfaces.</p>
     */
    inline SecurityDetails& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The security groups to attach to the elastic network interfaces.</p>
     */
    inline SecurityDetails& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The security groups to attach to the elastic network interfaces.</p>
     */
    inline SecurityDetails& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>A list of subnets where AWS Ground Station places elastic network interfaces
     * to send streams to your instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of subnets where AWS Ground Station places elastic network interfaces
     * to send streams to your instances.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of subnets where AWS Ground Station places elastic network interfaces
     * to send streams to your instances.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of subnets where AWS Ground Station places elastic network interfaces
     * to send streams to your instances.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of subnets where AWS Ground Station places elastic network interfaces
     * to send streams to your instances.</p>
     */
    inline SecurityDetails& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of subnets where AWS Ground Station places elastic network interfaces
     * to send streams to your instances.</p>
     */
    inline SecurityDetails& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of subnets where AWS Ground Station places elastic network interfaces
     * to send streams to your instances.</p>
     */
    inline SecurityDetails& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of subnets where AWS Ground Station places elastic network interfaces
     * to send streams to your instances.</p>
     */
    inline SecurityDetails& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of subnets where AWS Ground Station places elastic network interfaces
     * to send streams to your instances.</p>
     */
    inline SecurityDetails& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
