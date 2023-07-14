/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API ModifyDBProxyEndpointRequest : public RDSRequest
  {
  public:
    ModifyDBProxyEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBProxyEndpoint"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the DB proxy sociated with the DB proxy endpoint that you want to
     * modify.</p>
     */
    inline const Aws::String& GetDBProxyEndpointName() const{ return m_dBProxyEndpointName; }

    /**
     * <p>The name of the DB proxy sociated with the DB proxy endpoint that you want to
     * modify.</p>
     */
    inline bool DBProxyEndpointNameHasBeenSet() const { return m_dBProxyEndpointNameHasBeenSet; }

    /**
     * <p>The name of the DB proxy sociated with the DB proxy endpoint that you want to
     * modify.</p>
     */
    inline void SetDBProxyEndpointName(const Aws::String& value) { m_dBProxyEndpointNameHasBeenSet = true; m_dBProxyEndpointName = value; }

    /**
     * <p>The name of the DB proxy sociated with the DB proxy endpoint that you want to
     * modify.</p>
     */
    inline void SetDBProxyEndpointName(Aws::String&& value) { m_dBProxyEndpointNameHasBeenSet = true; m_dBProxyEndpointName = std::move(value); }

    /**
     * <p>The name of the DB proxy sociated with the DB proxy endpoint that you want to
     * modify.</p>
     */
    inline void SetDBProxyEndpointName(const char* value) { m_dBProxyEndpointNameHasBeenSet = true; m_dBProxyEndpointName.assign(value); }

    /**
     * <p>The name of the DB proxy sociated with the DB proxy endpoint that you want to
     * modify.</p>
     */
    inline ModifyDBProxyEndpointRequest& WithDBProxyEndpointName(const Aws::String& value) { SetDBProxyEndpointName(value); return *this;}

    /**
     * <p>The name of the DB proxy sociated with the DB proxy endpoint that you want to
     * modify.</p>
     */
    inline ModifyDBProxyEndpointRequest& WithDBProxyEndpointName(Aws::String&& value) { SetDBProxyEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB proxy sociated with the DB proxy endpoint that you want to
     * modify.</p>
     */
    inline ModifyDBProxyEndpointRequest& WithDBProxyEndpointName(const char* value) { SetDBProxyEndpointName(value); return *this;}


    /**
     * <p>The new identifier for the <code>DBProxyEndpoint</code>. An identifier must
     * begin with a letter and must contain only ASCII letters, digits, and hyphens; it
     * can't end with a hyphen or contain two consecutive hyphens.</p>
     */
    inline const Aws::String& GetNewDBProxyEndpointName() const{ return m_newDBProxyEndpointName; }

    /**
     * <p>The new identifier for the <code>DBProxyEndpoint</code>. An identifier must
     * begin with a letter and must contain only ASCII letters, digits, and hyphens; it
     * can't end with a hyphen or contain two consecutive hyphens.</p>
     */
    inline bool NewDBProxyEndpointNameHasBeenSet() const { return m_newDBProxyEndpointNameHasBeenSet; }

    /**
     * <p>The new identifier for the <code>DBProxyEndpoint</code>. An identifier must
     * begin with a letter and must contain only ASCII letters, digits, and hyphens; it
     * can't end with a hyphen or contain two consecutive hyphens.</p>
     */
    inline void SetNewDBProxyEndpointName(const Aws::String& value) { m_newDBProxyEndpointNameHasBeenSet = true; m_newDBProxyEndpointName = value; }

    /**
     * <p>The new identifier for the <code>DBProxyEndpoint</code>. An identifier must
     * begin with a letter and must contain only ASCII letters, digits, and hyphens; it
     * can't end with a hyphen or contain two consecutive hyphens.</p>
     */
    inline void SetNewDBProxyEndpointName(Aws::String&& value) { m_newDBProxyEndpointNameHasBeenSet = true; m_newDBProxyEndpointName = std::move(value); }

    /**
     * <p>The new identifier for the <code>DBProxyEndpoint</code>. An identifier must
     * begin with a letter and must contain only ASCII letters, digits, and hyphens; it
     * can't end with a hyphen or contain two consecutive hyphens.</p>
     */
    inline void SetNewDBProxyEndpointName(const char* value) { m_newDBProxyEndpointNameHasBeenSet = true; m_newDBProxyEndpointName.assign(value); }

    /**
     * <p>The new identifier for the <code>DBProxyEndpoint</code>. An identifier must
     * begin with a letter and must contain only ASCII letters, digits, and hyphens; it
     * can't end with a hyphen or contain two consecutive hyphens.</p>
     */
    inline ModifyDBProxyEndpointRequest& WithNewDBProxyEndpointName(const Aws::String& value) { SetNewDBProxyEndpointName(value); return *this;}

    /**
     * <p>The new identifier for the <code>DBProxyEndpoint</code>. An identifier must
     * begin with a letter and must contain only ASCII letters, digits, and hyphens; it
     * can't end with a hyphen or contain two consecutive hyphens.</p>
     */
    inline ModifyDBProxyEndpointRequest& WithNewDBProxyEndpointName(Aws::String&& value) { SetNewDBProxyEndpointName(std::move(value)); return *this;}

    /**
     * <p>The new identifier for the <code>DBProxyEndpoint</code>. An identifier must
     * begin with a letter and must contain only ASCII letters, digits, and hyphens; it
     * can't end with a hyphen or contain two consecutive hyphens.</p>
     */
    inline ModifyDBProxyEndpointRequest& WithNewDBProxyEndpointName(const char* value) { SetNewDBProxyEndpointName(value); return *this;}


    /**
     * <p>The VPC security group IDs for the DB proxy endpoint. When the DB proxy
     * endpoint uses a different VPC than the original proxy, you also specify a
     * different set of security group IDs than for the original proxy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>The VPC security group IDs for the DB proxy endpoint. When the DB proxy
     * endpoint uses a different VPC than the original proxy, you also specify a
     * different set of security group IDs than for the original proxy.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>The VPC security group IDs for the DB proxy endpoint. When the DB proxy
     * endpoint uses a different VPC than the original proxy, you also specify a
     * different set of security group IDs than for the original proxy.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>The VPC security group IDs for the DB proxy endpoint. When the DB proxy
     * endpoint uses a different VPC than the original proxy, you also specify a
     * different set of security group IDs than for the original proxy.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>The VPC security group IDs for the DB proxy endpoint. When the DB proxy
     * endpoint uses a different VPC than the original proxy, you also specify a
     * different set of security group IDs than for the original proxy.</p>
     */
    inline ModifyDBProxyEndpointRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>The VPC security group IDs for the DB proxy endpoint. When the DB proxy
     * endpoint uses a different VPC than the original proxy, you also specify a
     * different set of security group IDs than for the original proxy.</p>
     */
    inline ModifyDBProxyEndpointRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The VPC security group IDs for the DB proxy endpoint. When the DB proxy
     * endpoint uses a different VPC than the original proxy, you also specify a
     * different set of security group IDs than for the original proxy.</p>
     */
    inline ModifyDBProxyEndpointRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>The VPC security group IDs for the DB proxy endpoint. When the DB proxy
     * endpoint uses a different VPC than the original proxy, you also specify a
     * different set of security group IDs than for the original proxy.</p>
     */
    inline ModifyDBProxyEndpointRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The VPC security group IDs for the DB proxy endpoint. When the DB proxy
     * endpoint uses a different VPC than the original proxy, you also specify a
     * different set of security group IDs than for the original proxy.</p>
     */
    inline ModifyDBProxyEndpointRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

  private:

    Aws::String m_dBProxyEndpointName;
    bool m_dBProxyEndpointNameHasBeenSet;

    Aws::String m_newDBProxyEndpointName;
    bool m_newDBProxyEndpointNameHasBeenSet;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
