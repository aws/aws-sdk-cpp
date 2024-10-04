/**
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
  class DescribeIdentityIdFormatRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeIdentityIdFormatRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeIdentityIdFormat"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The type of resource: <code>bundle</code> | <code>conversion-task</code> |
     * <code>customer-gateway</code> | <code>dhcp-options</code> |
     * <code>elastic-ip-allocation</code> | <code>elastic-ip-association</code> |
     * <code>export-task</code> | <code>flow-log</code> | <code>image</code> |
     * <code>import-task</code> | <code>instance</code> | <code>internet-gateway</code>
     * | <code>network-acl</code> | <code>network-acl-association</code> |
     * <code>network-interface</code> | <code>network-interface-attachment</code> |
     * <code>prefix-list</code> | <code>reservation</code> | <code>route-table</code> |
     * <code>route-table-association</code> | <code>security-group</code> |
     * <code>snapshot</code> | <code>subnet</code> |
     * <code>subnet-cidr-block-association</code> | <code>volume</code> |
     * <code>vpc</code> | <code>vpc-cidr-block-association</code> |
     * <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> |
     * <code>vpn-connection</code> | <code>vpn-gateway</code> </p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }
    inline DescribeIdentityIdFormatRequest& WithResource(const Aws::String& value) { SetResource(value); return *this;}
    inline DescribeIdentityIdFormatRequest& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}
    inline DescribeIdentityIdFormatRequest& WithResource(const char* value) { SetResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the principal, which can be an IAM role, IAM user, or the root
     * user.</p>
     */
    inline const Aws::String& GetPrincipalArn() const{ return m_principalArn; }
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
    inline void SetPrincipalArn(const Aws::String& value) { m_principalArnHasBeenSet = true; m_principalArn = value; }
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::move(value); }
    inline void SetPrincipalArn(const char* value) { m_principalArnHasBeenSet = true; m_principalArn.assign(value); }
    inline DescribeIdentityIdFormatRequest& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}
    inline DescribeIdentityIdFormatRequest& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(std::move(value)); return *this;}
    inline DescribeIdentityIdFormatRequest& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}
    ///@}
  private:

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
