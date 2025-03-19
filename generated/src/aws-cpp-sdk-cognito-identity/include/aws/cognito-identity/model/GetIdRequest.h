/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/cognito-identity/CognitoIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

  /**
   * <p>Input to the GetId action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetIdInput">AWS
   * API Reference</a></p>
   */
  class GetIdRequest : public CognitoIdentityRequest
  {
  public:
    AWS_COGNITOIDENTITY_API GetIdRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetId"; }

    AWS_COGNITOIDENTITY_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A standard Amazon Web Services account ID (9+ digits).</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    GetIdRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const { return m_identityPoolId; }
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }
    template<typename IdentityPoolIdT = Aws::String>
    void SetIdentityPoolId(IdentityPoolIdT&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::forward<IdentityPoolIdT>(value); }
    template<typename IdentityPoolIdT = Aws::String>
    GetIdRequest& WithIdentityPoolId(IdentityPoolIdT&& value) { SetIdentityPoolId(std::forward<IdentityPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens. The available provider names for <code>Logins</code> are as follows:</p>
     * <ul> <li> <p>Facebook: <code>graph.facebook.com</code> </p> </li> <li> <p>Amazon
     * Cognito user pool:
     * <code>cognito-idp.&lt;region&gt;.amazonaws.com/&lt;YOUR_USER_POOL_ID&gt;</code>,
     * for example,
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code>. </p> </li>
     * <li> <p>Google: <code>accounts.google.com</code> </p> </li> <li> <p>Amazon:
     * <code>www.amazon.com</code> </p> </li> <li> <p>Twitter:
     * <code>api.twitter.com</code> </p> </li> <li> <p>Digits:
     * <code>www.digits.com</code> </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLogins() const { return m_logins; }
    inline bool LoginsHasBeenSet() const { return m_loginsHasBeenSet; }
    template<typename LoginsT = Aws::Map<Aws::String, Aws::String>>
    void SetLogins(LoginsT&& value) { m_loginsHasBeenSet = true; m_logins = std::forward<LoginsT>(value); }
    template<typename LoginsT = Aws::Map<Aws::String, Aws::String>>
    GetIdRequest& WithLogins(LoginsT&& value) { SetLogins(std::forward<LoginsT>(value)); return *this;}
    template<typename LoginsKeyT = Aws::String, typename LoginsValueT = Aws::String>
    GetIdRequest& AddLogins(LoginsKeyT&& key, LoginsValueT&& value) {
      m_loginsHasBeenSet = true; m_logins.emplace(std::forward<LoginsKeyT>(key), std::forward<LoginsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_logins;
    bool m_loginsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
