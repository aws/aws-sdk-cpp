/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CognitoIdentityProvider {
namespace Model {

/**
 * <p>A summary of a Client ID Metadata Document (CIMD) policy, returned by
 * .</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CIMDPolicySummaryType">AWS
 * API Reference</a></p>
 */
class CIMDPolicySummaryType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API CIMDPolicySummaryType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API CIMDPolicySummaryType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API CIMDPolicySummaryType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the CIMD policy.</p>
   */
  inline const Aws::String& GetCIMDPolicyId() const { return m_cIMDPolicyId; }
  inline bool CIMDPolicyIdHasBeenSet() const { return m_cIMDPolicyIdHasBeenSet; }
  template <typename CIMDPolicyIdT = Aws::String>
  void SetCIMDPolicyId(CIMDPolicyIdT&& value) {
    m_cIMDPolicyIdHasBeenSet = true;
    m_cIMDPolicyId = std::forward<CIMDPolicyIdT>(value);
  }
  template <typename CIMDPolicyIdT = Aws::String>
  CIMDPolicySummaryType& WithCIMDPolicyId(CIMDPolicyIdT&& value) {
    SetCIMDPolicyId(std::forward<CIMDPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the app client that the CIMD policy is associated with. Amazon
   * Cognito omits this value when the app client no longer exists.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  CIMDPolicySummaryType& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The friendly name of the CIMD policy.</p>
   */
  inline const Aws::String& GetPolicyName() const { return m_policyName; }
  inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
  template <typename PolicyNameT = Aws::String>
  void SetPolicyName(PolicyNameT&& value) {
    m_policyNameHasBeenSet = true;
    m_policyName = std::forward<PolicyNameT>(value);
  }
  template <typename PolicyNameT = Aws::String>
  CIMDPolicySummaryType& WithPolicyName(PolicyNameT&& value) {
    SetPolicyName(std::forward<PolicyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The length of time, in seconds, that Amazon Cognito caches a client metadata
   * document that it retrieved from a URL that matches the policy.</p>
   */
  inline int GetCacheDuration() const { return m_cacheDuration; }
  inline bool CacheDurationHasBeenSet() const { return m_cacheDurationHasBeenSet; }
  inline void SetCacheDuration(int value) {
    m_cacheDurationHasBeenSet = true;
    m_cacheDuration = value;
  }
  inline CIMDPolicySummaryType& WithCacheDuration(int value) {
    SetCacheDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the CIMD policy was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
  inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
  template <typename CreationDateT = Aws::Utils::DateTime>
  void SetCreationDate(CreationDateT&& value) {
    m_creationDateHasBeenSet = true;
    m_creationDate = std::forward<CreationDateT>(value);
  }
  template <typename CreationDateT = Aws::Utils::DateTime>
  CIMDPolicySummaryType& WithCreationDate(CreationDateT&& value) {
    SetCreationDate(std::forward<CreationDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the CIMD policy was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
  inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  void SetLastModifiedDate(LastModifiedDateT&& value) {
    m_lastModifiedDateHasBeenSet = true;
    m_lastModifiedDate = std::forward<LastModifiedDateT>(value);
  }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  CIMDPolicySummaryType& WithLastModifiedDate(LastModifiedDateT&& value) {
    SetLastModifiedDate(std::forward<LastModifiedDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_cIMDPolicyId;

  Aws::String m_clientId;

  Aws::String m_policyName;

  int m_cacheDuration{0};

  Aws::Utils::DateTime m_creationDate{};

  Aws::Utils::DateTime m_lastModifiedDate{};
  bool m_cIMDPolicyIdHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_policyNameHasBeenSet = false;
  bool m_cacheDurationHasBeenSet = false;
  bool m_creationDateHasBeenSet = false;
  bool m_lastModifiedDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
