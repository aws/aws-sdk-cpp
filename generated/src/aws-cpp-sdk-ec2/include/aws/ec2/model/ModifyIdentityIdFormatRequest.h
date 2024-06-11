﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyIdentityIdFormatRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyIdentityIdFormatRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyIdentityIdFormat"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. Specify <code>all</code> to modify the ID format for all IAM users, IAM
     * roles, and the root user of the account.</p>
     */
    inline const Aws::String& GetPrincipalArn() const{ return m_principalArn; }
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
    inline void SetPrincipalArn(const Aws::String& value) { m_principalArnHasBeenSet = true; m_principalArn = value; }
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::move(value); }
    inline void SetPrincipalArn(const char* value) { m_principalArnHasBeenSet = true; m_principalArn.assign(value); }
    inline ModifyIdentityIdFormatRequest& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}
    inline ModifyIdentityIdFormatRequest& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(std::move(value)); return *this;}
    inline ModifyIdentityIdFormatRequest& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource: <code>bundle</code> | <code>conversion-task</code> |
     * <code>customer-gateway</code> | <code>dhcp-options</code> |
     * <code>elastic-ip-allocation</code> | <code>elastic-ip-association</code> |
     * <code>export-task</code> | <code>flow-log</code> | <code>image</code> |
     * <code>import-task</code> | <code>internet-gateway</code> |
     * <code>network-acl</code> | <code>network-acl-association</code> |
     * <code>network-interface</code> | <code>network-interface-attachment</code> |
     * <code>prefix-list</code> | <code>route-table</code> |
     * <code>route-table-association</code> | <code>security-group</code> |
     * <code>subnet</code> | <code>subnet-cidr-block-association</code> |
     * <code>vpc</code> | <code>vpc-cidr-block-association</code> |
     * <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> |
     * <code>vpn-connection</code> | <code>vpn-gateway</code>.</p> <p>Alternatively,
     * use the <code>all-current</code> option to include all resource types that are
     * currently within their opt-in period for longer IDs.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }
    inline ModifyIdentityIdFormatRequest& WithResource(const Aws::String& value) { SetResource(value); return *this;}
    inline ModifyIdentityIdFormatRequest& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}
    inline ModifyIdentityIdFormatRequest& WithResource(const char* value) { SetResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the resource should use longer IDs (17-character IDs)</p>
     */
    inline bool GetUseLongIds() const{ return m_useLongIds; }
    inline bool UseLongIdsHasBeenSet() const { return m_useLongIdsHasBeenSet; }
    inline void SetUseLongIds(bool value) { m_useLongIdsHasBeenSet = true; m_useLongIds = value; }
    inline ModifyIdentityIdFormatRequest& WithUseLongIds(bool value) { SetUseLongIds(value); return *this;}
    ///@}
  private:

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    bool m_useLongIds;
    bool m_useLongIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
