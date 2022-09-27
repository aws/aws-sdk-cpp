﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie/Macie_EXPORTS.h>
#include <aws/macie/MacieRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Macie
{
namespace Model
{

  /**
   */
  class AWS_MACIE_API ListMemberAccountsRequest : public MacieRequest
  {
  public:
    ListMemberAccountsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMemberAccounts"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>(Discontinued) Use this parameter when paginating results. Set the value of
     * this parameter to null on your first call to the <code>ListMemberAccounts</code>
     * action. Subsequent calls to the action fill <code>nextToken</code> in the
     * request with the value of <code>nextToken</code> from the previous response to
     * continue listing data.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>(Discontinued) Use this parameter when paginating results. Set the value of
     * this parameter to null on your first call to the <code>ListMemberAccounts</code>
     * action. Subsequent calls to the action fill <code>nextToken</code> in the
     * request with the value of <code>nextToken</code> from the previous response to
     * continue listing data.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>(Discontinued) Use this parameter when paginating results. Set the value of
     * this parameter to null on your first call to the <code>ListMemberAccounts</code>
     * action. Subsequent calls to the action fill <code>nextToken</code> in the
     * request with the value of <code>nextToken</code> from the previous response to
     * continue listing data.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>(Discontinued) Use this parameter when paginating results. Set the value of
     * this parameter to null on your first call to the <code>ListMemberAccounts</code>
     * action. Subsequent calls to the action fill <code>nextToken</code> in the
     * request with the value of <code>nextToken</code> from the previous response to
     * continue listing data.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>(Discontinued) Use this parameter when paginating results. Set the value of
     * this parameter to null on your first call to the <code>ListMemberAccounts</code>
     * action. Subsequent calls to the action fill <code>nextToken</code> in the
     * request with the value of <code>nextToken</code> from the previous response to
     * continue listing data.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>(Discontinued) Use this parameter when paginating results. Set the value of
     * this parameter to null on your first call to the <code>ListMemberAccounts</code>
     * action. Subsequent calls to the action fill <code>nextToken</code> in the
     * request with the value of <code>nextToken</code> from the previous response to
     * continue listing data.</p>
     */
    inline ListMemberAccountsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>(Discontinued) Use this parameter when paginating results. Set the value of
     * this parameter to null on your first call to the <code>ListMemberAccounts</code>
     * action. Subsequent calls to the action fill <code>nextToken</code> in the
     * request with the value of <code>nextToken</code> from the previous response to
     * continue listing data.</p>
     */
    inline ListMemberAccountsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>(Discontinued) Use this parameter when paginating results. Set the value of
     * this parameter to null on your first call to the <code>ListMemberAccounts</code>
     * action. Subsequent calls to the action fill <code>nextToken</code> in the
     * request with the value of <code>nextToken</code> from the previous response to
     * continue listing data.</p>
     */
    inline ListMemberAccountsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>(Discontinued) Use this parameter to indicate the maximum number of items
     * that you want in the response. The default value is 250.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>(Discontinued) Use this parameter to indicate the maximum number of items
     * that you want in the response. The default value is 250.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>(Discontinued) Use this parameter to indicate the maximum number of items
     * that you want in the response. The default value is 250.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>(Discontinued) Use this parameter to indicate the maximum number of items
     * that you want in the response. The default value is 250.</p>
     */
    inline ListMemberAccountsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
