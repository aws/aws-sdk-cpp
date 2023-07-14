/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/TargetType.h>
#include <aws/rds/model/TargetRole.h>
#include <aws/rds/model/TargetHealth.h>
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
   * <p>Contains the details for an RDS Proxy target. It represents an RDS DB
   * instance or Aurora DB cluster that the proxy can connect to. One or more targets
   * are associated with an RDS Proxy target group.</p> <p>This data type is used as
   * a response element in the <code>DescribeDBProxyTargets</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBProxyTarget">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DBProxyTarget
  {
  public:
    DBProxyTarget();
    DBProxyTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBProxyTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) for the RDS DB instance or Aurora DB
     * cluster.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the RDS DB instance or Aurora DB
     * cluster.</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the RDS DB instance or Aurora DB
     * cluster.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the RDS DB instance or Aurora DB
     * cluster.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the RDS DB instance or Aurora DB
     * cluster.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the RDS DB instance or Aurora DB
     * cluster.</p>
     */
    inline DBProxyTarget& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the RDS DB instance or Aurora DB
     * cluster.</p>
     */
    inline DBProxyTarget& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the RDS DB instance or Aurora DB
     * cluster.</p>
     */
    inline DBProxyTarget& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p>The writer endpoint for the RDS DB instance or Aurora DB cluster.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The writer endpoint for the RDS DB instance or Aurora DB cluster.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The writer endpoint for the RDS DB instance or Aurora DB cluster.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The writer endpoint for the RDS DB instance or Aurora DB cluster.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The writer endpoint for the RDS DB instance or Aurora DB cluster.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The writer endpoint for the RDS DB instance or Aurora DB cluster.</p>
     */
    inline DBProxyTarget& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The writer endpoint for the RDS DB instance or Aurora DB cluster.</p>
     */
    inline DBProxyTarget& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The writer endpoint for the RDS DB instance or Aurora DB cluster.</p>
     */
    inline DBProxyTarget& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The DB cluster identifier when the target represents an Aurora DB cluster.
     * This field is blank when the target represents an RDS DB instance.</p>
     */
    inline const Aws::String& GetTrackedClusterId() const{ return m_trackedClusterId; }

    /**
     * <p>The DB cluster identifier when the target represents an Aurora DB cluster.
     * This field is blank when the target represents an RDS DB instance.</p>
     */
    inline bool TrackedClusterIdHasBeenSet() const { return m_trackedClusterIdHasBeenSet; }

    /**
     * <p>The DB cluster identifier when the target represents an Aurora DB cluster.
     * This field is blank when the target represents an RDS DB instance.</p>
     */
    inline void SetTrackedClusterId(const Aws::String& value) { m_trackedClusterIdHasBeenSet = true; m_trackedClusterId = value; }

    /**
     * <p>The DB cluster identifier when the target represents an Aurora DB cluster.
     * This field is blank when the target represents an RDS DB instance.</p>
     */
    inline void SetTrackedClusterId(Aws::String&& value) { m_trackedClusterIdHasBeenSet = true; m_trackedClusterId = std::move(value); }

    /**
     * <p>The DB cluster identifier when the target represents an Aurora DB cluster.
     * This field is blank when the target represents an RDS DB instance.</p>
     */
    inline void SetTrackedClusterId(const char* value) { m_trackedClusterIdHasBeenSet = true; m_trackedClusterId.assign(value); }

    /**
     * <p>The DB cluster identifier when the target represents an Aurora DB cluster.
     * This field is blank when the target represents an RDS DB instance.</p>
     */
    inline DBProxyTarget& WithTrackedClusterId(const Aws::String& value) { SetTrackedClusterId(value); return *this;}

    /**
     * <p>The DB cluster identifier when the target represents an Aurora DB cluster.
     * This field is blank when the target represents an RDS DB instance.</p>
     */
    inline DBProxyTarget& WithTrackedClusterId(Aws::String&& value) { SetTrackedClusterId(std::move(value)); return *this;}

    /**
     * <p>The DB cluster identifier when the target represents an Aurora DB cluster.
     * This field is blank when the target represents an RDS DB instance.</p>
     */
    inline DBProxyTarget& WithTrackedClusterId(const char* value) { SetTrackedClusterId(value); return *this;}


    /**
     * <p>The identifier representing the target. It can be the instance identifier for
     * an RDS DB instance, or the cluster identifier for an Aurora DB cluster.</p>
     */
    inline const Aws::String& GetRdsResourceId() const{ return m_rdsResourceId; }

    /**
     * <p>The identifier representing the target. It can be the instance identifier for
     * an RDS DB instance, or the cluster identifier for an Aurora DB cluster.</p>
     */
    inline bool RdsResourceIdHasBeenSet() const { return m_rdsResourceIdHasBeenSet; }

    /**
     * <p>The identifier representing the target. It can be the instance identifier for
     * an RDS DB instance, or the cluster identifier for an Aurora DB cluster.</p>
     */
    inline void SetRdsResourceId(const Aws::String& value) { m_rdsResourceIdHasBeenSet = true; m_rdsResourceId = value; }

    /**
     * <p>The identifier representing the target. It can be the instance identifier for
     * an RDS DB instance, or the cluster identifier for an Aurora DB cluster.</p>
     */
    inline void SetRdsResourceId(Aws::String&& value) { m_rdsResourceIdHasBeenSet = true; m_rdsResourceId = std::move(value); }

    /**
     * <p>The identifier representing the target. It can be the instance identifier for
     * an RDS DB instance, or the cluster identifier for an Aurora DB cluster.</p>
     */
    inline void SetRdsResourceId(const char* value) { m_rdsResourceIdHasBeenSet = true; m_rdsResourceId.assign(value); }

    /**
     * <p>The identifier representing the target. It can be the instance identifier for
     * an RDS DB instance, or the cluster identifier for an Aurora DB cluster.</p>
     */
    inline DBProxyTarget& WithRdsResourceId(const Aws::String& value) { SetRdsResourceId(value); return *this;}

    /**
     * <p>The identifier representing the target. It can be the instance identifier for
     * an RDS DB instance, or the cluster identifier for an Aurora DB cluster.</p>
     */
    inline DBProxyTarget& WithRdsResourceId(Aws::String&& value) { SetRdsResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier representing the target. It can be the instance identifier for
     * an RDS DB instance, or the cluster identifier for an Aurora DB cluster.</p>
     */
    inline DBProxyTarget& WithRdsResourceId(const char* value) { SetRdsResourceId(value); return *this;}


    /**
     * <p>The port that the RDS Proxy uses to connect to the target RDS DB instance or
     * Aurora DB cluster.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port that the RDS Proxy uses to connect to the target RDS DB instance or
     * Aurora DB cluster.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port that the RDS Proxy uses to connect to the target RDS DB instance or
     * Aurora DB cluster.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port that the RDS Proxy uses to connect to the target RDS DB instance or
     * Aurora DB cluster.</p>
     */
    inline DBProxyTarget& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>Specifies the kind of database, such as an RDS DB instance or an Aurora DB
     * cluster, that the target represents.</p>
     */
    inline const TargetType& GetType() const{ return m_type; }

    /**
     * <p>Specifies the kind of database, such as an RDS DB instance or an Aurora DB
     * cluster, that the target represents.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies the kind of database, such as an RDS DB instance or an Aurora DB
     * cluster, that the target represents.</p>
     */
    inline void SetType(const TargetType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies the kind of database, such as an RDS DB instance or an Aurora DB
     * cluster, that the target represents.</p>
     */
    inline void SetType(TargetType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies the kind of database, such as an RDS DB instance or an Aurora DB
     * cluster, that the target represents.</p>
     */
    inline DBProxyTarget& WithType(const TargetType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies the kind of database, such as an RDS DB instance or an Aurora DB
     * cluster, that the target represents.</p>
     */
    inline DBProxyTarget& WithType(TargetType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A value that indicates whether the target of the proxy can be used for
     * read/write or read-only operations.</p>
     */
    inline const TargetRole& GetRole() const{ return m_role; }

    /**
     * <p>A value that indicates whether the target of the proxy can be used for
     * read/write or read-only operations.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>A value that indicates whether the target of the proxy can be used for
     * read/write or read-only operations.</p>
     */
    inline void SetRole(const TargetRole& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>A value that indicates whether the target of the proxy can be used for
     * read/write or read-only operations.</p>
     */
    inline void SetRole(TargetRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>A value that indicates whether the target of the proxy can be used for
     * read/write or read-only operations.</p>
     */
    inline DBProxyTarget& WithRole(const TargetRole& value) { SetRole(value); return *this;}

    /**
     * <p>A value that indicates whether the target of the proxy can be used for
     * read/write or read-only operations.</p>
     */
    inline DBProxyTarget& WithRole(TargetRole&& value) { SetRole(std::move(value)); return *this;}


    /**
     * <p>Information about the connection health of the RDS Proxy target.</p>
     */
    inline const TargetHealth& GetTargetHealth() const{ return m_targetHealth; }

    /**
     * <p>Information about the connection health of the RDS Proxy target.</p>
     */
    inline bool TargetHealthHasBeenSet() const { return m_targetHealthHasBeenSet; }

    /**
     * <p>Information about the connection health of the RDS Proxy target.</p>
     */
    inline void SetTargetHealth(const TargetHealth& value) { m_targetHealthHasBeenSet = true; m_targetHealth = value; }

    /**
     * <p>Information about the connection health of the RDS Proxy target.</p>
     */
    inline void SetTargetHealth(TargetHealth&& value) { m_targetHealthHasBeenSet = true; m_targetHealth = std::move(value); }

    /**
     * <p>Information about the connection health of the RDS Proxy target.</p>
     */
    inline DBProxyTarget& WithTargetHealth(const TargetHealth& value) { SetTargetHealth(value); return *this;}

    /**
     * <p>Information about the connection health of the RDS Proxy target.</p>
     */
    inline DBProxyTarget& WithTargetHealth(TargetHealth&& value) { SetTargetHealth(std::move(value)); return *this;}

  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet;

    Aws::String m_trackedClusterId;
    bool m_trackedClusterIdHasBeenSet;

    Aws::String m_rdsResourceId;
    bool m_rdsResourceIdHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    TargetType m_type;
    bool m_typeHasBeenSet;

    TargetRole m_role;
    bool m_roleHasBeenSet;

    TargetHealth m_targetHealth;
    bool m_targetHealthHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
