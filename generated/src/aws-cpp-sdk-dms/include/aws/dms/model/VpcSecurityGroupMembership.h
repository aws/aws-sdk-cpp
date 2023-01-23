/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Describes the status of a security group associated with the virtual private
   * cloud (VPC) hosting your replication and DB instances.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/VpcSecurityGroupMembership">AWS
   * API Reference</a></p>
   */
  class VpcSecurityGroupMembership
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API VpcSecurityGroupMembership();
    AWS_DATABASEMIGRATIONSERVICE_API VpcSecurityGroupMembership(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API VpcSecurityGroupMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The VPC security group ID.</p>
     */
    inline const Aws::String& GetVpcSecurityGroupId() const{ return m_vpcSecurityGroupId; }

    /**
     * <p>The VPC security group ID.</p>
     */
    inline bool VpcSecurityGroupIdHasBeenSet() const { return m_vpcSecurityGroupIdHasBeenSet; }

    /**
     * <p>The VPC security group ID.</p>
     */
    inline void SetVpcSecurityGroupId(const Aws::String& value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId = value; }

    /**
     * <p>The VPC security group ID.</p>
     */
    inline void SetVpcSecurityGroupId(Aws::String&& value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId = std::move(value); }

    /**
     * <p>The VPC security group ID.</p>
     */
    inline void SetVpcSecurityGroupId(const char* value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId.assign(value); }

    /**
     * <p>The VPC security group ID.</p>
     */
    inline VpcSecurityGroupMembership& WithVpcSecurityGroupId(const Aws::String& value) { SetVpcSecurityGroupId(value); return *this;}

    /**
     * <p>The VPC security group ID.</p>
     */
    inline VpcSecurityGroupMembership& WithVpcSecurityGroupId(Aws::String&& value) { SetVpcSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The VPC security group ID.</p>
     */
    inline VpcSecurityGroupMembership& WithVpcSecurityGroupId(const char* value) { SetVpcSecurityGroupId(value); return *this;}


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
    inline VpcSecurityGroupMembership& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline VpcSecurityGroupMembership& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the VPC security group.</p>
     */
    inline VpcSecurityGroupMembership& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_vpcSecurityGroupId;
    bool m_vpcSecurityGroupIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
