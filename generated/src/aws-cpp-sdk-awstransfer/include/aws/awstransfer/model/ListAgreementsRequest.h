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
  class ListAgreementsRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API ListAgreementsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAgreements"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maximum number of agreements to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of agreements to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of agreements to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of agreements to return.</p>
     */
    inline ListAgreementsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>When you can get additional results from the <code>ListAgreements</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional agreements.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When you can get additional results from the <code>ListAgreements</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional agreements.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When you can get additional results from the <code>ListAgreements</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional agreements.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When you can get additional results from the <code>ListAgreements</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional agreements.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When you can get additional results from the <code>ListAgreements</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional agreements.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When you can get additional results from the <code>ListAgreements</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional agreements.</p>
     */
    inline ListAgreementsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When you can get additional results from the <code>ListAgreements</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional agreements.</p>
     */
    inline ListAgreementsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When you can get additional results from the <code>ListAgreements</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional agreements.</p>
     */
    inline ListAgreementsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The identifier of the server for which you want a list of agreements.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>The identifier of the server for which you want a list of agreements.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>The identifier of the server for which you want a list of agreements.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>The identifier of the server for which you want a list of agreements.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>The identifier of the server for which you want a list of agreements.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>The identifier of the server for which you want a list of agreements.</p>
     */
    inline ListAgreementsRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>The identifier of the server for which you want a list of agreements.</p>
     */
    inline ListAgreementsRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the server for which you want a list of agreements.</p>
     */
    inline ListAgreementsRequest& WithServerId(const char* value) { SetServerId(value); return *this;}

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
