/**
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
    AWS_KENDRA_API PutPrincipalMappingRequest() = default;

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
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    PutPrincipalMappingRequest& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
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
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    PutPrincipalMappingRequest& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the group you want to map its users to.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    PutPrincipalMappingRequest& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
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
    inline const GroupMembers& GetGroupMembers() const { return m_groupMembers; }
    inline bool GroupMembersHasBeenSet() const { return m_groupMembersHasBeenSet; }
    template<typename GroupMembersT = GroupMembers>
    void SetGroupMembers(GroupMembersT&& value) { m_groupMembersHasBeenSet = true; m_groupMembers = std::forward<GroupMembersT>(value); }
    template<typename GroupMembersT = GroupMembers>
    PutPrincipalMappingRequest& WithGroupMembers(GroupMembersT&& value) { SetGroupMembers(std::forward<GroupMembersT>(value)); return *this;}
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
    inline long long GetOrderingId() const { return m_orderingId; }
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
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    PutPrincipalMappingRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
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

    long long m_orderingId{0};
    bool m_orderingIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
