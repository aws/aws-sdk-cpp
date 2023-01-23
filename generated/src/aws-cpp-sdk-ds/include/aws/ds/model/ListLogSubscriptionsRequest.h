/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class ListLogSubscriptionsRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API ListLogSubscriptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLogSubscriptions"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>If a <i>DirectoryID</i> is provided, lists only the log subscription
     * associated with that directory. If no <i>DirectoryId</i> is provided, lists all
     * log subscriptions associated with your Amazon Web Services account. If there are
     * no log subscriptions for the Amazon Web Services account or the directory, an
     * empty list will be returned.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>If a <i>DirectoryID</i> is provided, lists only the log subscription
     * associated with that directory. If no <i>DirectoryId</i> is provided, lists all
     * log subscriptions associated with your Amazon Web Services account. If there are
     * no log subscriptions for the Amazon Web Services account or the directory, an
     * empty list will be returned.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>If a <i>DirectoryID</i> is provided, lists only the log subscription
     * associated with that directory. If no <i>DirectoryId</i> is provided, lists all
     * log subscriptions associated with your Amazon Web Services account. If there are
     * no log subscriptions for the Amazon Web Services account or the directory, an
     * empty list will be returned.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>If a <i>DirectoryID</i> is provided, lists only the log subscription
     * associated with that directory. If no <i>DirectoryId</i> is provided, lists all
     * log subscriptions associated with your Amazon Web Services account. If there are
     * no log subscriptions for the Amazon Web Services account or the directory, an
     * empty list will be returned.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>If a <i>DirectoryID</i> is provided, lists only the log subscription
     * associated with that directory. If no <i>DirectoryId</i> is provided, lists all
     * log subscriptions associated with your Amazon Web Services account. If there are
     * no log subscriptions for the Amazon Web Services account or the directory, an
     * empty list will be returned.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>If a <i>DirectoryID</i> is provided, lists only the log subscription
     * associated with that directory. If no <i>DirectoryId</i> is provided, lists all
     * log subscriptions associated with your Amazon Web Services account. If there are
     * no log subscriptions for the Amazon Web Services account or the directory, an
     * empty list will be returned.</p>
     */
    inline ListLogSubscriptionsRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>If a <i>DirectoryID</i> is provided, lists only the log subscription
     * associated with that directory. If no <i>DirectoryId</i> is provided, lists all
     * log subscriptions associated with your Amazon Web Services account. If there are
     * no log subscriptions for the Amazon Web Services account or the directory, an
     * empty list will be returned.</p>
     */
    inline ListLogSubscriptionsRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>If a <i>DirectoryID</i> is provided, lists only the log subscription
     * associated with that directory. If no <i>DirectoryId</i> is provided, lists all
     * log subscriptions associated with your Amazon Web Services account. If there are
     * no log subscriptions for the Amazon Web Services account or the directory, an
     * empty list will be returned.</p>
     */
    inline ListLogSubscriptionsRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The token for the next set of items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return.</p>
     */
    inline ListLogSubscriptionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return.</p>
     */
    inline ListLogSubscriptionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return.</p>
     */
    inline ListLogSubscriptionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items returned.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items returned.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of items returned.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items returned.</p>
     */
    inline ListLogSubscriptionsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
