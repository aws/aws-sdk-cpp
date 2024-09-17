/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class TestAuthorizationRequest : public IoTRequest
  {
  public:
    AWS_IOT_API TestAuthorizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestAuthorization"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The principal. Valid principals are CertificateArn
     * (arn:aws:iot:<i>region</i>:<i>accountId</i>:cert/<i>certificateId</i>),
     * thingGroupArn
     * (arn:aws:iot:<i>region</i>:<i>accountId</i>:thinggroup/<i>groupName</i>) and
     * CognitoId (<i>region</i>:<i>id</i>).</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }
    inline TestAuthorizationRequest& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}
    inline TestAuthorizationRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}
    inline TestAuthorizationRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Cognito identity pool ID.</p>
     */
    inline const Aws::String& GetCognitoIdentityPoolId() const{ return m_cognitoIdentityPoolId; }
    inline bool CognitoIdentityPoolIdHasBeenSet() const { return m_cognitoIdentityPoolIdHasBeenSet; }
    inline void SetCognitoIdentityPoolId(const Aws::String& value) { m_cognitoIdentityPoolIdHasBeenSet = true; m_cognitoIdentityPoolId = value; }
    inline void SetCognitoIdentityPoolId(Aws::String&& value) { m_cognitoIdentityPoolIdHasBeenSet = true; m_cognitoIdentityPoolId = std::move(value); }
    inline void SetCognitoIdentityPoolId(const char* value) { m_cognitoIdentityPoolIdHasBeenSet = true; m_cognitoIdentityPoolId.assign(value); }
    inline TestAuthorizationRequest& WithCognitoIdentityPoolId(const Aws::String& value) { SetCognitoIdentityPoolId(value); return *this;}
    inline TestAuthorizationRequest& WithCognitoIdentityPoolId(Aws::String&& value) { SetCognitoIdentityPoolId(std::move(value)); return *this;}
    inline TestAuthorizationRequest& WithCognitoIdentityPoolId(const char* value) { SetCognitoIdentityPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of authorization info objects. Simulating authorization will create a
     * response for each <code>authInfo</code> object in the list.</p>
     */
    inline const Aws::Vector<AuthInfo>& GetAuthInfos() const{ return m_authInfos; }
    inline bool AuthInfosHasBeenSet() const { return m_authInfosHasBeenSet; }
    inline void SetAuthInfos(const Aws::Vector<AuthInfo>& value) { m_authInfosHasBeenSet = true; m_authInfos = value; }
    inline void SetAuthInfos(Aws::Vector<AuthInfo>&& value) { m_authInfosHasBeenSet = true; m_authInfos = std::move(value); }
    inline TestAuthorizationRequest& WithAuthInfos(const Aws::Vector<AuthInfo>& value) { SetAuthInfos(value); return *this;}
    inline TestAuthorizationRequest& WithAuthInfos(Aws::Vector<AuthInfo>&& value) { SetAuthInfos(std::move(value)); return *this;}
    inline TestAuthorizationRequest& AddAuthInfos(const AuthInfo& value) { m_authInfosHasBeenSet = true; m_authInfos.push_back(value); return *this; }
    inline TestAuthorizationRequest& AddAuthInfos(AuthInfo&& value) { m_authInfosHasBeenSet = true; m_authInfos.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The MQTT client ID.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline TestAuthorizationRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline TestAuthorizationRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline TestAuthorizationRequest& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are attached to the principal being authorized.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNamesToAdd() const{ return m_policyNamesToAdd; }
    inline bool PolicyNamesToAddHasBeenSet() const { return m_policyNamesToAddHasBeenSet; }
    inline void SetPolicyNamesToAdd(const Aws::Vector<Aws::String>& value) { m_policyNamesToAddHasBeenSet = true; m_policyNamesToAdd = value; }
    inline void SetPolicyNamesToAdd(Aws::Vector<Aws::String>&& value) { m_policyNamesToAddHasBeenSet = true; m_policyNamesToAdd = std::move(value); }
    inline TestAuthorizationRequest& WithPolicyNamesToAdd(const Aws::Vector<Aws::String>& value) { SetPolicyNamesToAdd(value); return *this;}
    inline TestAuthorizationRequest& WithPolicyNamesToAdd(Aws::Vector<Aws::String>&& value) { SetPolicyNamesToAdd(std::move(value)); return *this;}
    inline TestAuthorizationRequest& AddPolicyNamesToAdd(const Aws::String& value) { m_policyNamesToAddHasBeenSet = true; m_policyNamesToAdd.push_back(value); return *this; }
    inline TestAuthorizationRequest& AddPolicyNamesToAdd(Aws::String&& value) { m_policyNamesToAddHasBeenSet = true; m_policyNamesToAdd.push_back(std::move(value)); return *this; }
    inline TestAuthorizationRequest& AddPolicyNamesToAdd(const char* value) { m_policyNamesToAddHasBeenSet = true; m_policyNamesToAdd.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are not attached to the principal being authorized.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNamesToSkip() const{ return m_policyNamesToSkip; }
    inline bool PolicyNamesToSkipHasBeenSet() const { return m_policyNamesToSkipHasBeenSet; }
    inline void SetPolicyNamesToSkip(const Aws::Vector<Aws::String>& value) { m_policyNamesToSkipHasBeenSet = true; m_policyNamesToSkip = value; }
    inline void SetPolicyNamesToSkip(Aws::Vector<Aws::String>&& value) { m_policyNamesToSkipHasBeenSet = true; m_policyNamesToSkip = std::move(value); }
    inline TestAuthorizationRequest& WithPolicyNamesToSkip(const Aws::Vector<Aws::String>& value) { SetPolicyNamesToSkip(value); return *this;}
    inline TestAuthorizationRequest& WithPolicyNamesToSkip(Aws::Vector<Aws::String>&& value) { SetPolicyNamesToSkip(std::move(value)); return *this;}
    inline TestAuthorizationRequest& AddPolicyNamesToSkip(const Aws::String& value) { m_policyNamesToSkipHasBeenSet = true; m_policyNamesToSkip.push_back(value); return *this; }
    inline TestAuthorizationRequest& AddPolicyNamesToSkip(Aws::String&& value) { m_policyNamesToSkipHasBeenSet = true; m_policyNamesToSkip.push_back(std::move(value)); return *this; }
    inline TestAuthorizationRequest& AddPolicyNamesToSkip(const char* value) { m_policyNamesToSkipHasBeenSet = true; m_policyNamesToSkip.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    Aws::String m_cognitoIdentityPoolId;
    bool m_cognitoIdentityPoolIdHasBeenSet = false;

    Aws::Vector<AuthInfo> m_authInfos;
    bool m_authInfosHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_policyNamesToAdd;
    bool m_policyNamesToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_policyNamesToSkip;
    bool m_policyNamesToSkipHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
