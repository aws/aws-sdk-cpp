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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class AWS_QUICKSIGHT_API CreateGroupMembershipRequest : public QuickSightRequest
  {
  public:
    CreateGroupMembershipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGroupMembership"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the user that you want to add to the group membership.</p>
     */
    inline const Aws::String& GetMemberName() const{ return m_memberName; }

    /**
     * <p>The name of the user that you want to add to the group membership.</p>
     */
    inline bool MemberNameHasBeenSet() const { return m_memberNameHasBeenSet; }

    /**
     * <p>The name of the user that you want to add to the group membership.</p>
     */
    inline void SetMemberName(const Aws::String& value) { m_memberNameHasBeenSet = true; m_memberName = value; }

    /**
     * <p>The name of the user that you want to add to the group membership.</p>
     */
    inline void SetMemberName(Aws::String&& value) { m_memberNameHasBeenSet = true; m_memberName = std::move(value); }

    /**
     * <p>The name of the user that you want to add to the group membership.</p>
     */
    inline void SetMemberName(const char* value) { m_memberNameHasBeenSet = true; m_memberName.assign(value); }

    /**
     * <p>The name of the user that you want to add to the group membership.</p>
     */
    inline CreateGroupMembershipRequest& WithMemberName(const Aws::String& value) { SetMemberName(value); return *this;}

    /**
     * <p>The name of the user that you want to add to the group membership.</p>
     */
    inline CreateGroupMembershipRequest& WithMemberName(Aws::String&& value) { SetMemberName(std::move(value)); return *this;}

    /**
     * <p>The name of the user that you want to add to the group membership.</p>
     */
    inline CreateGroupMembershipRequest& WithMemberName(const char* value) { SetMemberName(value); return *this;}


    /**
     * <p>The name of the group that you want to add the user to.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the group that you want to add the user to.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the group that you want to add the user to.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the group that you want to add the user to.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the group that you want to add the user to.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the group that you want to add the user to.</p>
     */
    inline CreateGroupMembershipRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the group that you want to add the user to.</p>
     */
    inline CreateGroupMembershipRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the group that you want to add the user to.</p>
     */
    inline CreateGroupMembershipRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The ID for the AWS account that the group is in. Currently, you use the ID
     * for the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID for the AWS account that the group is in. Currently, you use the ID
     * for the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID for the AWS account that the group is in. Currently, you use the ID
     * for the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID for the AWS account that the group is in. Currently, you use the ID
     * for the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID for the AWS account that the group is in. Currently, you use the ID
     * for the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID for the AWS account that the group is in. Currently, you use the ID
     * for the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline CreateGroupMembershipRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the AWS account that the group is in. Currently, you use the ID
     * for the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline CreateGroupMembershipRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the AWS account that the group is in. Currently, you use the ID
     * for the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline CreateGroupMembershipRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline CreateGroupMembershipRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline CreateGroupMembershipRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline CreateGroupMembershipRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}

  private:

    Aws::String m_memberName;
    bool m_memberNameHasBeenSet;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
