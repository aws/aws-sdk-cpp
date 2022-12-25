/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class ListHostKeysRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API ListHostKeysRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListHostKeys"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maximum number of host keys to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of host keys to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of host keys to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of host keys to return.</p>
     */
    inline ListHostKeysRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>When there are additional results that were not returned, a
     * <code>NextToken</code> parameter is returned. You can use that value for a
     * subsequent call to <code>ListHostKeys</code> to continue listing results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When there are additional results that were not returned, a
     * <code>NextToken</code> parameter is returned. You can use that value for a
     * subsequent call to <code>ListHostKeys</code> to continue listing results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When there are additional results that were not returned, a
     * <code>NextToken</code> parameter is returned. You can use that value for a
     * subsequent call to <code>ListHostKeys</code> to continue listing results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When there are additional results that were not returned, a
     * <code>NextToken</code> parameter is returned. You can use that value for a
     * subsequent call to <code>ListHostKeys</code> to continue listing results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When there are additional results that were not returned, a
     * <code>NextToken</code> parameter is returned. You can use that value for a
     * subsequent call to <code>ListHostKeys</code> to continue listing results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When there are additional results that were not returned, a
     * <code>NextToken</code> parameter is returned. You can use that value for a
     * subsequent call to <code>ListHostKeys</code> to continue listing results.</p>
     */
    inline ListHostKeysRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When there are additional results that were not returned, a
     * <code>NextToken</code> parameter is returned. You can use that value for a
     * subsequent call to <code>ListHostKeys</code> to continue listing results.</p>
     */
    inline ListHostKeysRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When there are additional results that were not returned, a
     * <code>NextToken</code> parameter is returned. You can use that value for a
     * subsequent call to <code>ListHostKeys</code> to continue listing results.</p>
     */
    inline ListHostKeysRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The identifier of the server that contains the host keys that you want to
     * view.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>The identifier of the server that contains the host keys that you want to
     * view.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>The identifier of the server that contains the host keys that you want to
     * view.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>The identifier of the server that contains the host keys that you want to
     * view.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>The identifier of the server that contains the host keys that you want to
     * view.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>The identifier of the server that contains the host keys that you want to
     * view.</p>
     */
    inline ListHostKeysRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>The identifier of the server that contains the host keys that you want to
     * view.</p>
     */
    inline ListHostKeysRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the server that contains the host keys that you want to
     * view.</p>
     */
    inline ListHostKeysRequest& WithServerId(const char* value) { SetServerId(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
