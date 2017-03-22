/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>The type of resource: <code>instance</code> | <code>reservation</code> |
     * <code>snapshot</code> | <code>volume</code> </p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The type of resource: <code>instance</code> | <code>reservation</code> |
     * <code>snapshot</code> | <code>volume</code> </p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The type of resource: <code>instance</code> | <code>reservation</code> |
     * <code>snapshot</code> | <code>volume</code> </p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The type of resource: <code>instance</code> | <code>reservation</code> |
     * <code>snapshot</code> | <code>volume</code> </p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The type of resource: <code>instance</code> | <code>reservation</code> |
     * <code>snapshot</code> | <code>volume</code> </p>
     */
    inline ModifyIdentityIdFormatRequest& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The type of resource: <code>instance</code> | <code>reservation</code> |
     * <code>snapshot</code> | <code>volume</code> </p>
     */
    inline ModifyIdentityIdFormatRequest& WithResource(Aws::String&& value) { SetResource(value); return *this;}

    /**
     * <p>The type of resource: <code>instance</code> | <code>reservation</code> |
     * <code>snapshot</code> | <code>volume</code> </p>
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
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArnHasBeenSet = true; m_principalArn = value; }

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
    inline ModifyIdentityIdFormatRequest& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(value); return *this;}

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. Specify <code>all</code> to modify the ID format for all IAM users, IAM
     * roles, and the root user of the account.</p>
     */
    inline ModifyIdentityIdFormatRequest& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}

  private:
    Aws::String m_resource;
    bool m_resourceHasBeenSet;
    bool m_useLongIds;
    bool m_useLongIdsHasBeenSet;
    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
