/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class DescribeQueryRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API DescribeQueryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeQuery"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The query ID.</p>
     */
    inline const Aws::String& GetQueryId() const { return m_queryId; }
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }
    template<typename QueryIdT = Aws::String>
    void SetQueryId(QueryIdT&& value) { m_queryIdHasBeenSet = true; m_queryId = std::forward<QueryIdT>(value); }
    template<typename QueryIdT = Aws::String>
    DescribeQueryRequest& WithQueryId(QueryIdT&& value) { SetQueryId(std::forward<QueryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The alias that identifies a query template. </p>
     */
    inline const Aws::String& GetQueryAlias() const { return m_queryAlias; }
    inline bool QueryAliasHasBeenSet() const { return m_queryAliasHasBeenSet; }
    template<typename QueryAliasT = Aws::String>
    void SetQueryAlias(QueryAliasT&& value) { m_queryAliasHasBeenSet = true; m_queryAlias = std::forward<QueryAliasT>(value); }
    template<typename QueryAliasT = Aws::String>
    DescribeQueryRequest& WithQueryAlias(QueryAliasT&& value) { SetQueryAlias(std::forward<QueryAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the dashboard refresh. </p>
     */
    inline const Aws::String& GetRefreshId() const { return m_refreshId; }
    inline bool RefreshIdHasBeenSet() const { return m_refreshIdHasBeenSet; }
    template<typename RefreshIdT = Aws::String>
    void SetRefreshId(RefreshIdT&& value) { m_refreshIdHasBeenSet = true; m_refreshId = std::forward<RefreshIdT>(value); }
    template<typename RefreshIdT = Aws::String>
    DescribeQueryRequest& WithRefreshId(RefreshIdT&& value) { SetRefreshId(std::forward<RefreshIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The account ID of the event data store owner. </p>
     */
    inline const Aws::String& GetEventDataStoreOwnerAccountId() const { return m_eventDataStoreOwnerAccountId; }
    inline bool EventDataStoreOwnerAccountIdHasBeenSet() const { return m_eventDataStoreOwnerAccountIdHasBeenSet; }
    template<typename EventDataStoreOwnerAccountIdT = Aws::String>
    void SetEventDataStoreOwnerAccountId(EventDataStoreOwnerAccountIdT&& value) { m_eventDataStoreOwnerAccountIdHasBeenSet = true; m_eventDataStoreOwnerAccountId = std::forward<EventDataStoreOwnerAccountIdT>(value); }
    template<typename EventDataStoreOwnerAccountIdT = Aws::String>
    DescribeQueryRequest& WithEventDataStoreOwnerAccountId(EventDataStoreOwnerAccountIdT&& value) { SetEventDataStoreOwnerAccountId(std::forward<EventDataStoreOwnerAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    Aws::String m_queryAlias;
    bool m_queryAliasHasBeenSet = false;

    Aws::String m_refreshId;
    bool m_refreshIdHasBeenSet = false;

    Aws::String m_eventDataStoreOwnerAccountId;
    bool m_eventDataStoreOwnerAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
