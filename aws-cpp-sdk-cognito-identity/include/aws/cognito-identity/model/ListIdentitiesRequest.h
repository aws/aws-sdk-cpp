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
   * Input to the ListIdentities action.
   */
  class AWS_COGNITOIDENTITY_API ListIdentitiesRequest : public CognitoIdentityRequest
  {
  public:
    ListIdentitiesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline ListIdentitiesRequest& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline ListIdentitiesRequest& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(value); return *this;}

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline ListIdentitiesRequest& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}

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
    inline ListIdentitiesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

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
    inline ListIdentitiesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A pagination token.
     */
    inline ListIdentitiesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * A pagination token.
     */
    inline ListIdentitiesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional boolean parameter that allows you to hide disabled identities. If
     * omitted, the ListIdentities API will include disabled identities in the
     * response.</p>
     */
    inline bool GetHideDisabled() const{ return m_hideDisabled; }

    /**
     * <p>An optional boolean parameter that allows you to hide disabled identities. If
     * omitted, the ListIdentities API will include disabled identities in the
     * response.</p>
     */
    inline void SetHideDisabled(bool value) { m_hideDisabledHasBeenSet = true; m_hideDisabled = value; }

    /**
     * <p>An optional boolean parameter that allows you to hide disabled identities. If
     * omitted, the ListIdentities API will include disabled identities in the
     * response.</p>
     */
    inline ListIdentitiesRequest& WithHideDisabled(bool value) { SetHideDisabled(value); return *this;}

  private:
    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    bool m_hideDisabled;
    bool m_hideDisabledHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
