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
   * <p>Contains the parameters of ModifyIdentityIdFormat.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyIdentityIdFormatRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ModifyIdentityIdFormatRequest : public EC2Request
  {
  public:
    ModifyIdentityIdFormatRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyIdentityIdFormat"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. Specify <code>all</code> to modify the ID format for all IAM users, IAM
     * roles, and the root user of the account.</p>
     */
    inline const Aws::String& GetPrincipalArn() const{ return m_principalArn; }

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. Specify <code>all</code> to modify the ID format for all IAM users, IAM
     * roles, and the root user of the account.</p>
     */
    inline void SetPrincipalArn(const Aws::String& value) { m_principalArnHasBeenSet = true; m_principalArn = value; }

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. Specify <code>all</code> to modify the ID format for all IAM users, IAM
     * roles, and the root user of the account.</p>
     */
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::move(value); }

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. Specify <code>all</code> to modify the ID format for all IAM users, IAM
     * roles, and the root user of the account.</p>
     */
    inline void SetPrincipalArn(const char* value) { m_principalArnHasBeenSet = true; m_principalArn.assign(value); }

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. Specify <code>all</code> to modify the ID format for all IAM users, IAM
     * roles, and the root user of the account.</p>
     */
    inline ModifyIdentityIdFormatRequest& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. Specify <code>all</code> to modify the ID format for all IAM users, IAM
     * roles, and the root user of the account.</p>
     */
    inline ModifyIdentityIdFormatRequest& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. Specify <code>all</code> to modify the ID format for all IAM users, IAM
     * roles, and the root user of the account.</p>
     */
    inline ModifyIdentityIdFormatRequest& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}


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
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

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
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

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
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

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
    inline ModifyIdentityIdFormatRequest& WithResource(const Aws::String& value) { SetResource(value); return *this;}

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
    inline ModifyIdentityIdFormatRequest& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

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
    inline ModifyIdentityIdFormatRequest& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>Indicates whether the resource should use longer IDs (17-character IDs)</p>
     */
    inline bool GetUseLongIds() const{ return m_useLongIds; }

    /**
     * <p>Indicates whether the resource should use longer IDs (17-character IDs)</p>
     */
    inline void SetUseLongIds(bool value) { m_useLongIdsHasBeenSet = true; m_useLongIds = value; }

    /**
     * <p>Indicates whether the resource should use longer IDs (17-character IDs)</p>
     */
    inline ModifyIdentityIdFormatRequest& WithUseLongIds(bool value) { SetUseLongIds(value); return *this;}

  private:

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet;

    Aws::String m_resource;
    bool m_resourceHasBeenSet;

    bool m_useLongIds;
    bool m_useLongIdsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
