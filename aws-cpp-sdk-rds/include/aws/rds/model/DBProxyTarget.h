/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/TargetType.h>
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
   * <note> <p>This is prerelease documentation for the RDS Database Proxy feature in
   * preview release. It is subject to change.</p> </note> <p>Contains the details
   * for an RDS Proxy target. It represents an RDS DB instance or Aurora DB cluster
   * that the proxy can connect to. One or more targets are associated with an RDS
   * Proxy target group.</p> <p>This data type is used as a response element in the
   * <code>DescribeDBProxyTargets</code> action.</p><p><h3>See Also:</h3>   <a
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
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
