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
    AWS_DATABASEMIGRATIONSERVICE_API VpcSecurityGroupMembership() = default;
    AWS_DATABASEMIGRATIONSERVICE_API VpcSecurityGroupMembership(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API VpcSecurityGroupMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The VPC security group ID.</p>
     */
    inline const Aws::String& GetVpcSecurityGroupId() const { return m_vpcSecurityGroupId; }
    inline bool VpcSecurityGroupIdHasBeenSet() const { return m_vpcSecurityGroupIdHasBeenSet; }
    template<typename VpcSecurityGroupIdT = Aws::String>
    void SetVpcSecurityGroupId(VpcSecurityGroupIdT&& value) { m_vpcSecurityGroupIdHasBeenSet = true; m_vpcSecurityGroupId = std::forward<VpcSecurityGroupIdT>(value); }
    template<typename VpcSecurityGroupIdT = Aws::String>
    VpcSecurityGroupMembership& WithVpcSecurityGroupId(VpcSecurityGroupIdT&& value) { SetVpcSecurityGroupId(std::forward<VpcSecurityGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the VPC security group.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    VpcSecurityGroupMembership& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpcSecurityGroupId;
    bool m_vpcSecurityGroupIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
