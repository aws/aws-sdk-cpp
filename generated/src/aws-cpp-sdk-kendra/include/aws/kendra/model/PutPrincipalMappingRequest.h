﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/GroupMembers.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class PutPrincipalMappingRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API PutPrincipalMappingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPrincipalMapping"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the index you want to map users to their groups.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }
    inline PutPrincipalMappingRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}
    inline PutPrincipalMappingRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}
    inline PutPrincipalMappingRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data source you want to map users to their groups.</p>
     * <p>This is useful if a group is tied to multiple data sources, but you only want
     * the group to access documents of a certain data source. For example, the groups
     * "Research", "Engineering", and "Sales and Marketing" are all tied to the
     * company's documents stored in the data sources Confluence and Salesforce.
     * However, "Sales and Marketing" team only needs access to customer-related
     * documents stored in Salesforce.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }
    inline PutPrincipalMappingRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}
    inline PutPrincipalMappingRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}
    inline PutPrincipalMappingRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the group you want to map its users to.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline PutPrincipalMappingRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline PutPrincipalMappingRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline PutPrincipalMappingRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list that contains your users that belong the same group. This can
     * include sub groups that belong to a group.</p> <p>For example, the group
     * "Company A" includes the user "CEO" and the sub groups "Research",
     * "Engineering", and "Sales and Marketing".</p> <p>If you have more than 1000
     * users and/or sub groups for a single group, you need to provide the path to the
     * S3 file that lists your users and sub groups for a group. Your sub groups can
     * contain more than 1000 users, but the list of sub groups that belong to a group
     * (and/or users) must be no more than 1000.</p>
     */
    inline const GroupMembers& GetGroupMembers() const{ return m_groupMembers; }
    inline bool GroupMembersHasBeenSet() const { return m_groupMembersHasBeenSet; }
    inline void SetGroupMembers(const GroupMembers& value) { m_groupMembersHasBeenSet = true; m_groupMembers = value; }
    inline void SetGroupMembers(GroupMembers&& value) { m_groupMembersHasBeenSet = true; m_groupMembers = std::move(value); }
    inline PutPrincipalMappingRequest& WithGroupMembers(const GroupMembers& value) { SetGroupMembers(value); return *this;}
    inline PutPrincipalMappingRequest& WithGroupMembers(GroupMembers&& value) { SetGroupMembers(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp identifier you specify to ensure Amazon Kendra doesn't override
     * the latest <code>PUT</code> action with previous actions. The highest number ID,
     * which is the ordering ID, is the latest action you want to process and apply on
     * top of other actions with lower number IDs. This prevents previous actions with
     * lower number IDs from possibly overriding the latest action.</p> <p>The ordering
     * ID can be the Unix time of the last update you made to a group members list. You
     * would then provide this list when calling <code>PutPrincipalMapping</code>. This
     * ensures your <code>PUT</code> action for that updated group with the latest
     * members list doesn't get overwritten by earlier <code>PUT</code> actions for the
     * same group which are yet to be processed.</p> <p>The default ordering ID is the
     * current Unix time in milliseconds that the action was received by Amazon
     * Kendra.</p>
     */
    inline long long GetOrderingId() const{ return m_orderingId; }
    inline bool OrderingIdHasBeenSet() const { return m_orderingIdHasBeenSet; }
    inline void SetOrderingId(long long value) { m_orderingIdHasBeenSet = true; m_orderingId = value; }
    inline PutPrincipalMappingRequest& WithOrderingId(long long value) { SetOrderingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has access to the S3 file
     * that contains your list of users that belong to a group.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html#iam-roles-ds">IAM
     * roles for Amazon Kendra</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline PutPrincipalMappingRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline PutPrincipalMappingRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline PutPrincipalMappingRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    GroupMembers m_groupMembers;
    bool m_groupMembersHasBeenSet = false;

    long long m_orderingId;
    bool m_orderingIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
