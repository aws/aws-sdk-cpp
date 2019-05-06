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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/AuthInfo.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API TestAuthorizationRequest : public IoTRequest
  {
  public:
    TestAuthorizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestAuthorization"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The principal.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The principal.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The principal.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The principal.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The principal.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>The principal.</p>
     */
    inline TestAuthorizationRequest& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The principal.</p>
     */
    inline TestAuthorizationRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>The principal.</p>
     */
    inline TestAuthorizationRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}


    /**
     * <p>The Cognito identity pool ID.</p>
     */
    inline const Aws::String& GetCognitoIdentityPoolId() const{ return m_cognitoIdentityPoolId; }

    /**
     * <p>The Cognito identity pool ID.</p>
     */
    inline bool CognitoIdentityPoolIdHasBeenSet() const { return m_cognitoIdentityPoolIdHasBeenSet; }

    /**
     * <p>The Cognito identity pool ID.</p>
     */
    inline void SetCognitoIdentityPoolId(const Aws::String& value) { m_cognitoIdentityPoolIdHasBeenSet = true; m_cognitoIdentityPoolId = value; }

    /**
     * <p>The Cognito identity pool ID.</p>
     */
    inline void SetCognitoIdentityPoolId(Aws::String&& value) { m_cognitoIdentityPoolIdHasBeenSet = true; m_cognitoIdentityPoolId = std::move(value); }

    /**
     * <p>The Cognito identity pool ID.</p>
     */
    inline void SetCognitoIdentityPoolId(const char* value) { m_cognitoIdentityPoolIdHasBeenSet = true; m_cognitoIdentityPoolId.assign(value); }

    /**
     * <p>The Cognito identity pool ID.</p>
     */
    inline TestAuthorizationRequest& WithCognitoIdentityPoolId(const Aws::String& value) { SetCognitoIdentityPoolId(value); return *this;}

    /**
     * <p>The Cognito identity pool ID.</p>
     */
    inline TestAuthorizationRequest& WithCognitoIdentityPoolId(Aws::String&& value) { SetCognitoIdentityPoolId(std::move(value)); return *this;}

    /**
     * <p>The Cognito identity pool ID.</p>
     */
    inline TestAuthorizationRequest& WithCognitoIdentityPoolId(const char* value) { SetCognitoIdentityPoolId(value); return *this;}


    /**
     * <p>A list of authorization info objects. Simulating authorization will create a
     * response for each <code>authInfo</code> object in the list.</p>
     */
    inline const Aws::Vector<AuthInfo>& GetAuthInfos() const{ return m_authInfos; }

    /**
     * <p>A list of authorization info objects. Simulating authorization will create a
     * response for each <code>authInfo</code> object in the list.</p>
     */
    inline bool AuthInfosHasBeenSet() const { return m_authInfosHasBeenSet; }

    /**
     * <p>A list of authorization info objects. Simulating authorization will create a
     * response for each <code>authInfo</code> object in the list.</p>
     */
    inline void SetAuthInfos(const Aws::Vector<AuthInfo>& value) { m_authInfosHasBeenSet = true; m_authInfos = value; }

    /**
     * <p>A list of authorization info objects. Simulating authorization will create a
     * response for each <code>authInfo</code> object in the list.</p>
     */
    inline void SetAuthInfos(Aws::Vector<AuthInfo>&& value) { m_authInfosHasBeenSet = true; m_authInfos = std::move(value); }

    /**
     * <p>A list of authorization info objects. Simulating authorization will create a
     * response for each <code>authInfo</code> object in the list.</p>
     */
    inline TestAuthorizationRequest& WithAuthInfos(const Aws::Vector<AuthInfo>& value) { SetAuthInfos(value); return *this;}

    /**
     * <p>A list of authorization info objects. Simulating authorization will create a
     * response for each <code>authInfo</code> object in the list.</p>
     */
    inline TestAuthorizationRequest& WithAuthInfos(Aws::Vector<AuthInfo>&& value) { SetAuthInfos(std::move(value)); return *this;}

    /**
     * <p>A list of authorization info objects. Simulating authorization will create a
     * response for each <code>authInfo</code> object in the list.</p>
     */
    inline TestAuthorizationRequest& AddAuthInfos(const AuthInfo& value) { m_authInfosHasBeenSet = true; m_authInfos.push_back(value); return *this; }

    /**
     * <p>A list of authorization info objects. Simulating authorization will create a
     * response for each <code>authInfo</code> object in the list.</p>
     */
    inline TestAuthorizationRequest& AddAuthInfos(AuthInfo&& value) { m_authInfosHasBeenSet = true; m_authInfos.push_back(std::move(value)); return *this; }


    /**
     * <p>The MQTT client ID.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The MQTT client ID.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The MQTT client ID.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The MQTT client ID.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The MQTT client ID.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The MQTT client ID.</p>
     */
    inline TestAuthorizationRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The MQTT client ID.</p>
     */
    inline TestAuthorizationRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The MQTT client ID.</p>
     */
    inline TestAuthorizationRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are attached to the principal being authorized.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNamesToAdd() const{ return m_policyNamesToAdd; }

    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are attached to the principal being authorized.</p>
     */
    inline bool PolicyNamesToAddHasBeenSet() const { return m_policyNamesToAddHasBeenSet; }

    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are attached to the principal being authorized.</p>
     */
    inline void SetPolicyNamesToAdd(const Aws::Vector<Aws::String>& value) { m_policyNamesToAddHasBeenSet = true; m_policyNamesToAdd = value; }

    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are attached to the principal being authorized.</p>
     */
    inline void SetPolicyNamesToAdd(Aws::Vector<Aws::String>&& value) { m_policyNamesToAddHasBeenSet = true; m_policyNamesToAdd = std::move(value); }

    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are attached to the principal being authorized.</p>
     */
    inline TestAuthorizationRequest& WithPolicyNamesToAdd(const Aws::Vector<Aws::String>& value) { SetPolicyNamesToAdd(value); return *this;}

    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are attached to the principal being authorized.</p>
     */
    inline TestAuthorizationRequest& WithPolicyNamesToAdd(Aws::Vector<Aws::String>&& value) { SetPolicyNamesToAdd(std::move(value)); return *this;}

    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are attached to the principal being authorized.</p>
     */
    inline TestAuthorizationRequest& AddPolicyNamesToAdd(const Aws::String& value) { m_policyNamesToAddHasBeenSet = true; m_policyNamesToAdd.push_back(value); return *this; }

    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are attached to the principal being authorized.</p>
     */
    inline TestAuthorizationRequest& AddPolicyNamesToAdd(Aws::String&& value) { m_policyNamesToAddHasBeenSet = true; m_policyNamesToAdd.push_back(std::move(value)); return *this; }

    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are attached to the principal being authorized.</p>
     */
    inline TestAuthorizationRequest& AddPolicyNamesToAdd(const char* value) { m_policyNamesToAddHasBeenSet = true; m_policyNamesToAdd.push_back(value); return *this; }


    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are not attached to the principal being authorized.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNamesToSkip() const{ return m_policyNamesToSkip; }

    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are not attached to the principal being authorized.</p>
     */
    inline bool PolicyNamesToSkipHasBeenSet() const { return m_policyNamesToSkipHasBeenSet; }

    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are not attached to the principal being authorized.</p>
     */
    inline void SetPolicyNamesToSkip(const Aws::Vector<Aws::String>& value) { m_policyNamesToSkipHasBeenSet = true; m_policyNamesToSkip = value; }

    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are not attached to the principal being authorized.</p>
     */
    inline void SetPolicyNamesToSkip(Aws::Vector<Aws::String>&& value) { m_policyNamesToSkipHasBeenSet = true; m_policyNamesToSkip = std::move(value); }

    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are not attached to the principal being authorized.</p>
     */
    inline TestAuthorizationRequest& WithPolicyNamesToSkip(const Aws::Vector<Aws::String>& value) { SetPolicyNamesToSkip(value); return *this;}

    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are not attached to the principal being authorized.</p>
     */
    inline TestAuthorizationRequest& WithPolicyNamesToSkip(Aws::Vector<Aws::String>&& value) { SetPolicyNamesToSkip(std::move(value)); return *this;}

    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are not attached to the principal being authorized.</p>
     */
    inline TestAuthorizationRequest& AddPolicyNamesToSkip(const Aws::String& value) { m_policyNamesToSkipHasBeenSet = true; m_policyNamesToSkip.push_back(value); return *this; }

    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are not attached to the principal being authorized.</p>
     */
    inline TestAuthorizationRequest& AddPolicyNamesToSkip(Aws::String&& value) { m_policyNamesToSkipHasBeenSet = true; m_policyNamesToSkip.push_back(std::move(value)); return *this; }

    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are not attached to the principal being authorized.</p>
     */
    inline TestAuthorizationRequest& AddPolicyNamesToSkip(const char* value) { m_policyNamesToSkipHasBeenSet = true; m_policyNamesToSkip.push_back(value); return *this; }

  private:

    Aws::String m_principal;
    bool m_principalHasBeenSet;

    Aws::String m_cognitoIdentityPoolId;
    bool m_cognitoIdentityPoolIdHasBeenSet;

    Aws::Vector<AuthInfo> m_authInfos;
    bool m_authInfosHasBeenSet;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    Aws::Vector<Aws::String> m_policyNamesToAdd;
    bool m_policyNamesToAddHasBeenSet;

    Aws::Vector<Aws::String> m_policyNamesToSkip;
    bool m_policyNamesToSkipHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
