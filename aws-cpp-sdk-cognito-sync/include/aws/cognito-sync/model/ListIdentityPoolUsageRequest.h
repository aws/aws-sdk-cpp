/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/CognitoSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CognitoSync
{
namespace Model
{

  /**
   * A request for usage information on an identity pool.
   */
  class AWS_COGNITOSYNC_API ListIdentityPoolUsageRequest : public CognitoSyncRequest
  {
  public:
    ListIdentityPoolUsageRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline ListIdentityPoolUsageRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline ListIdentityPoolUsageRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * A pagination token for obtaining the next page of results.
     */
    inline ListIdentityPoolUsageRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * The maximum number of results to be returned.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * The maximum number of results to be returned.
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * The maximum number of results to be returned.
     */
    inline ListIdentityPoolUsageRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
