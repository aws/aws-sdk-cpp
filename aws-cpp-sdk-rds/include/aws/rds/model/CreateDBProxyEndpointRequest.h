/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/DBProxyEndpointTargetRole.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API CreateDBProxyEndpointRequest : public RDSRequest
  {
  public:
    CreateDBProxyEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBProxyEndpoint"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the DB proxy associated with the DB proxy endpoint that you
     * create.</p>
     */
    inline const Aws::String& GetDBProxyName() const{ return m_dBProxyName; }

    /**
     * <p>The name of the DB proxy associated with the DB proxy endpoint that you
     * create.</p>
     */
    inline bool DBProxyNameHasBeenSet() const { return m_dBProxyNameHasBeenSet; }

    /**
     * <p>The name of the DB proxy associated with the DB proxy endpoint that you
     * create.</p>
     */
    inline void SetDBProxyName(const Aws::String& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = value; }

    /**
     * <p>The name of the DB proxy associated with the DB proxy endpoint that you
     * create.</p>
     */
    inline void SetDBProxyName(Aws::String&& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = std::move(value); }

    /**
     * <p>The name of the DB proxy associated with the DB proxy endpoint that you
     * create.</p>
     */
    inline void SetDBProxyName(const char* value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName.assign(value); }

    /**
     * <p>The name of the DB proxy associated with the DB proxy endpoint that you
     * create.</p>
     */
    inline CreateDBProxyEndpointRequest& WithDBProxyName(const Aws::String& value) { SetDBProxyName(value); return *this;}

    /**
     * <p>The name of the DB proxy associated with the DB proxy endpoint that you
     * create.</p>
     */
    inline CreateDBProxyEndpointRequest& WithDBProxyName(Aws::String&& value) { SetDBProxyName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB proxy associated with the DB proxy endpoint that you
     * create.</p>
     */
    inline CreateDBProxyEndpointRequest& WithDBProxyName(const char* value) { SetDBProxyName(value); return *this;}


    /**
     * <p>The name of the DB proxy endpoint to create.</p>
     */
    inline const Aws::String& GetDBProxyEndpointName() const{ return m_dBProxyEndpointName; }

    /**
     * <p>The name of the DB proxy endpoint to create.</p>
     */
    inline bool DBProxyEndpointNameHasBeenSet() const { return m_dBProxyEndpointNameHasBeenSet; }

    /**
     * <p>The name of the DB proxy endpoint to create.</p>
     */
    inline void SetDBProxyEndpointName(const Aws::String& value) { m_dBProxyEndpointNameHasBeenSet = true; m_dBProxyEndpointName = value; }

    /**
     * <p>The name of the DB proxy endpoint to create.</p>
     */
    inline void SetDBProxyEndpointName(Aws::String&& value) { m_dBProxyEndpointNameHasBeenSet = true; m_dBProxyEndpointName = std::move(value); }

    /**
     * <p>The name of the DB proxy endpoint to create.</p>
     */
    inline void SetDBProxyEndpointName(const char* value) { m_dBProxyEndpointNameHasBeenSet = true; m_dBProxyEndpointName.assign(value); }

    /**
     * <p>The name of the DB proxy endpoint to create.</p>
     */
    inline CreateDBProxyEndpointRequest& WithDBProxyEndpointName(const Aws::String& value) { SetDBProxyEndpointName(value); return *this;}

    /**
     * <p>The name of the DB proxy endpoint to create.</p>
     */
    inline CreateDBProxyEndpointRequest& WithDBProxyEndpointName(Aws::String&& value) { SetDBProxyEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB proxy endpoint to create.</p>
     */
    inline CreateDBProxyEndpointRequest& WithDBProxyEndpointName(const char* value) { SetDBProxyEndpointName(value); return *this;}


    /**
     * <p>The VPC subnet IDs for the DB proxy endpoint that you create. You can specify
     * a different set of subnet IDs than for the original DB proxy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSubnetIds() const{ return m_vpcSubnetIds; }

    /**
     * <p>The VPC subnet IDs for the DB proxy endpoint that you create. You can specify
     * a different set of subnet IDs than for the original DB proxy.</p>
     */
    inline bool VpcSubnetIdsHasBeenSet() const { return m_vpcSubnetIdsHasBeenSet; }

    /**
     * <p>The VPC subnet IDs for the DB proxy endpoint that you create. You can specify
     * a different set of subnet IDs than for the original DB proxy.</p>
     */
    inline void SetVpcSubnetIds(const Aws::Vector<Aws::String>& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds = value; }

    /**
     * <p>The VPC subnet IDs for the DB proxy endpoint that you create. You can specify
     * a different set of subnet IDs than for the original DB proxy.</p>
     */
    inline void SetVpcSubnetIds(Aws::Vector<Aws::String>&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds = std::move(value); }

    /**
     * <p>The VPC subnet IDs for the DB proxy endpoint that you create. You can specify
     * a different set of subnet IDs than for the original DB proxy.</p>
     */
    inline CreateDBProxyEndpointRequest& WithVpcSubnetIds(const Aws::Vector<Aws::String>& value) { SetVpcSubnetIds(value); return *this;}

    /**
     * <p>The VPC subnet IDs for the DB proxy endpoint that you create. You can specify
     * a different set of subnet IDs than for the original DB proxy.</p>
     */
    inline CreateDBProxyEndpointRequest& WithVpcSubnetIds(Aws::Vector<Aws::String>&& value) { SetVpcSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The VPC subnet IDs for the DB proxy endpoint that you create. You can specify
     * a different set of subnet IDs than for the original DB proxy.</p>
     */
    inline CreateDBProxyEndpointRequest& AddVpcSubnetIds(const Aws::String& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.push_back(value); return *this; }

    /**
     * <p>The VPC subnet IDs for the DB proxy endpoint that you create. You can specify
     * a different set of subnet IDs than for the original DB proxy.</p>
     */
    inline CreateDBProxyEndpointRequest& AddVpcSubnetIds(Aws::String&& value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The VPC subnet IDs for the DB proxy endpoint that you create. You can specify
     * a different set of subnet IDs than for the original DB proxy.</p>
     */
    inline CreateDBProxyEndpointRequest& AddVpcSubnetIds(const char* value) { m_vpcSubnetIdsHasBeenSet = true; m_vpcSubnetIds.push_back(value); return *this; }


    /**
     * <p>The VPC security group IDs for the DB proxy endpoint that you create. You can
     * specify a different set of security group IDs than for the original DB proxy.
     * The default is the default security group for the VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>The VPC security group IDs for the DB proxy endpoint that you create. You can
     * specify a different set of security group IDs than for the original DB proxy.
     * The default is the default security group for the VPC.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>The VPC security group IDs for the DB proxy endpoint that you create. You can
     * specify a different set of security group IDs than for the original DB proxy.
     * The default is the default security group for the VPC.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>The VPC security group IDs for the DB proxy endpoint that you create. You can
     * specify a different set of security group IDs than for the original DB proxy.
     * The default is the default security group for the VPC.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>The VPC security group IDs for the DB proxy endpoint that you create. You can
     * specify a different set of security group IDs than for the original DB proxy.
     * The default is the default security group for the VPC.</p>
     */
    inline CreateDBProxyEndpointRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>The VPC security group IDs for the DB proxy endpoint that you create. You can
     * specify a different set of security group IDs than for the original DB proxy.
     * The default is the default security group for the VPC.</p>
     */
    inline CreateDBProxyEndpointRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The VPC security group IDs for the DB proxy endpoint that you create. You can
     * specify a different set of security group IDs than for the original DB proxy.
     * The default is the default security group for the VPC.</p>
     */
    inline CreateDBProxyEndpointRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>The VPC security group IDs for the DB proxy endpoint that you create. You can
     * specify a different set of security group IDs than for the original DB proxy.
     * The default is the default security group for the VPC.</p>
     */
    inline CreateDBProxyEndpointRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The VPC security group IDs for the DB proxy endpoint that you create. You can
     * specify a different set of security group IDs than for the original DB proxy.
     * The default is the default security group for the VPC.</p>
     */
    inline CreateDBProxyEndpointRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>A value that indicates whether the DB proxy endpoint can be used for
     * read/write or read-only operations. The default is <code>READ_WRITE</code>.</p>
     */
    inline const DBProxyEndpointTargetRole& GetTargetRole() const{ return m_targetRole; }

    /**
     * <p>A value that indicates whether the DB proxy endpoint can be used for
     * read/write or read-only operations. The default is <code>READ_WRITE</code>.</p>
     */
    inline bool TargetRoleHasBeenSet() const { return m_targetRoleHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB proxy endpoint can be used for
     * read/write or read-only operations. The default is <code>READ_WRITE</code>.</p>
     */
    inline void SetTargetRole(const DBProxyEndpointTargetRole& value) { m_targetRoleHasBeenSet = true; m_targetRole = value; }

    /**
     * <p>A value that indicates whether the DB proxy endpoint can be used for
     * read/write or read-only operations. The default is <code>READ_WRITE</code>.</p>
     */
    inline void SetTargetRole(DBProxyEndpointTargetRole&& value) { m_targetRoleHasBeenSet = true; m_targetRole = std::move(value); }

    /**
     * <p>A value that indicates whether the DB proxy endpoint can be used for
     * read/write or read-only operations. The default is <code>READ_WRITE</code>.</p>
     */
    inline CreateDBProxyEndpointRequest& WithTargetRole(const DBProxyEndpointTargetRole& value) { SetTargetRole(value); return *this;}

    /**
     * <p>A value that indicates whether the DB proxy endpoint can be used for
     * read/write or read-only operations. The default is <code>READ_WRITE</code>.</p>
     */
    inline CreateDBProxyEndpointRequest& WithTargetRole(DBProxyEndpointTargetRole&& value) { SetTargetRole(std::move(value)); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateDBProxyEndpointRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateDBProxyEndpointRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateDBProxyEndpointRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateDBProxyEndpointRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dBProxyName;
    bool m_dBProxyNameHasBeenSet;

    Aws::String m_dBProxyEndpointName;
    bool m_dBProxyEndpointNameHasBeenSet;

    Aws::Vector<Aws::String> m_vpcSubnetIds;
    bool m_vpcSubnetIdsHasBeenSet;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet;

    DBProxyEndpointTargetRole m_targetRole;
    bool m_targetRoleHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
