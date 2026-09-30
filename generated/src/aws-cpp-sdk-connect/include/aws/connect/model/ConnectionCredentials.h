/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>The credentials that a chat participant uses to connect to the Connect
 * Customer Participant Service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ConnectionCredentials">AWS
 * API Reference</a></p>
 */
class ConnectionCredentials {
 public:
  AWS_CONNECT_API ConnectionCredentials() = default;
  AWS_CONNECT_API ConnectionCredentials(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ConnectionCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The connection token used by the chat participant to call the Connect
   * Customer Participant Service.</p>
   */
  inline const Aws::String& GetConnectionToken() const { return m_connectionToken; }
  inline bool ConnectionTokenHasBeenSet() const { return m_connectionTokenHasBeenSet; }
  template <typename ConnectionTokenT = Aws::String>
  void SetConnectionToken(ConnectionTokenT&& value) {
    m_connectionTokenHasBeenSet = true;
    m_connectionToken = std::forward<ConnectionTokenT>(value);
  }
  template <typename ConnectionTokenT = Aws::String>
  ConnectionCredentials& WithConnectionToken(ConnectionTokenT&& value) {
    SetConnectionToken(std::forward<ConnectionTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expiration of the token. It's specified in ISO 8601 format:
   * yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
   */
  inline const Aws::String& GetExpiry() const { return m_expiry; }
  inline bool ExpiryHasBeenSet() const { return m_expiryHasBeenSet; }
  template <typename ExpiryT = Aws::String>
  void SetExpiry(ExpiryT&& value) {
    m_expiryHasBeenSet = true;
    m_expiry = std::forward<ExpiryT>(value);
  }
  template <typename ExpiryT = Aws::String>
  ConnectionCredentials& WithExpiry(ExpiryT&& value) {
    SetExpiry(std::forward<ExpiryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_connectionToken;

  Aws::String m_expiry;
  bool m_connectionTokenHasBeenSet = false;
  bool m_expiryHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
