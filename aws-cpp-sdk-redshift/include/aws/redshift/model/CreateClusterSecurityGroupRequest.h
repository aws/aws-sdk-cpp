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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_REDSHIFT_API CreateClusterSecurityGroupRequest : public RedshiftRequest
  {
  public:
    CreateClusterSecurityGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name for the security group. Amazon Redshift stores the value as a
     * lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain no more than
     * 255 alphanumeric characters or hyphens.</p> </li> <li> <p>Must not be
     * "Default".</p> </li> <li> <p>Must be unique for all security groups that are
     * created by your AWS account.</p> </li> </ul> <p>Example:
     * <code>examplesecuritygroup</code> </p>
     */
    inline const Aws::String& GetClusterSecurityGroupName() const{ return m_clusterSecurityGroupName; }

    /**
     * <p>The name for the security group. Amazon Redshift stores the value as a
     * lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain no more than
     * 255 alphanumeric characters or hyphens.</p> </li> <li> <p>Must not be
     * "Default".</p> </li> <li> <p>Must be unique for all security groups that are
     * created by your AWS account.</p> </li> </ul> <p>Example:
     * <code>examplesecuritygroup</code> </p>
     */
    inline void SetClusterSecurityGroupName(const Aws::String& value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName = value; }

    /**
     * <p>The name for the security group. Amazon Redshift stores the value as a
     * lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain no more than
     * 255 alphanumeric characters or hyphens.</p> </li> <li> <p>Must not be
     * "Default".</p> </li> <li> <p>Must be unique for all security groups that are
     * created by your AWS account.</p> </li> </ul> <p>Example:
     * <code>examplesecuritygroup</code> </p>
     */
    inline void SetClusterSecurityGroupName(Aws::String&& value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName = value; }

    /**
     * <p>The name for the security group. Amazon Redshift stores the value as a
     * lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain no more than
     * 255 alphanumeric characters or hyphens.</p> </li> <li> <p>Must not be
     * "Default".</p> </li> <li> <p>Must be unique for all security groups that are
     * created by your AWS account.</p> </li> </ul> <p>Example:
     * <code>examplesecuritygroup</code> </p>
     */
    inline void SetClusterSecurityGroupName(const char* value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName.assign(value); }

    /**
     * <p>The name for the security group. Amazon Redshift stores the value as a
     * lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain no more than
     * 255 alphanumeric characters or hyphens.</p> </li> <li> <p>Must not be
     * "Default".</p> </li> <li> <p>Must be unique for all security groups that are
     * created by your AWS account.</p> </li> </ul> <p>Example:
     * <code>examplesecuritygroup</code> </p>
     */
    inline CreateClusterSecurityGroupRequest& WithClusterSecurityGroupName(const Aws::String& value) { SetClusterSecurityGroupName(value); return *this;}

    /**
     * <p>The name for the security group. Amazon Redshift stores the value as a
     * lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain no more than
     * 255 alphanumeric characters or hyphens.</p> </li> <li> <p>Must not be
     * "Default".</p> </li> <li> <p>Must be unique for all security groups that are
     * created by your AWS account.</p> </li> </ul> <p>Example:
     * <code>examplesecuritygroup</code> </p>
     */
    inline CreateClusterSecurityGroupRequest& WithClusterSecurityGroupName(Aws::String&& value) { SetClusterSecurityGroupName(value); return *this;}

    /**
     * <p>The name for the security group. Amazon Redshift stores the value as a
     * lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain no more than
     * 255 alphanumeric characters or hyphens.</p> </li> <li> <p>Must not be
     * "Default".</p> </li> <li> <p>Must be unique for all security groups that are
     * created by your AWS account.</p> </li> </ul> <p>Example:
     * <code>examplesecuritygroup</code> </p>
     */
    inline CreateClusterSecurityGroupRequest& WithClusterSecurityGroupName(const char* value) { SetClusterSecurityGroupName(value); return *this;}

    /**
     * <p>A description for the security group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the security group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the security group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the security group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the security group.</p>
     */
    inline CreateClusterSecurityGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the security group.</p>
     */
    inline CreateClusterSecurityGroupRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the security group.</p>
     */
    inline CreateClusterSecurityGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateClusterSecurityGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateClusterSecurityGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateClusterSecurityGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateClusterSecurityGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_clusterSecurityGroupName;
    bool m_clusterSecurityGroupNameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
