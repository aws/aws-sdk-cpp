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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class AWS_SECURITYHUB_API ListMembersRequest : public SecurityHubRequest
  {
  public:
    ListMembersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMembers"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Specifies what member accounts the response includes based on their
     * relationship status with the master account. The default value is TRUE. If
     * onlyAssociated is set to TRUE, the response includes member accounts whose
     * relationship status with the master is set to ENABLED or DISABLED. If
     * onlyAssociated is set to FALSE, the response includes all existing member
     * accounts. </p>
     */
    inline bool GetOnlyAssociated() const{ return m_onlyAssociated; }

    /**
     * <p>Specifies what member accounts the response includes based on their
     * relationship status with the master account. The default value is TRUE. If
     * onlyAssociated is set to TRUE, the response includes member accounts whose
     * relationship status with the master is set to ENABLED or DISABLED. If
     * onlyAssociated is set to FALSE, the response includes all existing member
     * accounts. </p>
     */
    inline bool OnlyAssociatedHasBeenSet() const { return m_onlyAssociatedHasBeenSet; }

    /**
     * <p>Specifies what member accounts the response includes based on their
     * relationship status with the master account. The default value is TRUE. If
     * onlyAssociated is set to TRUE, the response includes member accounts whose
     * relationship status with the master is set to ENABLED or DISABLED. If
     * onlyAssociated is set to FALSE, the response includes all existing member
     * accounts. </p>
     */
    inline void SetOnlyAssociated(bool value) { m_onlyAssociatedHasBeenSet = true; m_onlyAssociated = value; }

    /**
     * <p>Specifies what member accounts the response includes based on their
     * relationship status with the master account. The default value is TRUE. If
     * onlyAssociated is set to TRUE, the response includes member accounts whose
     * relationship status with the master is set to ENABLED or DISABLED. If
     * onlyAssociated is set to FALSE, the response includes all existing member
     * accounts. </p>
     */
    inline ListMembersRequest& WithOnlyAssociated(bool value) { SetOnlyAssociated(value); return *this;}


    /**
     * <p>Indicates the maximum number of items that you want in the response. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Indicates the maximum number of items that you want in the response. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Indicates the maximum number of items that you want in the response. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Indicates the maximum number of items that you want in the response. </p>
     */
    inline ListMembersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Paginates results. Set the value of this parameter to NULL on your first call
     * to the ListMembers operation. For subsequent calls to the operation, fill
     * nextToken in the request with the value of NextToken from the previous response
     * to continue listing data. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Paginates results. Set the value of this parameter to NULL on your first call
     * to the ListMembers operation. For subsequent calls to the operation, fill
     * nextToken in the request with the value of NextToken from the previous response
     * to continue listing data. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Paginates results. Set the value of this parameter to NULL on your first call
     * to the ListMembers operation. For subsequent calls to the operation, fill
     * nextToken in the request with the value of NextToken from the previous response
     * to continue listing data. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Paginates results. Set the value of this parameter to NULL on your first call
     * to the ListMembers operation. For subsequent calls to the operation, fill
     * nextToken in the request with the value of NextToken from the previous response
     * to continue listing data. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Paginates results. Set the value of this parameter to NULL on your first call
     * to the ListMembers operation. For subsequent calls to the operation, fill
     * nextToken in the request with the value of NextToken from the previous response
     * to continue listing data. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Paginates results. Set the value of this parameter to NULL on your first call
     * to the ListMembers operation. For subsequent calls to the operation, fill
     * nextToken in the request with the value of NextToken from the previous response
     * to continue listing data. </p>
     */
    inline ListMembersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Paginates results. Set the value of this parameter to NULL on your first call
     * to the ListMembers operation. For subsequent calls to the operation, fill
     * nextToken in the request with the value of NextToken from the previous response
     * to continue listing data. </p>
     */
    inline ListMembersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Paginates results. Set the value of this parameter to NULL on your first call
     * to the ListMembers operation. For subsequent calls to the operation, fill
     * nextToken in the request with the value of NextToken from the previous response
     * to continue listing data. </p>
     */
    inline ListMembersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_onlyAssociated;
    bool m_onlyAssociatedHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
