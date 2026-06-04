/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>Contains the Spark Connect endpoint details for an interactive session,
 * including the URL and authentication credentials.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SessionEndpoint">AWS
 * API Reference</a></p>
 */
class SessionEndpoint {
 public:
  AWS_GLUE_API SessionEndpoint() = default;
  AWS_GLUE_API SessionEndpoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API SessionEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Spark Connect endpoint URL for the session.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  SessionEndpoint& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authentication token to include in requests to the Spark Connect
   * endpoint.</p>
   */
  inline const Aws::String& GetAuthToken() const { return m_authToken; }
  inline bool AuthTokenHasBeenSet() const { return m_authTokenHasBeenSet; }
  template <typename AuthTokenT = Aws::String>
  void SetAuthToken(AuthTokenT&& value) {
    m_authTokenHasBeenSet = true;
    m_authToken = std::forward<AuthTokenT>(value);
  }
  template <typename AuthTokenT = Aws::String>
  SessionEndpoint& WithAuthToken(AuthTokenT&& value) {
    SetAuthToken(std::forward<AuthTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the authentication token expires.</p>
   */
  inline const Aws::Utils::DateTime& GetAuthTokenExpirationTime() const { return m_authTokenExpirationTime; }
  inline bool AuthTokenExpirationTimeHasBeenSet() const { return m_authTokenExpirationTimeHasBeenSet; }
  template <typename AuthTokenExpirationTimeT = Aws::Utils::DateTime>
  void SetAuthTokenExpirationTime(AuthTokenExpirationTimeT&& value) {
    m_authTokenExpirationTimeHasBeenSet = true;
    m_authTokenExpirationTime = std::forward<AuthTokenExpirationTimeT>(value);
  }
  template <typename AuthTokenExpirationTimeT = Aws::Utils::DateTime>
  SessionEndpoint& WithAuthTokenExpirationTime(AuthTokenExpirationTimeT&& value) {
    SetAuthTokenExpirationTime(std::forward<AuthTokenExpirationTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_url;

  Aws::String m_authToken;

  Aws::Utils::DateTime m_authTokenExpirationTime{};
  bool m_urlHasBeenSet = false;
  bool m_authTokenHasBeenSet = false;
  bool m_authTokenExpirationTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
