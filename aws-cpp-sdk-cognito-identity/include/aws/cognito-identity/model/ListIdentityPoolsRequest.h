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
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/cognito-identity/CognitoIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

  /**
   * Input to the ListIdentityPools action.
   */
  class AWS_COGNITOIDENTITY_API ListIdentityPoolsRequest : public CognitoIdentityRequest
  {
  public:
    ListIdentityPoolsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * The maximum number of identities to return.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * The maximum number of identities to return.
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * The maximum number of identities to return.
     */
    inline ListIdentityPoolsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

    /**
     * A pagination token.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A pagination token.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * A pagination token.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * A pagination token.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * A pagination token.
     */
    inline ListIdentityPoolsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A pagination token.
     */
    inline ListIdentityPoolsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * A pagination token.
     */
    inline ListIdentityPoolsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
