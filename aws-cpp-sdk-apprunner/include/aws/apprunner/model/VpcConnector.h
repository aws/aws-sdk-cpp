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
    AWS_APPRUNNER_API VpcConnector();
    AWS_APPRUNNER_API VpcConnector(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API VpcConnector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The customer-provided VPC connector name.</p>
     */
    inline const Aws::String& GetVpcConnectorName() const{ return m_vpcConnectorName; }

    /**
     * <p>The customer-provided VPC connector name.</p>
     */
    inline bool VpcConnectorNameHasBeenSet() const { return m_vpcConnectorNameHasBeenSet; }

    /**
     * <p>The customer-provided VPC connector name.</p>
     */
    inline void SetVpcConnectorName(const Aws::String& value) { m_vpcConnectorNameHasBeenSet = true; m_vpcConnectorName = value; }

    /**
     * <p>The customer-provided VPC connector name.</p>
     */
    inline void SetVpcConnectorName(Aws::String&& value) { m_vpcConnectorNameHasBeenSet = true; m_vpcConnectorName = std::move(value); }

    /**
     * <p>The customer-provided VPC connector name.</p>
     */
    inline void SetVpcConnectorName(const char* value) { m_vpcConnectorNameHasBeenSet = true; m_vpcConnectorName.assign(value); }

    /**
     * <p>The customer-provided VPC connector name.</p>
     */
    inline VpcConnector& WithVpcConnectorName(const Aws::String& value) { SetVpcConnectorName(value); return *this;}

    /**
     * <p>The customer-provided VPC connector name.</p>
     */
    inline VpcConnector& WithVpcConnectorName(Aws::String&& value) { SetVpcConnectorName(std::move(value)); return *this;}

    /**
     * <p>The customer-provided VPC connector name.</p>
     */
    inline VpcConnector& WithVpcConnectorName(const char* value) { SetVpcConnectorName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of this VPC connector.</p>
     */
    inline const Aws::String& GetVpcConnectorArn() const{ return m_vpcConnectorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of this VPC connector.</p>
     */
    inline bool VpcConnectorArnHasBeenSet() const { return m_vpcConnectorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of this VPC connector.</p>
     */
    inline void SetVpcConnectorArn(const Aws::String& value) { m_vpcConnectorArnHasBeenSet = true; m_vpcConnectorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of this VPC connector.</p>
     */
    inline void SetVpcConnectorArn(Aws::String&& value) { m_vpcConnectorArnHasBeenSet = true; m_vpcConnectorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this VPC connector.</p>
     */
    inline void SetVpcConnectorArn(const char* value) { m_vpcConnectorArnHasBeenSet = true; m_vpcConnectorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this VPC connector.</p>
     */
    inline VpcConnector& WithVpcConnectorArn(const Aws::String& value) { SetVpcConnectorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this VPC connector.</p>
     */
    inline VpcConnector& WithVpcConnectorArn(Aws::String&& value) { SetVpcConnectorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this VPC connector.</p>
     */
    inline VpcConnector& WithVpcConnectorArn(const char* value) { SetVpcConnectorArn(value); return *this;}


    /**
     * <p>The revision of this VPC connector. It's unique among all the active
     * connectors (<code>"Status": "ACTIVE"</code>) that share the same
     * <code>Name</code>.</p>  <p>At this time, App Runner supports only one
     * revision per name.</p> 
     */
    inline int GetVpcConnectorRevision() const{ return m_vpcConnectorRevision; }

    /**
     * <p>The revision of this VPC connector. It's unique among all the active
     * connectors (<code>"Status": "ACTIVE"</code>) that share the same
     * <code>Name</code>.</p>  <p>At this time, App Runner supports only one
     * revision per name.</p> 
     */
    inline bool VpcConnectorRevisionHasBeenSet() const { return m_vpcConnectorRevisionHasBeenSet; }

    /**
     * <p>The revision of this VPC connector. It's unique among all the active
     * connectors (<code>"Status": "ACTIVE"</code>) that share the same
     * <code>Name</code>.</p>  <p>At this time, App Runner supports only one
     * revision per name.</p> 
     */
    inline void SetVpcConnectorRevision(int value) { m_vpcConnectorRevisionHasBeenSet = true; m_vpcConnectorRevision = value; }

    /**
     * <p>The revision of this VPC connector. It's unique among all the active
     * connectors (<code>"Status": "ACTIVE"</code>) that share the same
     * <code>Name</code>.</p>  <p>At this time, App Runner supports only one
     * revision per name.</p> 
     */
    inline VpcConnector& WithVpcConnectorRevision(int value) { SetVpcConnectorRevision(value); return *this;}


    /**
     * <p>A list of IDs of subnets that App Runner uses for your service. All IDs are
     * of subnets of a single Amazon VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>A list of IDs of subnets that App Runner uses for your service. All IDs are
     * of subnets of a single Amazon VPC.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>A list of IDs of subnets that App Runner uses for your service. All IDs are
     * of subnets of a single Amazon VPC.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>A list of IDs of subnets that App Runner uses for your service. All IDs are
     * of subnets of a single Amazon VPC.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>A list of IDs of subnets that App Runner uses for your service. All IDs are
     * of subnets of a single Amazon VPC.</p>
     */
    inline VpcConnector& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>A list of IDs of subnets that App Runner uses for your service. All IDs are
     * of subnets of a single Amazon VPC.</p>
     */
    inline VpcConnector& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>A list of IDs of subnets that App Runner uses for your service. All IDs are
     * of subnets of a single Amazon VPC.</p>
     */
    inline VpcConnector& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>A list of IDs of subnets that App Runner uses for your service. All IDs are
     * of subnets of a single Amazon VPC.</p>
     */
    inline VpcConnector& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IDs of subnets that App Runner uses for your service. All IDs are
     * of subnets of a single Amazon VPC.</p>
     */
    inline VpcConnector& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>A list of IDs of security groups that App Runner uses for access to Amazon
     * Web Services resources under the specified subnets. If not specified, App Runner
     * uses the default security group of the Amazon VPC. The default security group
     * allows all outbound traffic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>A list of IDs of security groups that App Runner uses for access to Amazon
     * Web Services resources under the specified subnets. If not specified, App Runner
     * uses the default security group of the Amazon VPC. The default security group
     * allows all outbound traffic.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>A list of IDs of security groups that App Runner uses for access to Amazon
     * Web Services resources under the specified subnets. If not specified, App Runner
     * uses the default security group of the Amazon VPC. The default security group
     * allows all outbound traffic.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>A list of IDs of security groups that App Runner uses for access to Amazon
     * Web Services resources under the specified subnets. If not specified, App Runner
     * uses the default security group of the Amazon VPC. The default security group
     * allows all outbound traffic.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>A list of IDs of security groups that App Runner uses for access to Amazon
     * Web Services resources under the specified subnets. If not specified, App Runner
     * uses the default security group of the Amazon VPC. The default security group
     * allows all outbound traffic.</p>
     */
    inline VpcConnector& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>A list of IDs of security groups that App Runner uses for access to Amazon
     * Web Services resources under the specified subnets. If not specified, App Runner
     * uses the default security group of the Amazon VPC. The default security group
     * allows all outbound traffic.</p>
     */
    inline VpcConnector& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of IDs of security groups that App Runner uses for access to Amazon
     * Web Services resources under the specified subnets. If not specified, App Runner
     * uses the default security group of the Amazon VPC. The default security group
     * allows all outbound traffic.</p>
     */
    inline VpcConnector& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>A list of IDs of security groups that App Runner uses for access to Amazon
     * Web Services resources under the specified subnets. If not specified, App Runner
     * uses the default security group of the Amazon VPC. The default security group
     * allows all outbound traffic.</p>
     */
    inline VpcConnector& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IDs of security groups that App Runner uses for access to Amazon
     * Web Services resources under the specified subnets. If not specified, App Runner
     * uses the default security group of the Amazon VPC. The default security group
     * allows all outbound traffic.</p>
     */
    inline VpcConnector& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * <p>The current state of the VPC connector. If the status of a connector revision
     * is <code>INACTIVE</code>, it was deleted and can't be used. Inactive connector
     * revisions are permanently removed some time after they are deleted.</p>
     */
    inline const VpcConnectorStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the VPC connector. If the status of a connector revision
     * is <code>INACTIVE</code>, it was deleted and can't be used. Inactive connector
     * revisions are permanently removed some time after they are deleted.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of the VPC connector. If the status of a connector revision
     * is <code>INACTIVE</code>, it was deleted and can't be used. Inactive connector
     * revisions are permanently removed some time after they are deleted.</p>
     */
    inline void SetStatus(const VpcConnectorStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the VPC connector. If the status of a connector revision
     * is <code>INACTIVE</code>, it was deleted and can't be used. Inactive connector
     * revisions are permanently removed some time after they are deleted.</p>
     */
    inline void SetStatus(VpcConnectorStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of the VPC connector. If the status of a connector revision
     * is <code>INACTIVE</code>, it was deleted and can't be used. Inactive connector
     * revisions are permanently removed some time after they are deleted.</p>
     */
    inline VpcConnector& WithStatus(const VpcConnectorStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the VPC connector. If the status of a connector revision
     * is <code>INACTIVE</code>, it was deleted and can't be used. Inactive connector
     * revisions are permanently removed some time after they are deleted.</p>
     */
    inline VpcConnector& WithStatus(VpcConnectorStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time when the VPC connector was created. It's in Unix time stamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the VPC connector was created. It's in Unix time stamp
     * format.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time when the VPC connector was created. It's in Unix time stamp
     * format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time when the VPC connector was created. It's in Unix time stamp
     * format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time when the VPC connector was created. It's in Unix time stamp
     * format.</p>
     */
    inline VpcConnector& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the VPC connector was created. It's in Unix time stamp
     * format.</p>
     */
    inline VpcConnector& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time when the VPC connector was deleted. It's in Unix time stamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedAt() const{ return m_deletedAt; }

    /**
     * <p>The time when the VPC connector was deleted. It's in Unix time stamp
     * format.</p>
     */
    inline bool DeletedAtHasBeenSet() const { return m_deletedAtHasBeenSet; }

    /**
     * <p>The time when the VPC connector was deleted. It's in Unix time stamp
     * format.</p>
     */
    inline void SetDeletedAt(const Aws::Utils::DateTime& value) { m_deletedAtHasBeenSet = true; m_deletedAt = value; }

    /**
     * <p>The time when the VPC connector was deleted. It's in Unix time stamp
     * format.</p>
     */
    inline void SetDeletedAt(Aws::Utils::DateTime&& value) { m_deletedAtHasBeenSet = true; m_deletedAt = std::move(value); }

    /**
     * <p>The time when the VPC connector was deleted. It's in Unix time stamp
     * format.</p>
     */
    inline VpcConnector& WithDeletedAt(const Aws::Utils::DateTime& value) { SetDeletedAt(value); return *this;}

    /**
     * <p>The time when the VPC connector was deleted. It's in Unix time stamp
     * format.</p>
     */
    inline VpcConnector& WithDeletedAt(Aws::Utils::DateTime&& value) { SetDeletedAt(std::move(value)); return *this;}

  private:

    Aws::String m_vpcConnectorName;
    bool m_vpcConnectorNameHasBeenSet = false;

    Aws::String m_vpcConnectorArn;
    bool m_vpcConnectorArnHasBeenSet = false;

    int m_vpcConnectorRevision;
    bool m_vpcConnectorRevisionHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    VpcConnectorStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_deletedAt;
    bool m_deletedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
