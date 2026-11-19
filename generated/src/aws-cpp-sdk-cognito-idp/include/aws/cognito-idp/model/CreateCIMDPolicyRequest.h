/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

/**
 */
class CreateCIMDPolicyRequest : public CognitoIdentityProviderRequest {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API CreateCIMDPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateCIMDPolicy"; }

  AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

  AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the user pool where you want to create the CIMD policy.</p>
   */
  inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
  inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
  template <typename UserPoolIdT = Aws::String>
  void SetUserPoolId(UserPoolIdT&& value) {
    m_userPoolIdHasBeenSet = true;
    m_userPoolId = std::forward<UserPoolIdT>(value);
  }
  template <typename UserPoolIdT = Aws::String>
  CreateCIMDPolicyRequest& WithUserPoolId(UserPoolIdT&& value) {
    SetUserPoolId(std::forward<UserPoolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the app client that you want to associate with the CIMD policy.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  CreateCIMDPolicyRequest& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A friendly name for the CIMD policy.</p>
   */
  inline const Aws::String& GetPolicyName() const { return m_policyName; }
  inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
  template <typename PolicyNameT = Aws::String>
  void SetPolicyName(PolicyNameT&& value) {
    m_policyNameHasBeenSet = true;
    m_policyName = std::forward<PolicyNameT>(value);
  }
  template <typename PolicyNameT = Aws::String>
  CreateCIMDPolicyRequest& WithPolicyName(PolicyNameT&& value) {
    SetPolicyName(std::forward<PolicyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The length of time, in seconds, that Amazon Cognito caches a client metadata
   * document that it retrieved from a URL that matches the policy. The value must be
   * between 86,400 seconds (one day) and 31,556,952 seconds (one year).</p>
   */
  inline int GetCacheDuration() const { return m_cacheDuration; }
  inline bool CacheDurationHasBeenSet() const { return m_cacheDurationHasBeenSet; }
  inline void SetCacheDuration(int value) {
    m_cacheDurationHasBeenSet = true;
    m_cacheDuration = value;
  }
  inline CreateCIMDPolicyRequest& WithCacheDuration(int value) {
    SetCacheDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One to five HTTPS URL patterns. Amazon Cognito accepts a client ID metadata
   * document URL only when it matches one of these patterns. Patterns can contain
   * the <code>*</code> wildcard character.</p>
   */
  inline const Aws::Vector<Aws::String>& GetURLPatterns() const { return m_uRLPatterns; }
  inline bool URLPatternsHasBeenSet() const { return m_uRLPatternsHasBeenSet; }
  template <typename URLPatternsT = Aws::Vector<Aws::String>>
  void SetURLPatterns(URLPatternsT&& value) {
    m_uRLPatternsHasBeenSet = true;
    m_uRLPatterns = std::forward<URLPatternsT>(value);
  }
  template <typename URLPatternsT = Aws::Vector<Aws::String>>
  CreateCIMDPolicyRequest& WithURLPatterns(URLPatternsT&& value) {
    SetURLPatterns(std::forward<URLPatternsT>(value));
    return *this;
  }
  template <typename URLPatternsT = Aws::String>
  CreateCIMDPolicyRequest& AddURLPatterns(URLPatternsT&& value) {
    m_uRLPatternsHasBeenSet = true;
    m_uRLPatterns.emplace_back(std::forward<URLPatternsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userPoolId;

  Aws::String m_clientId;

  Aws::String m_policyName;

  int m_cacheDuration{0};

  Aws::Vector<Aws::String> m_uRLPatterns;
  bool m_userPoolIdHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_policyNameHasBeenSet = false;
  bool m_cacheDurationHasBeenSet = false;
  bool m_uRLPatternsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
