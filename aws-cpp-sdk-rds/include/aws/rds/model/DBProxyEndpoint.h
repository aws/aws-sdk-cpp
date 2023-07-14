/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/DBProxyEndpointStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rds/model/DBProxyEndpointTargetRole.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>The data structure representing an endpoint associated with a DB proxy. RDS
   * automatically creates one endpoint for each DB proxy. For Aurora DB clusters,
   * you can associate additional endpoints with the same DB proxy. These endpoints
   * can be read/write or read-only. They can also reside in different VPCs than the
   * associated DB proxy.</p> <p>This data type is used as a response element in the
   * <code>DescribeDBProxyEndpoints</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBProxyEndpoint">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DBProxyEndpoint
  {
  public:
    DBProxyEndpoint();
    DBProxyEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBProxyEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name for the DB proxy endpoint. An identifier must begin with a letter
     * and must contain only ASCII letters, digits, and hyphens; it can't end with a
     * hyphen or contain two consecutive hyphens.</p>
     */
    inline const Aws::String& GetDBProxyEndpointName() const{ return m_dBProxyEndpointName; }

    /**
     * <p>The name for the DB proxy endpoint. An identifier must begin with a letter
     * and must contain only ASCII letters, digits, and hyphens; it can't end with a
     * hyphen or contain two consecutive hyphens.</p>
     */
    inline bool DBProxyEndpointNameHasBeenSet() const { return m_dBProxyEndpointNameHasBeenSet; }

    /**
     * <p>The name for the DB proxy endpoint. An identifier must begin with a letter
     * and must contain only ASCII letters, digits, and hyphens; it can't end with a
     * hyphen or contain two consecutive hyphens.</p>
     */
    inline void SetDBProxyEndpointName(const Aws::String& value) { m_dBProxyEndpointNameHasBeenSet = true; m_dBProxyEndpointName = value; }

    /**
     * <p>The name for the DB proxy endpoint. An identifier must begin with a letter
     * and must contain only ASCII letters, digits, and hyphens; it can't end with a
     * hyphen or contain two consecutive hyphens.</p>
     */
    inline void SetDBProxyEndpointName(Aws::String&& value) { m_dBProxyEndpointNameHasBeenSet = true; m_dBProxyEndpointName = std::move(value); }

    /**
     * <p>The name for the DB proxy endpoint. An identifier must begin with a letter
     * and must contain only ASCII letters, digits, and hyphens; it can't end with a
     * hyphen or contain two consecutive hyphens.</p>
     */
    inline void SetDBProxyEndpointName(const char* value) { m_dBProxyEndpointNameHasBeenSet = true; m_dBProxyEndpointName.assign(value); }

    /**
     * <p>The name for the DB proxy endpoint. An identifier must begin with a letter
     * and must contain only ASCII letters, digits, and hyphens; it can't end with a
     * hyphen or contain two consecutive hyphens.</p>
     */
    inline DBProxyEndpoint& WithDBProxyEndpointName(const Aws::String& value) { SetDBProxyEndpointName(value); return *this;}

    /**
     * <p>The name for the DB proxy endpoint. An identifier must begin with a letter
     * and must contain only ASCII letters, digits, and hyphens; it can't end with a
     * hyphen or contain two consecutive hyphens.</p>
     */
    inline DBProxyEndpoint& WithDBProxyEndpointName(Aws::String&& value) { SetDBProxyEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name for the DB proxy endpoint. An identifier must begin with a letter
     * and must contain only ASCII letters, digits, and hyphens; it can't end with a
     * hyphen or contain two consecutive hyphens.</p>
     */
    inline DBProxyEndpoint& WithDBProxyEndpointName(const char* value) { SetDBProxyEndpointName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the DB proxy endpoint.</p>
     */
    inline const Aws::String& GetDBProxyEndpointArn() const{ return m_dBProxyEndpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB proxy endpoint.</p>
     */
    inline bool DBProxyEndpointArnHasBeenSet() const { return m_dBProxyEndpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB proxy endpoint.</p>
     */
    inline void SetDBProxyEndpointArn(const Aws::String& value) { m_dBProxyEndpointArnHasBeenSet = true; m_dBProxyEndpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB proxy endpoint.</p>
     */
    inline void SetDBProxyEndpointArn(Aws::String&& value) { m_dBProxyEndpointArnHasBeenSet = true; m_dBProxyEndpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB proxy endpoint.</p>
     */
    inline void SetDBProxyEndpointArn(const char* value) { m_dBProxyEndpointArnHasBeenSet = true; m_dBProxyEndpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB proxy endpoint.</p>
     */
    inline DBProxyEndpoint& WithDBProxyEndpointArn(const Aws::String& value) { SetDBProxyEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB proxy endpoint.</p>
     */
    inline DBProxyEndpoint& WithDBProxyEndpointArn(Aws::String&& value) { SetDBProxyEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB proxy endpoint.</p>
     */
    inline DBProxyEndpoint& WithDBProxyEndpointArn(const char* value) { SetDBProxyEndpointArn(value); return *this;}


    /**
     * <p>The identifier for the DB proxy that is associated with this DB proxy
     * endpoint.</p>
     */
    inline const Aws::String& GetDBProxyName() const{ return m_dBProxyName; }

    /**
     * <p>The identifier for the DB proxy that is associated with this DB proxy
     * endpoint.</p>
     */
    inline bool DBProxyNameHasBeenSet() const { return m_dBProxyNameHasBeenSet; }

    /**
     * <p>The identifier for the DB proxy that is associated with this DB proxy
     * endpoint.</p>
     */
    inline void SetDBProxyName(const Aws::String& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = value; }

    /**
     * <p>The identifier for the DB proxy that is associated with this DB proxy
     * endpoint.</p>
     */
    inline void SetDBProxyName(Aws::String&& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = std::move(value); }

    /**
     * <p>The identifier for the DB proxy that is associated with this DB proxy
     * endpoint.</p>
     */
    inline void SetDBProxyName(const char* value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName.assign(value); }

    /**
     * <p>The identifier for the DB proxy that is associated with this DB proxy
     * endpoint.</p>
     */
    inline DBProxyEndpoint& WithDBProxyName(const Aws::String& value) { SetDBProxyName(value); return *this;}

    /**
     * <p>The identifier for the DB proxy that is associated with this DB proxy
     * endpoint.</p>
     */
    inline DBProxyEndpoint& WithDBProxyName(Aws::String&& value) { SetDBProxyName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the DB proxy that is associated with this DB proxy
     * endpoint.</p>
     */
    inline DBProxyEndpoint& WithDBProxyName(const char* value) { SetDBProxyName(value); return *this;}


    /**
     * <p>The current status of this DB proxy endpoint. A status of
     * <code>available</code> means the endpoint is ready to handle requests. Other
     * values indicate that you must wait for the endpoint to be ready, or take some
     * action to resolve an issue.</p>
     */
    inline const DBProxyEndpointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of this DB proxy endpoint. A status of
     * <code>available</code> means the endpoint is ready to handle requests. Other
     * values indicate that you must wait for the endpoint to be ready, or take some
     * action to resolve an issue.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of this DB proxy endpoint. A status of
     * <code>available</code> means the endpoint is ready to handle requests. Other
     * values indicate that you must wait for the endpoint to be ready, or take some
     * action to resolve an issue.</p>
     */
    inline void SetStatus(const DBProxyEndpointStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of this DB proxy endpoint. A status of
     * <code>available</code> means the endpoint is ready to handle requests. Other
     * values indicate that you must wait for the endpoint to be ready, or take some
     * action to resolve an issue.</p>
     */
    inline void SetStatus(DBProxyEndpointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of this DB proxy endpoint. A status of
     * <code>available</code> means the endpoint is ready to handle requests. Other
     * values indicate that you must wait for the endpoint to be ready, or take some
     * action to resolve an issue.</p>
     */
    inline DBProxyEndpoint& WithStatus(const DBProxyEndpointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of this DB proxy endpoint. A status of
     * <code>available</code> means the endpoint is ready to handle requests. Other
     * values indicate that you must wait for the endpoint to be ready, or take some
     * action to resolve an issue.</p>
     */
    inline DBProxyEndpoint& WithStatus(DBProxyEndpointStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Provides the VPC ID of the DB proxy endpoint.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>Provides the VPC ID of the DB proxy endpoint.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>Provides the VPC ID of the DB proxy endpoint.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>Provides the VPC ID of the DB proxy endpoint.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>Provides the VPC ID of the DB proxy endpoint.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>Provides the VPC ID of the DB proxy endpoint.</p>
     */
    inline DBProxyEndpoint& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>Provides the VPC ID of the DB proxy endpoint.</p>
     */
    inline DBProxyEndpoint& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>Provides the VPC ID of the DB proxy endpoint.</p>
     */
    inline DBProxyEndpoint& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>Provides a list of VPC security groups that the DB proxy endpoint belongs
     * to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>Provides a list of VPC security groups that the DB proxy endpoint belongs
     * to.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>Provides a list of VPC security groups that the DB proxy endpoint belongs
     * to.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>Provides a list of VPC security groups that the DB proxy endpoint belongs
     * to.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>Provides a list of VPC security groups that the DB proxy endpoint belongs
     * to.</p>
     */
    inline DBProxyEndpoint& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>Provides a list of VPC security groups that the DB proxy endpoint belongs
     * to.</p>
     */
    inline DBProxyEndpoint& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>Provides a list of VPC security groups that the DB proxy endpoint belongs
     * to.</p>
     */
    inline DBProxyEndpoint& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>Provides a list of VPC security groups that the DB proxy endpoint belongs
     * to.</p>
     */
    inline DBProxyEndpoint& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Provides a list of VPC security groups that the DB proxy endpoint belongs
     * to.</p>
     */
    inline DBProxyEndpoint& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>The EC2 subnet IDs for the DB proxy endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSubnetIds() const{ return m_vpcSubnetIds; }

    /**
     * <p>The EC2 subnet IDs for the DB proxy endpoint.</p>
     */
    inline bool VpcSubnetIdsHasBeenSet() const { return m_vpcSubnetIdsHasBeenSet; }

    /**
     * <p>The EC2 subnet IDs for the DB proxy endpoint.</p>
     */
    inline void SetVpcSubnetIds(const Aws::Vector<Aws::String>& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds = value; }

    /**
     * <p>The EC2 subnet IDs for the DB proxy endpoint.</p>
     */
    inline void SetVpcSubnetIds(Aws::Vector<Aws::String>&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds = std::move(value); }

    /**
     * <p>The EC2 subnet IDs for the DB proxy endpoint.</p>
     */
    inline DBProxyEndpoint& WithVpcSubnetIds(const Aws::Vector<Aws::String>& value) { SetVpcSubnetIds(value); return *this;}

    /**
     * <p>The EC2 subnet IDs for the DB proxy endpoint.</p>
     */
    inline DBProxyEndpoint& WithVpcSubnetIds(Aws::Vector<Aws::String>&& value) { SetVpcSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The EC2 subnet IDs for the DB proxy endpoint.</p>
     */
    inline DBProxyEndpoint& AddVpcSubnetIds(const Aws::String& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.push_back(value); return *this; }

    /**
     * <p>The EC2 subnet IDs for the DB proxy endpoint.</p>
     */
    inline DBProxyEndpoint& AddVpcSubnetIds(Aws::String&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The EC2 subnet IDs for the DB proxy endpoint.</p>
     */
    inline DBProxyEndpoint& AddVpcSubnetIds(const char* value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.push_back(value); return *this; }


    /**
     * <p>The endpoint that you can use to connect to the DB proxy. You include the
     * endpoint value in the connection string for a database client application.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint that you can use to connect to the DB proxy. You include the
     * endpoint value in the connection string for a database client application.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint that you can use to connect to the DB proxy. You include the
     * endpoint value in the connection string for a database client application.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint that you can use to connect to the DB proxy. You include the
     * endpoint value in the connection string for a database client application.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The endpoint that you can use to connect to the DB proxy. You include the
     * endpoint value in the connection string for a database client application.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The endpoint that you can use to connect to the DB proxy. You include the
     * endpoint value in the connection string for a database client application.</p>
     */
    inline DBProxyEndpoint& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint that you can use to connect to the DB proxy. You include the
     * endpoint value in the connection string for a database client application.</p>
     */
    inline DBProxyEndpoint& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint that you can use to connect to the DB proxy. You include the
     * endpoint value in the connection string for a database client application.</p>
     */
    inline DBProxyEndpoint& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The date and time when the DB proxy endpoint was first created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time when the DB proxy endpoint was first created.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The date and time when the DB proxy endpoint was first created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date and time when the DB proxy endpoint was first created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date and time when the DB proxy endpoint was first created.</p>
     */
    inline DBProxyEndpoint& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time when the DB proxy endpoint was first created.</p>
     */
    inline DBProxyEndpoint& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>A value that indicates whether the DB proxy endpoint can be used for
     * read/write or read-only operations.</p>
     */
    inline const DBProxyEndpointTargetRole& GetTargetRole() const{ return m_targetRole; }

    /**
     * <p>A value that indicates whether the DB proxy endpoint can be used for
     * read/write or read-only operations.</p>
     */
    inline bool TargetRoleHasBeenSet() const { return m_targetRoleHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB proxy endpoint can be used for
     * read/write or read-only operations.</p>
     */
    inline void SetTargetRole(const DBProxyEndpointTargetRole& value) { m_targetRoleHasBeenSet = true; m_targetRole = value; }

    /**
     * <p>A value that indicates whether the DB proxy endpoint can be used for
     * read/write or read-only operations.</p>
     */
    inline void SetTargetRole(DBProxyEndpointTargetRole&& value) { m_targetRoleHasBeenSet = true; m_targetRole = std::move(value); }

    /**
     * <p>A value that indicates whether the DB proxy endpoint can be used for
     * read/write or read-only operations.</p>
     */
    inline DBProxyEndpoint& WithTargetRole(const DBProxyEndpointTargetRole& value) { SetTargetRole(value); return *this;}

    /**
     * <p>A value that indicates whether the DB proxy endpoint can be used for
     * read/write or read-only operations.</p>
     */
    inline DBProxyEndpoint& WithTargetRole(DBProxyEndpointTargetRole&& value) { SetTargetRole(std::move(value)); return *this;}


    /**
     * <p>A value that indicates whether this endpoint is the default endpoint for the
     * associated DB proxy. Default DB proxy endpoints always have read/write
     * capability. Other endpoints that you associate with the DB proxy can be either
     * read/write or read-only.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }

    /**
     * <p>A value that indicates whether this endpoint is the default endpoint for the
     * associated DB proxy. Default DB proxy endpoints always have read/write
     * capability. Other endpoints that you associate with the DB proxy can be either
     * read/write or read-only.</p>
     */
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }

    /**
     * <p>A value that indicates whether this endpoint is the default endpoint for the
     * associated DB proxy. Default DB proxy endpoints always have read/write
     * capability. Other endpoints that you associate with the DB proxy can be either
     * read/write or read-only.</p>
     */
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }

    /**
     * <p>A value that indicates whether this endpoint is the default endpoint for the
     * associated DB proxy. Default DB proxy endpoints always have read/write
     * capability. Other endpoints that you associate with the DB proxy can be either
     * read/write or read-only.</p>
     */
    inline DBProxyEndpoint& WithIsDefault(bool value) { SetIsDefault(value); return *this;}

  private:

    Aws::String m_dBProxyEndpointName;
    bool m_dBProxyEndpointNameHasBeenSet;

    Aws::String m_dBProxyEndpointArn;
    bool m_dBProxyEndpointArnHasBeenSet;

    Aws::String m_dBProxyName;
    bool m_dBProxyNameHasBeenSet;

    DBProxyEndpointStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet;

    Aws::Vector<Aws::String> m_vpcSubnetIds;
    bool m_vpcSubnetIdsHasBeenSet;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet;

    DBProxyEndpointTargetRole m_targetRole;
    bool m_targetRoleHasBeenSet;

    bool m_isDefault;
    bool m_isDefaultHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
