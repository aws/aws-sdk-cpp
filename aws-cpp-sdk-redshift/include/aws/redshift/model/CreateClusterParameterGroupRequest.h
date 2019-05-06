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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateClusterParameterGroupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API CreateClusterParameterGroupRequest : public RedshiftRequest
  {
  public:
    CreateClusterParameterGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateClusterParameterGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> <li> <p>Must be unique withing your
     * AWS account.</p> </li> </ul> <note> <p>This value is stored as a lower-case
     * string.</p> </note>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }

    /**
     * <p>The name of the cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> <li> <p>Must be unique withing your
     * AWS account.</p> </li> </ul> <note> <p>This value is stored as a lower-case
     * string.</p> </note>
     */
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> <li> <p>Must be unique withing your
     * AWS account.</p> </li> </ul> <note> <p>This value is stored as a lower-case
     * string.</p> </note>
     */
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }

    /**
     * <p>The name of the cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> <li> <p>Must be unique withing your
     * AWS account.</p> </li> </ul> <note> <p>This value is stored as a lower-case
     * string.</p> </note>
     */
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::move(value); }

    /**
     * <p>The name of the cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> <li> <p>Must be unique withing your
     * AWS account.</p> </li> </ul> <note> <p>This value is stored as a lower-case
     * string.</p> </note>
     */
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }

    /**
     * <p>The name of the cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> <li> <p>Must be unique withing your
     * AWS account.</p> </li> </ul> <note> <p>This value is stored as a lower-case
     * string.</p> </note>
     */
    inline CreateClusterParameterGroupRequest& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> <li> <p>Must be unique withing your
     * AWS account.</p> </li> </ul> <note> <p>This value is stored as a lower-case
     * string.</p> </note>
     */
    inline CreateClusterParameterGroupRequest& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> <li> <p>Must be unique withing your
     * AWS account.</p> </li> </ul> <note> <p>This value is stored as a lower-case
     * string.</p> </note>
     */
    inline CreateClusterParameterGroupRequest& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}


    /**
     * <p>The Amazon Redshift engine version to which the cluster parameter group
     * applies. The cluster engine version determines the set of parameters.</p> <p>To
     * get a list of valid parameter group family names, you can call
     * <a>DescribeClusterParameterGroups</a>. By default, Amazon Redshift returns a
     * list of all the parameter groups that are owned by your AWS account, including
     * the default parameter groups for each Amazon Redshift engine version. The
     * parameter group family names associated with the default parameter groups
     * provide you the valid values. For example, a valid family name is
     * "redshift-1.0". </p>
     */
    inline const Aws::String& GetParameterGroupFamily() const{ return m_parameterGroupFamily; }

    /**
     * <p>The Amazon Redshift engine version to which the cluster parameter group
     * applies. The cluster engine version determines the set of parameters.</p> <p>To
     * get a list of valid parameter group family names, you can call
     * <a>DescribeClusterParameterGroups</a>. By default, Amazon Redshift returns a
     * list of all the parameter groups that are owned by your AWS account, including
     * the default parameter groups for each Amazon Redshift engine version. The
     * parameter group family names associated with the default parameter groups
     * provide you the valid values. For example, a valid family name is
     * "redshift-1.0". </p>
     */
    inline bool ParameterGroupFamilyHasBeenSet() const { return m_parameterGroupFamilyHasBeenSet; }

    /**
     * <p>The Amazon Redshift engine version to which the cluster parameter group
     * applies. The cluster engine version determines the set of parameters.</p> <p>To
     * get a list of valid parameter group family names, you can call
     * <a>DescribeClusterParameterGroups</a>. By default, Amazon Redshift returns a
     * list of all the parameter groups that are owned by your AWS account, including
     * the default parameter groups for each Amazon Redshift engine version. The
     * parameter group family names associated with the default parameter groups
     * provide you the valid values. For example, a valid family name is
     * "redshift-1.0". </p>
     */
    inline void SetParameterGroupFamily(const Aws::String& value) { m_parameterGroupFamilyHasBeenSet = true; m_parameterGroupFamily = value; }

    /**
     * <p>The Amazon Redshift engine version to which the cluster parameter group
     * applies. The cluster engine version determines the set of parameters.</p> <p>To
     * get a list of valid parameter group family names, you can call
     * <a>DescribeClusterParameterGroups</a>. By default, Amazon Redshift returns a
     * list of all the parameter groups that are owned by your AWS account, including
     * the default parameter groups for each Amazon Redshift engine version. The
     * parameter group family names associated with the default parameter groups
     * provide you the valid values. For example, a valid family name is
     * "redshift-1.0". </p>
     */
    inline void SetParameterGroupFamily(Aws::String&& value) { m_parameterGroupFamilyHasBeenSet = true; m_parameterGroupFamily = std::move(value); }

    /**
     * <p>The Amazon Redshift engine version to which the cluster parameter group
     * applies. The cluster engine version determines the set of parameters.</p> <p>To
     * get a list of valid parameter group family names, you can call
     * <a>DescribeClusterParameterGroups</a>. By default, Amazon Redshift returns a
     * list of all the parameter groups that are owned by your AWS account, including
     * the default parameter groups for each Amazon Redshift engine version. The
     * parameter group family names associated with the default parameter groups
     * provide you the valid values. For example, a valid family name is
     * "redshift-1.0". </p>
     */
    inline void SetParameterGroupFamily(const char* value) { m_parameterGroupFamilyHasBeenSet = true; m_parameterGroupFamily.assign(value); }

    /**
     * <p>The Amazon Redshift engine version to which the cluster parameter group
     * applies. The cluster engine version determines the set of parameters.</p> <p>To
     * get a list of valid parameter group family names, you can call
     * <a>DescribeClusterParameterGroups</a>. By default, Amazon Redshift returns a
     * list of all the parameter groups that are owned by your AWS account, including
     * the default parameter groups for each Amazon Redshift engine version. The
     * parameter group family names associated with the default parameter groups
     * provide you the valid values. For example, a valid family name is
     * "redshift-1.0". </p>
     */
    inline CreateClusterParameterGroupRequest& WithParameterGroupFamily(const Aws::String& value) { SetParameterGroupFamily(value); return *this;}

    /**
     * <p>The Amazon Redshift engine version to which the cluster parameter group
     * applies. The cluster engine version determines the set of parameters.</p> <p>To
     * get a list of valid parameter group family names, you can call
     * <a>DescribeClusterParameterGroups</a>. By default, Amazon Redshift returns a
     * list of all the parameter groups that are owned by your AWS account, including
     * the default parameter groups for each Amazon Redshift engine version. The
     * parameter group family names associated with the default parameter groups
     * provide you the valid values. For example, a valid family name is
     * "redshift-1.0". </p>
     */
    inline CreateClusterParameterGroupRequest& WithParameterGroupFamily(Aws::String&& value) { SetParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>The Amazon Redshift engine version to which the cluster parameter group
     * applies. The cluster engine version determines the set of parameters.</p> <p>To
     * get a list of valid parameter group family names, you can call
     * <a>DescribeClusterParameterGroups</a>. By default, Amazon Redshift returns a
     * list of all the parameter groups that are owned by your AWS account, including
     * the default parameter groups for each Amazon Redshift engine version. The
     * parameter group family names associated with the default parameter groups
     * provide you the valid values. For example, a valid family name is
     * "redshift-1.0". </p>
     */
    inline CreateClusterParameterGroupRequest& WithParameterGroupFamily(const char* value) { SetParameterGroupFamily(value); return *this;}


    /**
     * <p>A description of the parameter group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the parameter group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the parameter group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the parameter group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the parameter group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the parameter group.</p>
     */
    inline CreateClusterParameterGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the parameter group.</p>
     */
    inline CreateClusterParameterGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the parameter group.</p>
     */
    inline CreateClusterParameterGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of tag instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateClusterParameterGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateClusterParameterGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateClusterParameterGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateClusterParameterGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet;

    Aws::String m_parameterGroupFamily;
    bool m_parameterGroupFamilyHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
