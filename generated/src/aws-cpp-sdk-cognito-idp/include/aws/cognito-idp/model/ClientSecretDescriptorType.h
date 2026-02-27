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
 * <p>Contains information about a client secret, including its unique identifier,
 * value, and creation timestamp.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ClientSecretDescriptorType">AWS
 * API Reference</a></p>
 */
class ClientSecretDescriptorType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API ClientSecretDescriptorType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API ClientSecretDescriptorType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API ClientSecretDescriptorType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the client secret. This identifier follows the
   * format &lt;client-id&gt;--&lt;epoch-create-time&gt;.</p>
   */
  inline const Aws::String& GetClientSecretId() const { return m_clientSecretId; }
  inline bool ClientSecretIdHasBeenSet() const { return m_clientSecretIdHasBeenSet; }
  template <typename ClientSecretIdT = Aws::String>
  void SetClientSecretId(ClientSecretIdT&& value) {
    m_clientSecretIdHasBeenSet = true;
    m_clientSecretId = std::forward<ClientSecretIdT>(value);
  }
  template <typename ClientSecretIdT = Aws::String>
  ClientSecretDescriptorType& WithClientSecretId(ClientSecretIdT&& value) {
    SetClientSecretId(std::forward<ClientSecretIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actual secret value. This is only returned when creating a new secret and
   * only if Amazon Cognito generated the secret. For custom secrets that you
   * provide, this field is not included in the response.</p>
   */
  inline const Aws::String& GetClientSecretValue() const { return m_clientSecretValue; }
  inline bool ClientSecretValueHasBeenSet() const { return m_clientSecretValueHasBeenSet; }
  template <typename ClientSecretValueT = Aws::String>
  void SetClientSecretValue(ClientSecretValueT&& value) {
    m_clientSecretValueHasBeenSet = true;
    m_clientSecretValue = std::forward<ClientSecretValueT>(value);
  }
  template <typename ClientSecretValueT = Aws::String>
  ClientSecretDescriptorType& WithClientSecretValue(ClientSecretValueT&& value) {
    SetClientSecretValue(std::forward<ClientSecretValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the client secret was created.</p>
   */
  inline const Aws::Utils::DateTime& GetClientSecretCreateDate() const { return m_clientSecretCreateDate; }
  inline bool ClientSecretCreateDateHasBeenSet() const { return m_clientSecretCreateDateHasBeenSet; }
  template <typename ClientSecretCreateDateT = Aws::Utils::DateTime>
  void SetClientSecretCreateDate(ClientSecretCreateDateT&& value) {
    m_clientSecretCreateDateHasBeenSet = true;
    m_clientSecretCreateDate = std::forward<ClientSecretCreateDateT>(value);
  }
  template <typename ClientSecretCreateDateT = Aws::Utils::DateTime>
  ClientSecretDescriptorType& WithClientSecretCreateDate(ClientSecretCreateDateT&& value) {
    SetClientSecretCreateDate(std::forward<ClientSecretCreateDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientSecretId;

  Aws::String m_clientSecretValue;

  Aws::Utils::DateTime m_clientSecretCreateDate{};
  bool m_clientSecretIdHasBeenSet = false;
  bool m_clientSecretValueHasBeenSet = false;
  bool m_clientSecretCreateDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
