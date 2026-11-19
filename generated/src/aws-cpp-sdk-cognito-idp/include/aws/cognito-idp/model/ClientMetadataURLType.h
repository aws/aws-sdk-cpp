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
 * <p>A client metadata document URL that Amazon Cognito has received for a Client
 * ID Metadata Document (CIMD) policy, with its cache state.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ClientMetadataURLType">AWS
 * API Reference</a></p>
 */
class ClientMetadataURLType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API ClientMetadataURLType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API ClientMetadataURLType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API ClientMetadataURLType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The client metadata document URL.</p>
   */
  inline const Aws::String& GetURL() const { return m_uRL; }
  inline bool URLHasBeenSet() const { return m_uRLHasBeenSet; }
  template <typename URLT = Aws::String>
  void SetURL(URLT&& value) {
    m_uRLHasBeenSet = true;
    m_uRL = std::forward<URLT>(value);
  }
  template <typename URLT = Aws::String>
  ClientMetadataURLType& WithURL(URLT&& value) {
    SetURL(std::forward<URLT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when Amazon Cognito cached the client metadata document
   * from this URL.</p>
   */
  inline const Aws::Utils::DateTime& GetCachedDate() const { return m_cachedDate; }
  inline bool CachedDateHasBeenSet() const { return m_cachedDateHasBeenSet; }
  template <typename CachedDateT = Aws::Utils::DateTime>
  void SetCachedDate(CachedDateT&& value) {
    m_cachedDateHasBeenSet = true;
    m_cachedDate = std::forward<CachedDateT>(value);
  }
  template <typename CachedDateT = Aws::Utils::DateTime>
  ClientMetadataURLType& WithCachedDate(CachedDateT&& value) {
    SetCachedDate(std::forward<CachedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the cached client metadata document expires.</p>
   */
  inline const Aws::Utils::DateTime& GetExpirationDate() const { return m_expirationDate; }
  inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
  template <typename ExpirationDateT = Aws::Utils::DateTime>
  void SetExpirationDate(ExpirationDateT&& value) {
    m_expirationDateHasBeenSet = true;
    m_expirationDate = std::forward<ExpirationDateT>(value);
  }
  template <typename ExpirationDateT = Aws::Utils::DateTime>
  ClientMetadataURLType& WithExpirationDate(ExpirationDateT&& value) {
    SetExpirationDate(std::forward<ExpirationDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_uRL;

  Aws::Utils::DateTime m_cachedDate{};

  Aws::Utils::DateTime m_expirationDate{};
  bool m_uRLHasBeenSet = false;
  bool m_cachedDateHasBeenSet = false;
  bool m_expirationDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
