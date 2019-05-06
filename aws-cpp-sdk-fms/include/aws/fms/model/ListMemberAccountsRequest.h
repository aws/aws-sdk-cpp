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
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FMS
{
namespace Model
{

  /**
   */
  class AWS_FMS_API ListMemberAccountsRequest : public FMSRequest
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
     * <p>If you specify a value for <code>MaxResults</code> and you have more account
     * IDs than the number that you specify for <code>MaxResults</code>, AWS Firewall
     * Manager returns a <code>NextToken</code> value in the response that allows you
     * to list another group of IDs. For the second and subsequent
     * <code>ListMemberAccountsRequest</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of member account IDs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more account
     * IDs than the number that you specify for <code>MaxResults</code>, AWS Firewall
     * Manager returns a <code>NextToken</code> value in the response that allows you
     * to list another group of IDs. For the second and subsequent
     * <code>ListMemberAccountsRequest</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of member account IDs.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more account
     * IDs than the number that you specify for <code>MaxResults</code>, AWS Firewall
     * Manager returns a <code>NextToken</code> value in the response that allows you
     * to list another group of IDs. For the second and subsequent
     * <code>ListMemberAccountsRequest</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of member account IDs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more account
     * IDs than the number that you specify for <code>MaxResults</code>, AWS Firewall
     * Manager returns a <code>NextToken</code> value in the response that allows you
     * to list another group of IDs. For the second and subsequent
     * <code>ListMemberAccountsRequest</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of member account IDs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more account
     * IDs than the number that you specify for <code>MaxResults</code>, AWS Firewall
     * Manager returns a <code>NextToken</code> value in the response that allows you
     * to list another group of IDs. For the second and subsequent
     * <code>ListMemberAccountsRequest</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of member account IDs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more account
     * IDs than the number that you specify for <code>MaxResults</code>, AWS Firewall
     * Manager returns a <code>NextToken</code> value in the response that allows you
     * to list another group of IDs. For the second and subsequent
     * <code>ListMemberAccountsRequest</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of member account IDs.</p>
     */
    inline ListMemberAccountsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more account
     * IDs than the number that you specify for <code>MaxResults</code>, AWS Firewall
     * Manager returns a <code>NextToken</code> value in the response that allows you
     * to list another group of IDs. For the second and subsequent
     * <code>ListMemberAccountsRequest</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of member account IDs.</p>
     */
    inline ListMemberAccountsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you specify a value for <code>MaxResults</code> and you have more account
     * IDs than the number that you specify for <code>MaxResults</code>, AWS Firewall
     * Manager returns a <code>NextToken</code> value in the response that allows you
     * to list another group of IDs. For the second and subsequent
     * <code>ListMemberAccountsRequest</code> requests, specify the value of
     * <code>NextToken</code> from the previous response to get information about
     * another batch of member account IDs.</p>
     */
    inline ListMemberAccountsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies the number of member account IDs that you want AWS Firewall Manager
     * to return for this request. If you have more IDs than the number that you
     * specify for <code>MaxResults</code>, the response includes a
     * <code>NextToken</code> value that you can use to get another batch of member
     * account IDs.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the number of member account IDs that you want AWS Firewall Manager
     * to return for this request. If you have more IDs than the number that you
     * specify for <code>MaxResults</code>, the response includes a
     * <code>NextToken</code> value that you can use to get another batch of member
     * account IDs.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the number of member account IDs that you want AWS Firewall Manager
     * to return for this request. If you have more IDs than the number that you
     * specify for <code>MaxResults</code>, the response includes a
     * <code>NextToken</code> value that you can use to get another batch of member
     * account IDs.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the number of member account IDs that you want AWS Firewall Manager
     * to return for this request. If you have more IDs than the number that you
     * specify for <code>MaxResults</code>, the response includes a
     * <code>NextToken</code> value that you can use to get another batch of member
     * account IDs.</p>
     */
    inline ListMemberAccountsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
