/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apprunner/model/VpcConnectorStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Describes an App Runner VPC connector resource. A VPC connector describes the
   * Amazon Virtual Private Cloud (Amazon VPC) that an App Runner service is
   * associated with, and the subnets and security group that are used.</p>
   * <p>Multiple revisions of a connector might have the same <code>Name</code> and
   * different <code>Revision</code> values.</p>  <p>At this time, App Runner
   * supports only one revision per name.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/VpcConnector">AWS
   * API Reference</a></p>
   */
  class VpcConnector
  {
  public:
    AWS_APPRUNNER_API VpcConnector() = default;
    AWS_APPRUNNER_API VpcConnector(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API VpcConnector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The customer-provided VPC connector name.</p>
     */
    inline const Aws::String& GetVpcConnectorName() const { return m_vpcConnectorName; }
    inline bool VpcConnectorNameHasBeenSet() const { return m_vpcConnectorNameHasBeenSet; }
    template<typename VpcConnectorNameT = Aws::String>
    void SetVpcConnectorName(VpcConnectorNameT&& value) { m_vpcConnectorNameHasBeenSet = true; m_vpcConnectorName = std::forward<VpcConnectorNameT>(value); }
    template<typename VpcConnectorNameT = Aws::String>
    VpcConnector& WithVpcConnectorName(VpcConnectorNameT&& value) { SetVpcConnectorName(std::forward<VpcConnectorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of this VPC connector.</p>
     */
    inline const Aws::String& GetVpcConnectorArn() const { return m_vpcConnectorArn; }
    inline bool VpcConnectorArnHasBeenSet() const { return m_vpcConnectorArnHasBeenSet; }
    template<typename VpcConnectorArnT = Aws::String>
    void SetVpcConnectorArn(VpcConnectorArnT&& value) { m_vpcConnectorArnHasBeenSet = true; m_vpcConnectorArn = std::forward<VpcConnectorArnT>(value); }
    template<typename VpcConnectorArnT = Aws::String>
    VpcConnector& WithVpcConnectorArn(VpcConnectorArnT&& value) { SetVpcConnectorArn(std::forward<VpcConnectorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of this VPC connector. It's unique among all the active
     * connectors (<code>"Status": "ACTIVE"</code>) that share the same
     * <code>Name</code>.</p>  <p>At this time, App Runner supports only one
     * revision per name.</p> 
     */
    inline int GetVpcConnectorRevision() const { return m_vpcConnectorRevision; }
    inline bool VpcConnectorRevisionHasBeenSet() const { return m_vpcConnectorRevisionHasBeenSet; }
    inline void SetVpcConnectorRevision(int value) { m_vpcConnectorRevisionHasBeenSet = true; m_vpcConnectorRevision = value; }
    inline VpcConnector& WithVpcConnectorRevision(int value) { SetVpcConnectorRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of IDs of subnets that App Runner uses for your service. All IDs are
     * of subnets of a single Amazon VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    VpcConnector& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Aws::String>
    VpcConnector& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of IDs of security groups that App Runner uses for access to Amazon
     * Web Services resources under the specified subnets. If not specified, App Runner
     * uses the default security group of the Amazon VPC. The default security group
     * allows all outbound traffic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    VpcConnector& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    VpcConnector& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current state of the VPC connector. If the status of a connector revision
     * is <code>INACTIVE</code>, it was deleted and can't be used. Inactive connector
     * revisions are permanently removed some time after they are deleted.</p>
     */
    inline VpcConnectorStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(VpcConnectorStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline VpcConnector& WithStatus(VpcConnectorStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the VPC connector was created. It's in Unix time stamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    VpcConnector& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the VPC connector was deleted. It's in Unix time stamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedAt() const { return m_deletedAt; }
    inline bool DeletedAtHasBeenSet() const { return m_deletedAtHasBeenSet; }
    template<typename DeletedAtT = Aws::Utils::DateTime>
    void SetDeletedAt(DeletedAtT&& value) { m_deletedAtHasBeenSet = true; m_deletedAt = std::forward<DeletedAtT>(value); }
    template<typename DeletedAtT = Aws::Utils::DateTime>
    VpcConnector& WithDeletedAt(DeletedAtT&& value) { SetDeletedAt(std::forward<DeletedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpcConnectorName;
    bool m_vpcConnectorNameHasBeenSet = false;

    Aws::String m_vpcConnectorArn;
    bool m_vpcConnectorArnHasBeenSet = false;

    int m_vpcConnectorRevision{0};
    bool m_vpcConnectorRevisionHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    VpcConnectorStatus m_status{VpcConnectorStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_deletedAt{};
    bool m_deletedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
