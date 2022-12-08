/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/model/ConfigParameter.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class UpdateWorkgroupRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API UpdateWorkgroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkgroup"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The new base data warehouse capacity in Redshift Processing Units (RPUs).</p>
     */
    inline int GetBaseCapacity() const{ return m_baseCapacity; }

    /**
     * <p>The new base data warehouse capacity in Redshift Processing Units (RPUs).</p>
     */
    inline bool BaseCapacityHasBeenSet() const { return m_baseCapacityHasBeenSet; }

    /**
     * <p>The new base data warehouse capacity in Redshift Processing Units (RPUs).</p>
     */
    inline void SetBaseCapacity(int value) { m_baseCapacityHasBeenSet = true; m_baseCapacity = value; }

    /**
     * <p>The new base data warehouse capacity in Redshift Processing Units (RPUs).</p>
     */
    inline UpdateWorkgroupRequest& WithBaseCapacity(int value) { SetBaseCapacity(value); return *this;}


    /**
     * <p>An array of parameters to set for advanced control over a database. The
     * options are <code>datestyle</code>, <code>enable_user_activity_logging</code>,
     * <code>query_group</code>, <code>search_path</code>, and
     * <code>max_query_execution_time</code>.</p>
     */
    inline const Aws::Vector<ConfigParameter>& GetConfigParameters() const{ return m_configParameters; }

    /**
     * <p>An array of parameters to set for advanced control over a database. The
     * options are <code>datestyle</code>, <code>enable_user_activity_logging</code>,
     * <code>query_group</code>, <code>search_path</code>, and
     * <code>max_query_execution_time</code>.</p>
     */
    inline bool ConfigParametersHasBeenSet() const { return m_configParametersHasBeenSet; }

    /**
     * <p>An array of parameters to set for advanced control over a database. The
     * options are <code>datestyle</code>, <code>enable_user_activity_logging</code>,
     * <code>query_group</code>, <code>search_path</code>, and
     * <code>max_query_execution_time</code>.</p>
     */
    inline void SetConfigParameters(const Aws::Vector<ConfigParameter>& value) { m_configParametersHasBeenSet = true; m_configParameters = value; }

    /**
     * <p>An array of parameters to set for advanced control over a database. The
     * options are <code>datestyle</code>, <code>enable_user_activity_logging</code>,
     * <code>query_group</code>, <code>search_path</code>, and
     * <code>max_query_execution_time</code>.</p>
     */
    inline void SetConfigParameters(Aws::Vector<ConfigParameter>&& value) { m_configParametersHasBeenSet = true; m_configParameters = std::move(value); }

    /**
     * <p>An array of parameters to set for advanced control over a database. The
     * options are <code>datestyle</code>, <code>enable_user_activity_logging</code>,
     * <code>query_group</code>, <code>search_path</code>, and
     * <code>max_query_execution_time</code>.</p>
     */
    inline UpdateWorkgroupRequest& WithConfigParameters(const Aws::Vector<ConfigParameter>& value) { SetConfigParameters(value); return *this;}

    /**
     * <p>An array of parameters to set for advanced control over a database. The
     * options are <code>datestyle</code>, <code>enable_user_activity_logging</code>,
     * <code>query_group</code>, <code>search_path</code>, and
     * <code>max_query_execution_time</code>.</p>
     */
    inline UpdateWorkgroupRequest& WithConfigParameters(Aws::Vector<ConfigParameter>&& value) { SetConfigParameters(std::move(value)); return *this;}

    /**
     * <p>An array of parameters to set for advanced control over a database. The
     * options are <code>datestyle</code>, <code>enable_user_activity_logging</code>,
     * <code>query_group</code>, <code>search_path</code>, and
     * <code>max_query_execution_time</code>.</p>
     */
    inline UpdateWorkgroupRequest& AddConfigParameters(const ConfigParameter& value) { m_configParametersHasBeenSet = true; m_configParameters.push_back(value); return *this; }

    /**
     * <p>An array of parameters to set for advanced control over a database. The
     * options are <code>datestyle</code>, <code>enable_user_activity_logging</code>,
     * <code>query_group</code>, <code>search_path</code>, and
     * <code>max_query_execution_time</code>.</p>
     */
    inline UpdateWorkgroupRequest& AddConfigParameters(ConfigParameter&& value) { m_configParametersHasBeenSet = true; m_configParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>The value that specifies whether to turn on enhanced virtual private cloud
     * (VPC) routing, which forces Amazon Redshift Serverless to route traffic through
     * your VPC.</p>
     */
    inline bool GetEnhancedVpcRouting() const{ return m_enhancedVpcRouting; }

    /**
     * <p>The value that specifies whether to turn on enhanced virtual private cloud
     * (VPC) routing, which forces Amazon Redshift Serverless to route traffic through
     * your VPC.</p>
     */
    inline bool EnhancedVpcRoutingHasBeenSet() const { return m_enhancedVpcRoutingHasBeenSet; }

    /**
     * <p>The value that specifies whether to turn on enhanced virtual private cloud
     * (VPC) routing, which forces Amazon Redshift Serverless to route traffic through
     * your VPC.</p>
     */
    inline void SetEnhancedVpcRouting(bool value) { m_enhancedVpcRoutingHasBeenSet = true; m_enhancedVpcRouting = value; }

    /**
     * <p>The value that specifies whether to turn on enhanced virtual private cloud
     * (VPC) routing, which forces Amazon Redshift Serverless to route traffic through
     * your VPC.</p>
     */
    inline UpdateWorkgroupRequest& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}


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
    inline UpdateWorkgroupRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>A value that specifies whether the workgroup can be accessible from a public
     * network.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>A value that specifies whether the workgroup can be accessible from a public
     * network.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>A value that specifies whether the workgroup can be accessible from a public
     * network.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>A value that specifies whether the workgroup can be accessible from a public
     * network.</p>
     */
    inline UpdateWorkgroupRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


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
    inline UpdateWorkgroupRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>An array of security group IDs to associate with the workgroup.</p>
     */
    inline UpdateWorkgroupRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>An array of security group IDs to associate with the workgroup.</p>
     */
    inline UpdateWorkgroupRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>An array of security group IDs to associate with the workgroup.</p>
     */
    inline UpdateWorkgroupRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of security group IDs to associate with the workgroup.</p>
     */
    inline UpdateWorkgroupRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>An array of VPC subnet IDs to associate with the workgroup.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>An array of VPC subnet IDs to associate with the workgroup.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>An array of VPC subnet IDs to associate with the workgroup.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>An array of VPC subnet IDs to associate with the workgroup.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>An array of VPC subnet IDs to associate with the workgroup.</p>
     */
    inline UpdateWorkgroupRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>An array of VPC subnet IDs to associate with the workgroup.</p>
     */
    inline UpdateWorkgroupRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>An array of VPC subnet IDs to associate with the workgroup.</p>
     */
    inline UpdateWorkgroupRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>An array of VPC subnet IDs to associate with the workgroup.</p>
     */
    inline UpdateWorkgroupRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of VPC subnet IDs to associate with the workgroup.</p>
     */
    inline UpdateWorkgroupRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The name of the workgroup to update.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }

    /**
     * <p>The name of the workgroup to update.</p>
     */
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }

    /**
     * <p>The name of the workgroup to update.</p>
     */
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }

    /**
     * <p>The name of the workgroup to update.</p>
     */
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }

    /**
     * <p>The name of the workgroup to update.</p>
     */
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }

    /**
     * <p>The name of the workgroup to update.</p>
     */
    inline UpdateWorkgroupRequest& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}

    /**
     * <p>The name of the workgroup to update.</p>
     */
    inline UpdateWorkgroupRequest& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the workgroup to update.</p>
     */
    inline UpdateWorkgroupRequest& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}

  private:

    int m_baseCapacity;
    bool m_baseCapacityHasBeenSet = false;

    Aws::Vector<ConfigParameter> m_configParameters;
    bool m_configParametersHasBeenSet = false;

    bool m_enhancedVpcRouting;
    bool m_enhancedVpcRoutingHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
