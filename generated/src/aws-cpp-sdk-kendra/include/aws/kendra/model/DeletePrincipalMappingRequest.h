/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class DeletePrincipalMappingRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API DeletePrincipalMappingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePrincipalMapping"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the index you want to delete a group from.</p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    DeletePrincipalMappingRequest& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data source you want to delete a group from.</p> <p>A
     * group can be tied to multiple data sources. You can delete a group from
     * accessing documents in a certain data source. For example, the groups
     * "Research", "Engineering", and "Sales and Marketing" are all tied to the
     * company's documents stored in the data sources Confluence and Salesforce. You
     * want to delete "Research" and "Engineering" groups from Salesforce, so that
     * these groups cannot access customer-related documents stored in Salesforce. Only
     * "Sales and Marketing" should access documents in the Salesforce data source.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    DeletePrincipalMappingRequest& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the group you want to delete.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    DeletePrincipalMappingRequest& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp identifier you specify to ensure Amazon Kendra does not
     * override the latest <code>DELETE</code> action with previous actions. The
     * highest number ID, which is the ordering ID, is the latest action you want to
     * process and apply on top of other actions with lower number IDs. This prevents
     * previous actions with lower number IDs from possibly overriding the latest
     * action.</p> <p>The ordering ID can be the Unix time of the last update you made
     * to a group members list. You would then provide this list when calling
     * <code>PutPrincipalMapping</code>. This ensures your <code>DELETE</code> action
     * for that updated group with the latest members list doesn't get overwritten by
     * earlier <code>DELETE</code> actions for the same group which are yet to be
     * processed.</p> <p>The default ordering ID is the current Unix time in
     * milliseconds that the action was received by Amazon Kendra. </p>
     */
    inline long long GetOrderingId() const { return m_orderingId; }
    inline bool OrderingIdHasBeenSet() const { return m_orderingIdHasBeenSet; }
    inline void SetOrderingId(long long value) { m_orderingIdHasBeenSet = true; m_orderingId = value; }
    inline DeletePrincipalMappingRequest& WithOrderingId(long long value) { SetOrderingId(value); return *this;}
    ///@}
  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    long long m_orderingId{0};
    bool m_orderingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
