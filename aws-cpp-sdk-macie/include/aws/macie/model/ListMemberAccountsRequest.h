﻿/*
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
     * <p>Use this parameter when paginating results. Set the value of this parameter
     * to null on your first call to the ListMemberAccounts action. Subsequent calls to
     * the action fill nextToken in the request with the value of nextToken from the
     * previous response to continue listing data. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Use this parameter when paginating results. Set the value of this parameter
     * to null on your first call to the ListMemberAccounts action. Subsequent calls to
     * the action fill nextToken in the request with the value of nextToken from the
     * previous response to continue listing data. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Use this parameter when paginating results. Set the value of this parameter
     * to null on your first call to the ListMemberAccounts action. Subsequent calls to
     * the action fill nextToken in the request with the value of nextToken from the
     * previous response to continue listing data. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Use this parameter when paginating results. Set the value of this parameter
     * to null on your first call to the ListMemberAccounts action. Subsequent calls to
     * the action fill nextToken in the request with the value of nextToken from the
     * previous response to continue listing data. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Use this parameter when paginating results. Set the value of this parameter
     * to null on your first call to the ListMemberAccounts action. Subsequent calls to
     * the action fill nextToken in the request with the value of nextToken from the
     * previous response to continue listing data. </p>
     */
    inline ListMemberAccountsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Use this parameter when paginating results. Set the value of this parameter
     * to null on your first call to the ListMemberAccounts action. Subsequent calls to
     * the action fill nextToken in the request with the value of nextToken from the
     * previous response to continue listing data. </p>
     */
    inline ListMemberAccountsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Use this parameter when paginating results. Set the value of this parameter
     * to null on your first call to the ListMemberAccounts action. Subsequent calls to
     * the action fill nextToken in the request with the value of nextToken from the
     * previous response to continue listing data. </p>
     */
    inline ListMemberAccountsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Use this parameter to indicate the maximum number of items that you want in
     * the response. The default value is 250. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Use this parameter to indicate the maximum number of items that you want in
     * the response. The default value is 250. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Use this parameter to indicate the maximum number of items that you want in
     * the response. The default value is 250. </p>
     */
    inline ListMemberAccountsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
