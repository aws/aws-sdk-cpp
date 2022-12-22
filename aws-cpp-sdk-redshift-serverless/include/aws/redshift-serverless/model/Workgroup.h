/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/redshift-serverless/model/Endpoint.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/model/WorkgroupStatus.h>
#include <aws/redshift-serverless/model/ConfigParameter.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>The collection of computing resources from which an endpoint is
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/Workgroup">AWS
   * API Reference</a></p>
   */
  class Workgroup
  {
  public:
    AWS_REDSHIFTSERVERLESS_API Workgroup();
    AWS_REDSHIFTSERVERLESS_API Workgroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Workgroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The base data warehouse capacity of the workgroup in Redshift Processing
     * Units (RPUs).</p>
     */
    inline int GetBaseCapacity() const{ return m_baseCapacity; }

    /**
     * <p>The base data warehouse capacity of the workgroup in Redshift Processing
     * Units (RPUs).</p>
     */
    inline bool BaseCapacityHasBeenSet() const { return m_baseCapacityHasBeenSet; }

    /**
     * <p>The base data warehouse capacity of the workgroup in Redshift Processing
     * Units (RPUs).</p>
     */
    inline void SetBaseCapacity(int value) { m_baseCapacityHasBeenSet = true; m_baseCapacity = value; }

    /**
     * <p>The base data warehouse capacity of the workgroup in Redshift Processing
     * Units (RPUs).</p>
     */
    inline Workgroup& WithBaseCapacity(int value) { SetBaseCapacity(value); return *this;}


    /**
     * <p>An array of parameters to set for finer control over a database. The options
     * are <code>datestyle</code>, <code>enable_user_activity_logging</code>,
     * <code>query_group</code>, <code>search_path</code>, and
     * <code>max_query_execution_time</code>.</p>
     */
    inline const Aws::Vector<ConfigParameter>& GetConfigParameters() const{ return m_configParameters; }

    /**
     * <p>An array of parameters to set for finer control over a database. The options
     * are <code>datestyle</code>, <code>enable_user_activity_logging</code>,
     * <code>query_group</code>, <code>search_path</code>, and
     * <code>max_query_execution_time</code>.</p>
     */
    inline bool ConfigParametersHasBeenSet() const { return m_configParametersHasBeenSet; }

    /**
     * <p>An array of parameters to set for finer control over a database. The options
     * are <code>datestyle</code>, <code>enable_user_activity_logging</code>,
     * <code>query_group</code>, <code>search_path</code>, and
     * <code>max_query_execution_time</code>.</p>
     */
    inline void SetConfigParameters(const Aws::Vector<ConfigParameter>& value) { m_configParametersHasBeenSet = true; m_configParameters = value; }

    /**
     * <p>An array of parameters to set for finer control over a database. The options
     * are <code>datestyle</code>, <code>enable_user_activity_logging</code>,
     * <code>query_group</code>, <code>search_path</code>, and
     * <code>max_query_execution_time</code>.</p>
     */
    inline void SetConfigParameters(Aws::Vector<ConfigParameter>&& value) { m_configParametersHasBeenSet = true; m_configParameters = std::move(value); }

    /**
     * <p>An array of parameters to set for finer control over a database. The options
     * are <code>datestyle</code>, <code>enable_user_activity_logging</code>,
     * <code>query_group</code>, <code>search_path</code>, and
     * <code>max_query_execution_time</code>.</p>
     */
    inline Workgroup& WithConfigParameters(const Aws::Vector<ConfigParameter>& value) { SetConfigParameters(value); return *this;}

    /**
     * <p>An array of parameters to set for finer control over a database. The options
     * are <code>datestyle</code>, <code>enable_user_activity_logging</code>,
     * <code>query_group</code>, <code>search_path</code>, and
     * <code>max_query_execution_time</code>.</p>
     */
    inline Workgroup& WithConfigParameters(Aws::Vector<ConfigParameter>&& value) { SetConfigParameters(std::move(value)); return *this;}

    /**
     * <p>An array of parameters to set for finer control over a database. The options
     * are <code>datestyle</code>, <code>enable_user_activity_logging</code>,
     * <code>query_group</code>, <code>search_path</code>, and
     * <code>max_query_execution_time</code>.</p>
     */
    inline Workgroup& AddConfigParameters(const ConfigParameter& value) { m_configParametersHasBeenSet = true; m_configParameters.push_back(value); return *this; }

    /**
     * <p>An array of parameters to set for finer control over a database. The options
     * are <code>datestyle</code>, <code>enable_user_activity_logging</code>,
     * <code>query_group</code>, <code>search_path</code>, and
     * <code>max_query_execution_time</code>.</p>
     */
    inline Workgroup& AddConfigParameters(ConfigParameter&& value) { m_configParametersHasBeenSet = true; m_configParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>The creation date of the workgroup.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The creation date of the workgroup.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The creation date of the workgroup.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The creation date of the workgroup.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The creation date of the workgroup.</p>
     */
    inline Workgroup& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date of the workgroup.</p>
     */
    inline Workgroup& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The endpoint that is created from the workgroup.</p>
     */
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint that is created from the workgroup.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint that is created from the workgroup.</p>
     */
    inline void SetEndpoint(const Endpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint that is created from the workgroup.</p>
     */
    inline void SetEndpoint(Endpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The endpoint that is created from the workgroup.</p>
     */
    inline Workgroup& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint that is created from the workgroup.</p>
     */
    inline Workgroup& WithEndpoint(Endpoint&& value) { SetEndpoint(std::move(value)); return *this;}


    /**
     * <p>The value that specifies whether to enable enhanced virtual private cloud
     * (VPC) routing, which forces Amazon Redshift Serverless to route traffic through
     * your VPC.</p>
     */
    inline bool GetEnhancedVpcRouting() const{ return m_enhancedVpcRouting; }

    /**
     * <p>The value that specifies whether to enable enhanced virtual private cloud
     * (VPC) routing, which forces Amazon Redshift Serverless to route traffic through
     * your VPC.</p>
     */
    inline bool EnhancedVpcRoutingHasBeenSet() const { return m_enhancedVpcRoutingHasBeenSet; }

    /**
     * <p>The value that specifies whether to enable enhanced virtual private cloud
     * (VPC) routing, which forces Amazon Redshift Serverless to route traffic through
     * your VPC.</p>
     */
    inline void SetEnhancedVpcRouting(bool value) { m_enhancedVpcRoutingHasBeenSet = true; m_enhancedVpcRouting = value; }

    /**
     * <p>The value that specifies whether to enable enhanced virtual private cloud
     * (VPC) routing, which forces Amazon Redshift Serverless to route traffic through
     * your VPC.</p>
     */
    inline Workgroup& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}


    /**
     * <p>The namespace the workgroup is associated with.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The namespace the workgroup is associated with.</p>
     */
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }

    /**
     * <p>The namespace the workgroup is associated with.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }

    /**
     * <p>The namespace the workgroup is associated with.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }

    /**
     * <p>The namespace the workgroup is associated with.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }

    /**
     * <p>The namespace the workgroup is associated with.</p>
     */
    inline Workgroup& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The namespace the workgroup is associated with.</p>
     */
    inline Workgroup& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The namespace the workgroup is associated with.</p>
     */
    inline Workgroup& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


    /**
     * <p>The custom port to use when connecting to a workgroup. Valid port ranges are
     * 5431-5455 and 8191-8215. The default is 5439.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The custom port to use when connecting to a workgroup. Valid port ranges are
     * 5431-5455 and 8191-8215. The default is 5439.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The custom port to use when connecting to a workgroup. Valid port ranges are
     * 5431-5455 and 8191-8215. The default is 5439.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The custom port to use when connecting to a workgroup. Valid port ranges are
     * 5431-5455 and 8191-8215. The default is 5439.</p>
     */
    inline Workgroup& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>A value that specifies whether the workgroup can be accessible from a public
     * network</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>A value that specifies whether the workgroup can be accessible from a public
     * network</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>A value that specifies whether the workgroup can be accessible from a public
     * network</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>A value that specifies whether the workgroup can be accessible from a public
     * network</p>
     */
    inline Workgroup& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>An array of security group IDs to associate with the workgroup.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>An array of security group IDs to associate with the workgroup.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>An array of security group IDs to associate with the workgroup.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>An array of security group IDs to associate with the workgroup.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>An array of security group IDs to associate with the workgroup.</p>
     */
    inline Workgroup& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>An array of security group IDs to associate with the workgroup.</p>
     */
    inline Workgroup& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>An array of security group IDs to associate with the workgroup.</p>
     */
    inline Workgroup& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>An array of security group IDs to associate with the workgroup.</p>
     */
    inline Workgroup& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of security group IDs to associate with the workgroup.</p>
     */
    inline Workgroup& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The status of the workgroup.</p>
     */
    inline const WorkgroupStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the workgroup.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the workgroup.</p>
     */
    inline void SetStatus(const WorkgroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the workgroup.</p>
     */
    inline void SetStatus(WorkgroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the workgroup.</p>
     */
    inline Workgroup& WithStatus(const WorkgroupStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the workgroup.</p>
     */
    inline Workgroup& WithStatus(WorkgroupStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>An array of subnet IDs the workgroup is associated with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>An array of subnet IDs the workgroup is associated with.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>An array of subnet IDs the workgroup is associated with.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>An array of subnet IDs the workgroup is associated with.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>An array of subnet IDs the workgroup is associated with.</p>
     */
    inline Workgroup& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>An array of subnet IDs the workgroup is associated with.</p>
     */
    inline Workgroup& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>An array of subnet IDs the workgroup is associated with.</p>
     */
    inline Workgroup& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>An array of subnet IDs the workgroup is associated with.</p>
     */
    inline Workgroup& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of subnet IDs the workgroup is associated with.</p>
     */
    inline Workgroup& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) that links to the workgroup.</p>
     */
    inline const Aws::String& GetWorkgroupArn() const{ return m_workgroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that links to the workgroup.</p>
     */
    inline bool WorkgroupArnHasBeenSet() const { return m_workgroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that links to the workgroup.</p>
     */
    inline void SetWorkgroupArn(const Aws::String& value) { m_workgroupArnHasBeenSet = true; m_workgroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that links to the workgroup.</p>
     */
    inline void SetWorkgroupArn(Aws::String&& value) { m_workgroupArnHasBeenSet = true; m_workgroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that links to the workgroup.</p>
     */
    inline void SetWorkgroupArn(const char* value) { m_workgroupArnHasBeenSet = true; m_workgroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that links to the workgroup.</p>
     */
    inline Workgroup& WithWorkgroupArn(const Aws::String& value) { SetWorkgroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that links to the workgroup.</p>
     */
    inline Workgroup& WithWorkgroupArn(Aws::String&& value) { SetWorkgroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that links to the workgroup.</p>
     */
    inline Workgroup& WithWorkgroupArn(const char* value) { SetWorkgroupArn(value); return *this;}


    /**
     * <p>The unique identifier of the workgroup.</p>
     */
    inline const Aws::String& GetWorkgroupId() const{ return m_workgroupId; }

    /**
     * <p>The unique identifier of the workgroup.</p>
     */
    inline bool WorkgroupIdHasBeenSet() const { return m_workgroupIdHasBeenSet; }

    /**
     * <p>The unique identifier of the workgroup.</p>
     */
    inline void SetWorkgroupId(const Aws::String& value) { m_workgroupIdHasBeenSet = true; m_workgroupId = value; }

    /**
     * <p>The unique identifier of the workgroup.</p>
     */
    inline void SetWorkgroupId(Aws::String&& value) { m_workgroupIdHasBeenSet = true; m_workgroupId = std::move(value); }

    /**
     * <p>The unique identifier of the workgroup.</p>
     */
    inline void SetWorkgroupId(const char* value) { m_workgroupIdHasBeenSet = true; m_workgroupId.assign(value); }

    /**
     * <p>The unique identifier of the workgroup.</p>
     */
    inline Workgroup& WithWorkgroupId(const Aws::String& value) { SetWorkgroupId(value); return *this;}

    /**
     * <p>The unique identifier of the workgroup.</p>
     */
    inline Workgroup& WithWorkgroupId(Aws::String&& value) { SetWorkgroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the workgroup.</p>
     */
    inline Workgroup& WithWorkgroupId(const char* value) { SetWorkgroupId(value); return *this;}


    /**
     * <p>The name of the workgroup.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }

    /**
     * <p>The name of the workgroup.</p>
     */
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }

    /**
     * <p>The name of the workgroup.</p>
     */
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }

    /**
     * <p>The name of the workgroup.</p>
     */
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }

    /**
     * <p>The name of the workgroup.</p>
     */
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }

    /**
     * <p>The name of the workgroup.</p>
     */
    inline Workgroup& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}

    /**
     * <p>The name of the workgroup.</p>
     */
    inline Workgroup& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the workgroup.</p>
     */
    inline Workgroup& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}

  private:

    int m_baseCapacity;
    bool m_baseCapacityHasBeenSet = false;

    Aws::Vector<ConfigParameter> m_configParameters;
    bool m_configParametersHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Endpoint m_endpoint;
    bool m_endpointHasBeenSet = false;

    bool m_enhancedVpcRouting;
    bool m_enhancedVpcRoutingHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    WorkgroupStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_workgroupArn;
    bool m_workgroupArnHasBeenSet = false;

    Aws::String m_workgroupId;
    bool m_workgroupIdHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
