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
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/cognito-identity/CognitoIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

  /**
   * <p>Input to the <code>LookupDeveloperIdentityInput</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/LookupDeveloperIdentityInput">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITY_API LookupDeveloperIdentityRequest : public CognitoIdentityRequest
  {
  public:
    LookupDeveloperIdentityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "LookupDeveloperIdentity"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::move(value); }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline LookupDeveloperIdentityRequest& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline LookupDeveloperIdentityRequest& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline LookupDeveloperIdentityRequest& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}


    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline bool IdentityIdHasBeenSet() const { return m_identityIdHasBeenSet; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityIdHasBeenSet = true; m_identityId = std::move(value); }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline LookupDeveloperIdentityRequest& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline LookupDeveloperIdentityRequest& WithIdentityId(Aws::String&& value) { SetIdentityId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline LookupDeveloperIdentityRequest& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}


    /**
     * <p>A unique ID used by your backend authentication process to identify a user.
     * Typically, a developer identity provider would issue many developer user
     * identifiers, in keeping with the number of users.</p>
     */
    inline const Aws::String& GetDeveloperUserIdentifier() const{ return m_developerUserIdentifier; }

    /**
     * <p>A unique ID used by your backend authentication process to identify a user.
     * Typically, a developer identity provider would issue many developer user
     * identifiers, in keeping with the number of users.</p>
     */
    inline bool DeveloperUserIdentifierHasBeenSet() const { return m_developerUserIdentifierHasBeenSet; }

    /**
     * <p>A unique ID used by your backend authentication process to identify a user.
     * Typically, a developer identity provider would issue many developer user
     * identifiers, in keeping with the number of users.</p>
     */
    inline void SetDeveloperUserIdentifier(const Aws::String& value) { m_developerUserIdentifierHasBeenSet = true; m_developerUserIdentifier = value; }

    /**
     * <p>A unique ID used by your backend authentication process to identify a user.
     * Typically, a developer identity provider would issue many developer user
     * identifiers, in keeping with the number of users.</p>
     */
    inline void SetDeveloperUserIdentifier(Aws::String&& value) { m_developerUserIdentifierHasBeenSet = true; m_developerUserIdentifier = std::move(value); }

    /**
     * <p>A unique ID used by your backend authentication process to identify a user.
     * Typically, a developer identity provider would issue many developer user
     * identifiers, in keeping with the number of users.</p>
     */
    inline void SetDeveloperUserIdentifier(const char* value) { m_developerUserIdentifierHasBeenSet = true; m_developerUserIdentifier.assign(value); }

    /**
     * <p>A unique ID used by your backend authentication process to identify a user.
     * Typically, a developer identity provider would issue many developer user
     * identifiers, in keeping with the number of users.</p>
     */
    inline LookupDeveloperIdentityRequest& WithDeveloperUserIdentifier(const Aws::String& value) { SetDeveloperUserIdentifier(value); return *this;}

    /**
     * <p>A unique ID used by your backend authentication process to identify a user.
     * Typically, a developer identity provider would issue many developer user
     * identifiers, in keeping with the number of users.</p>
     */
    inline LookupDeveloperIdentityRequest& WithDeveloperUserIdentifier(Aws::String&& value) { SetDeveloperUserIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique ID used by your backend authentication process to identify a user.
     * Typically, a developer identity provider would issue many developer user
     * identifiers, in keeping with the number of users.</p>
     */
    inline LookupDeveloperIdentityRequest& WithDeveloperUserIdentifier(const char* value) { SetDeveloperUserIdentifier(value); return *this;}


    /**
     * <p>The maximum number of identities to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of identities to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of identities to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of identities to return.</p>
     */
    inline LookupDeveloperIdentityRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A pagination token. The first call you make will have <code>NextToken</code>
     * set to null. After that the service will return <code>NextToken</code> values as
     * needed. For example, let's say you make a request with <code>MaxResults</code>
     * set to 10, and there are 20 matches in the database. The service will return a
     * pagination token as a part of the response. This token can be used to call the
     * API again and get results starting from the 11th match.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token. The first call you make will have <code>NextToken</code>
     * set to null. After that the service will return <code>NextToken</code> values as
     * needed. For example, let's say you make a request with <code>MaxResults</code>
     * set to 10, and there are 20 matches in the database. The service will return a
     * pagination token as a part of the response. This token can be used to call the
     * API again and get results starting from the 11th match.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A pagination token. The first call you make will have <code>NextToken</code>
     * set to null. After that the service will return <code>NextToken</code> values as
     * needed. For example, let's say you make a request with <code>MaxResults</code>
     * set to 10, and there are 20 matches in the database. The service will return a
     * pagination token as a part of the response. This token can be used to call the
     * API again and get results starting from the 11th match.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token. The first call you make will have <code>NextToken</code>
     * set to null. After that the service will return <code>NextToken</code> values as
     * needed. For example, let's say you make a request with <code>MaxResults</code>
     * set to 10, and there are 20 matches in the database. The service will return a
     * pagination token as a part of the response. This token can be used to call the
     * API again and get results starting from the 11th match.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token. The first call you make will have <code>NextToken</code>
     * set to null. After that the service will return <code>NextToken</code> values as
     * needed. For example, let's say you make a request with <code>MaxResults</code>
     * set to 10, and there are 20 matches in the database. The service will return a
     * pagination token as a part of the response. This token can be used to call the
     * API again and get results starting from the 11th match.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token. The first call you make will have <code>NextToken</code>
     * set to null. After that the service will return <code>NextToken</code> values as
     * needed. For example, let's say you make a request with <code>MaxResults</code>
     * set to 10, and there are 20 matches in the database. The service will return a
     * pagination token as a part of the response. This token can be used to call the
     * API again and get results starting from the 11th match.</p>
     */
    inline LookupDeveloperIdentityRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token. The first call you make will have <code>NextToken</code>
     * set to null. After that the service will return <code>NextToken</code> values as
     * needed. For example, let's say you make a request with <code>MaxResults</code>
     * set to 10, and there are 20 matches in the database. The service will return a
     * pagination token as a part of the response. This token can be used to call the
     * API again and get results starting from the 11th match.</p>
     */
    inline LookupDeveloperIdentityRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token. The first call you make will have <code>NextToken</code>
     * set to null. After that the service will return <code>NextToken</code> values as
     * needed. For example, let's say you make a request with <code>MaxResults</code>
     * set to 10, and there are 20 matches in the database. The service will return a
     * pagination token as a part of the response. This token can be used to call the
     * API again and get results starting from the 11th match.</p>
     */
    inline LookupDeveloperIdentityRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet;

    Aws::String m_identityId;
    bool m_identityIdHasBeenSet;

    Aws::String m_developerUserIdentifier;
    bool m_developerUserIdentifierHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
