/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A VPC security group that the cluster belongs to, if the cluster is in a
   * VPC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterVpcSecurityGroup">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterVpcSecurityGroup
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterVpcSecurityGroup();
    AWS_SECURITYHUB_API AwsRedshiftClusterVpcSecurityGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterVpcSecurityGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the VPC security group.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline AwsRedshiftClusterVpcSecurityGroup& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline AwsRedshiftClusterVpcSecurityGroup& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline AwsRedshiftClusterVpcSecurityGroup& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The identifier of the VPC security group.</p>
     */
    inline const Aws::String& GetVpcSecurityGroupId() const{ return m_vpcSecurityGroupId; }

    /**
     * <p>The identifier of the VPC security group.</p>
     */
    inline bool VpcSecurityGroupIdHasBeenSet() const { return m_vpcSecurityGroupIdHasBeenSet; }

    /**
     * <p>The identifier of the VPC security group.</p>
     */
    inline void SetVpcSecurityGroupId(const Aws::String& value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId = value; }

    /**
     * <p>The identifier of the VPC security group.</p>
     */
    inline void SetVpcSecurityGroupId(Aws::String&& value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId = std::move(value); }

    /**
     * <p>The identifier of the VPC security group.</p>
     */
    inline void SetVpcSecurityGroupId(const char* value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId.assign(value); }

    /**
     * <p>The identifier of the VPC security group.</p>
     */
    inline AwsRedshiftClusterVpcSecurityGroup& WithVpcSecurityGroupId(const Aws::String& value) { SetVpcSecurityGroupId(value); return *this;}

    /**
     * <p>The identifier of the VPC security group.</p>
     */
    inline AwsRedshiftClusterVpcSecurityGroup& WithVpcSecurityGroupId(Aws::String&& value) { SetVpcSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the VPC security group.</p>
     */
    inline AwsRedshiftClusterVpcSecurityGroup& WithVpcSecurityGroupId(const char* value) { SetVpcSecurityGroupId(value); return *this;}

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_vpcSecurityGroupId;
    bool m_vpcSecurityGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
