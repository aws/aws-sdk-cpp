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
    AWS_IOT_API TestAuthorizationRequest() = default;

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
    inline const Aws::String& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = Aws::String>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = Aws::String>
    TestAuthorizationRequest& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Cognito identity pool ID.</p>
     */
    inline const Aws::String& GetCognitoIdentityPoolId() const { return m_cognitoIdentityPoolId; }
    inline bool CognitoIdentityPoolIdHasBeenSet() const { return m_cognitoIdentityPoolIdHasBeenSet; }
    template<typename CognitoIdentityPoolIdT = Aws::String>
    void SetCognitoIdentityPoolId(CognitoIdentityPoolIdT&& value) { m_cognitoIdentityPoolIdHasBeenSet = true; m_cognitoIdentityPoolId = std::forward<CognitoIdentityPoolIdT>(value); }
    template<typename CognitoIdentityPoolIdT = Aws::String>
    TestAuthorizationRequest& WithCognitoIdentityPoolId(CognitoIdentityPoolIdT&& value) { SetCognitoIdentityPoolId(std::forward<CognitoIdentityPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of authorization info objects. Simulating authorization will create a
     * response for each <code>authInfo</code> object in the list.</p>
     */
    inline const Aws::Vector<AuthInfo>& GetAuthInfos() const { return m_authInfos; }
    inline bool AuthInfosHasBeenSet() const { return m_authInfosHasBeenSet; }
    template<typename AuthInfosT = Aws::Vector<AuthInfo>>
    void SetAuthInfos(AuthInfosT&& value) { m_authInfosHasBeenSet = true; m_authInfos = std::forward<AuthInfosT>(value); }
    template<typename AuthInfosT = Aws::Vector<AuthInfo>>
    TestAuthorizationRequest& WithAuthInfos(AuthInfosT&& value) { SetAuthInfos(std::forward<AuthInfosT>(value)); return *this;}
    template<typename AuthInfosT = AuthInfo>
    TestAuthorizationRequest& AddAuthInfos(AuthInfosT&& value) { m_authInfosHasBeenSet = true; m_authInfos.emplace_back(std::forward<AuthInfosT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The MQTT client ID.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    TestAuthorizationRequest& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are attached to the principal being authorized.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNamesToAdd() const { return m_policyNamesToAdd; }
    inline bool PolicyNamesToAddHasBeenSet() const { return m_policyNamesToAddHasBeenSet; }
    template<typename PolicyNamesToAddT = Aws::Vector<Aws::String>>
    void SetPolicyNamesToAdd(PolicyNamesToAddT&& value) { m_policyNamesToAddHasBeenSet = true; m_policyNamesToAdd = std::forward<PolicyNamesToAddT>(value); }
    template<typename PolicyNamesToAddT = Aws::Vector<Aws::String>>
    TestAuthorizationRequest& WithPolicyNamesToAdd(PolicyNamesToAddT&& value) { SetPolicyNamesToAdd(std::forward<PolicyNamesToAddT>(value)); return *this;}
    template<typename PolicyNamesToAddT = Aws::String>
    TestAuthorizationRequest& AddPolicyNamesToAdd(PolicyNamesToAddT&& value) { m_policyNamesToAddHasBeenSet = true; m_policyNamesToAdd.emplace_back(std::forward<PolicyNamesToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When testing custom authorization, the policies specified here are treated as
     * if they are not attached to the principal being authorized.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNamesToSkip() const { return m_policyNamesToSkip; }
    inline bool PolicyNamesToSkipHasBeenSet() const { return m_policyNamesToSkipHasBeenSet; }
    template<typename PolicyNamesToSkipT = Aws::Vector<Aws::String>>
    void SetPolicyNamesToSkip(PolicyNamesToSkipT&& value) { m_policyNamesToSkipHasBeenSet = true; m_policyNamesToSkip = std::forward<PolicyNamesToSkipT>(value); }
    template<typename PolicyNamesToSkipT = Aws::Vector<Aws::String>>
    TestAuthorizationRequest& WithPolicyNamesToSkip(PolicyNamesToSkipT&& value) { SetPolicyNamesToSkip(std::forward<PolicyNamesToSkipT>(value)); return *this;}
    template<typename PolicyNamesToSkipT = Aws::String>
    TestAuthorizationRequest& AddPolicyNamesToSkip(PolicyNamesToSkipT&& value) { m_policyNamesToSkipHasBeenSet = true; m_policyNamesToSkip.emplace_back(std::forward<PolicyNamesToSkipT>(value)); return *this; }
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
