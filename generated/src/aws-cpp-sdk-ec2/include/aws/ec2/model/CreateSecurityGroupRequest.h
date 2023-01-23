/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateSecurityGroupRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateSecurityGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSecurityGroup"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A description for the security group. This is informational only.</p>
     * <p>Constraints: Up to 255 characters in length</p> <p>Constraints for
     * EC2-Classic: ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9,
     * spaces, and ._-:/()#,@[]+=&amp;;{}!$*</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the security group. This is informational only.</p>
     * <p>Constraints: Up to 255 characters in length</p> <p>Constraints for
     * EC2-Classic: ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9,
     * spaces, and ._-:/()#,@[]+=&amp;;{}!$*</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the security group. This is informational only.</p>
     * <p>Constraints: Up to 255 characters in length</p> <p>Constraints for
     * EC2-Classic: ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9,
     * spaces, and ._-:/()#,@[]+=&amp;;{}!$*</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the security group. This is informational only.</p>
     * <p>Constraints: Up to 255 characters in length</p> <p>Constraints for
     * EC2-Classic: ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9,
     * spaces, and ._-:/()#,@[]+=&amp;;{}!$*</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the security group. This is informational only.</p>
     * <p>Constraints: Up to 255 characters in length</p> <p>Constraints for
     * EC2-Classic: ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9,
     * spaces, and ._-:/()#,@[]+=&amp;;{}!$*</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the security group. This is informational only.</p>
     * <p>Constraints: Up to 255 characters in length</p> <p>Constraints for
     * EC2-Classic: ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9,
     * spaces, and ._-:/()#,@[]+=&amp;;{}!$*</p>
     */
    inline CreateSecurityGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the security group. This is informational only.</p>
     * <p>Constraints: Up to 255 characters in length</p> <p>Constraints for
     * EC2-Classic: ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9,
     * spaces, and ._-:/()#,@[]+=&amp;;{}!$*</p>
     */
    inline CreateSecurityGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the security group. This is informational only.</p>
     * <p>Constraints: Up to 255 characters in length</p> <p>Constraints for
     * EC2-Classic: ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9,
     * spaces, and ._-:/()#,@[]+=&amp;;{}!$*</p>
     */
    inline CreateSecurityGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the security group.</p> <p>Constraints: Up to 255 characters in
     * length. Cannot start with <code>sg-</code>.</p> <p>Constraints for EC2-Classic:
     * ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9, spaces, and
     * ._-:/()#,@[]+=&amp;;{}!$*</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the security group.</p> <p>Constraints: Up to 255 characters in
     * length. Cannot start with <code>sg-</code>.</p> <p>Constraints for EC2-Classic:
     * ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9, spaces, and
     * ._-:/()#,@[]+=&amp;;{}!$*</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the security group.</p> <p>Constraints: Up to 255 characters in
     * length. Cannot start with <code>sg-</code>.</p> <p>Constraints for EC2-Classic:
     * ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9, spaces, and
     * ._-:/()#,@[]+=&amp;;{}!$*</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the security group.</p> <p>Constraints: Up to 255 characters in
     * length. Cannot start with <code>sg-</code>.</p> <p>Constraints for EC2-Classic:
     * ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9, spaces, and
     * ._-:/()#,@[]+=&amp;;{}!$*</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the security group.</p> <p>Constraints: Up to 255 characters in
     * length. Cannot start with <code>sg-</code>.</p> <p>Constraints for EC2-Classic:
     * ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9, spaces, and
     * ._-:/()#,@[]+=&amp;;{}!$*</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the security group.</p> <p>Constraints: Up to 255 characters in
     * length. Cannot start with <code>sg-</code>.</p> <p>Constraints for EC2-Classic:
     * ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9, spaces, and
     * ._-:/()#,@[]+=&amp;;{}!$*</p>
     */
    inline CreateSecurityGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the security group.</p> <p>Constraints: Up to 255 characters in
     * length. Cannot start with <code>sg-</code>.</p> <p>Constraints for EC2-Classic:
     * ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9, spaces, and
     * ._-:/()#,@[]+=&amp;;{}!$*</p>
     */
    inline CreateSecurityGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the security group.</p> <p>Constraints: Up to 255 characters in
     * length. Cannot start with <code>sg-</code>.</p> <p>Constraints for EC2-Classic:
     * ASCII characters</p> <p>Constraints for EC2-VPC: a-z, A-Z, 0-9, spaces, and
     * ._-:/()#,@[]+=&amp;;{}!$*</p>
     */
    inline CreateSecurityGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>[EC2-VPC] The ID of the VPC. Required for EC2-VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>[EC2-VPC] The ID of the VPC. Required for EC2-VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>[EC2-VPC] The ID of the VPC. Required for EC2-VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>[EC2-VPC] The ID of the VPC. Required for EC2-VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>[EC2-VPC] The ID of the VPC. Required for EC2-VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>[EC2-VPC] The ID of the VPC. Required for EC2-VPC.</p>
     */
    inline CreateSecurityGroupRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the VPC. Required for EC2-VPC.</p>
     */
    inline CreateSecurityGroupRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the VPC. Required for EC2-VPC.</p>
     */
    inline CreateSecurityGroupRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The tags to assign to the security group.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to assign to the security group.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to assign to the security group.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to assign to the security group.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to assign to the security group.</p>
     */
    inline CreateSecurityGroupRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to assign to the security group.</p>
     */
    inline CreateSecurityGroupRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the security group.</p>
     */
    inline CreateSecurityGroupRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the security group.</p>
     */
    inline CreateSecurityGroupRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateSecurityGroupRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
