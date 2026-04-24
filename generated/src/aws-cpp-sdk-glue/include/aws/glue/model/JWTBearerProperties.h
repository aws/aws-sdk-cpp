/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ConnectorProperty.h>
#include <aws/glue/model/ContentType.h>
#include <aws/glue/model/HTTPMethod.h>

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
 * <p>JWT bearer token configuration that defines the properties needed for the JWT
 * Bearer grant type flow.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/JWTBearerProperties">AWS
 * API Reference</a></p>
 */
class JWTBearerProperties {
 public:
  AWS_GLUE_API JWTBearerProperties() = default;
  AWS_GLUE_API JWTBearerProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API JWTBearerProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The token endpoint URL where the JWT bearer token will be exchanged for an
   * access token.</p>
   */
  inline const ConnectorProperty& GetTokenUrl() const { return m_tokenUrl; }
  inline bool TokenUrlHasBeenSet() const { return m_tokenUrlHasBeenSet; }
  template <typename TokenUrlT = ConnectorProperty>
  void SetTokenUrl(TokenUrlT&& value) {
    m_tokenUrlHasBeenSet = true;
    m_tokenUrl = std::forward<TokenUrlT>(value);
  }
  template <typename TokenUrlT = ConnectorProperty>
  JWTBearerProperties& WithTokenUrl(TokenUrlT&& value) {
    SetTokenUrl(std::forward<TokenUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP method to use when making JWT bearer token requests, typically
   * POST.</p>
   */
  inline HTTPMethod GetRequestMethod() const { return m_requestMethod; }
  inline bool RequestMethodHasBeenSet() const { return m_requestMethodHasBeenSet; }
  inline void SetRequestMethod(HTTPMethod value) {
    m_requestMethodHasBeenSet = true;
    m_requestMethod = value;
  }
  inline JWTBearerProperties& WithRequestMethod(HTTPMethod value) {
    SetRequestMethod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content type to use for JWT bearer token requests, such as
   * application/x-www-form-urlencoded or application/json.</p>
   */
  inline ContentType GetContentType() const { return m_contentType; }
  inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
  inline void SetContentType(ContentType value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = value;
  }
  inline JWTBearerProperties& WithContentType(ContentType value) {
    SetContentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JWT token to be used in the bearer token grant flow for
   * authentication.</p>
   */
  inline const ConnectorProperty& GetJwtToken() const { return m_jwtToken; }
  inline bool JwtTokenHasBeenSet() const { return m_jwtTokenHasBeenSet; }
  template <typename JwtTokenT = ConnectorProperty>
  void SetJwtToken(JwtTokenT&& value) {
    m_jwtTokenHasBeenSet = true;
    m_jwtToken = std::forward<JwtTokenT>(value);
  }
  template <typename JwtTokenT = ConnectorProperty>
  JWTBearerProperties& WithJwtToken(JwtTokenT&& value) {
    SetJwtToken(std::forward<JwtTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional parameters to include in token URL requests as key-value
   * pairs.</p>
   */
  inline const Aws::Vector<ConnectorProperty>& GetTokenUrlParameters() const { return m_tokenUrlParameters; }
  inline bool TokenUrlParametersHasBeenSet() const { return m_tokenUrlParametersHasBeenSet; }
  template <typename TokenUrlParametersT = Aws::Vector<ConnectorProperty>>
  void SetTokenUrlParameters(TokenUrlParametersT&& value) {
    m_tokenUrlParametersHasBeenSet = true;
    m_tokenUrlParameters = std::forward<TokenUrlParametersT>(value);
  }
  template <typename TokenUrlParametersT = Aws::Vector<ConnectorProperty>>
  JWTBearerProperties& WithTokenUrlParameters(TokenUrlParametersT&& value) {
    SetTokenUrlParameters(std::forward<TokenUrlParametersT>(value));
    return *this;
  }
  template <typename TokenUrlParametersT = ConnectorProperty>
  JWTBearerProperties& AddTokenUrlParameters(TokenUrlParametersT&& value) {
    m_tokenUrlParametersHasBeenSet = true;
    m_tokenUrlParameters.emplace_back(std::forward<TokenUrlParametersT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectorProperty m_tokenUrl;

  HTTPMethod m_requestMethod{HTTPMethod::NOT_SET};

  ContentType m_contentType{ContentType::NOT_SET};

  ConnectorProperty m_jwtToken;

  Aws::Vector<ConnectorProperty> m_tokenUrlParameters;
  bool m_tokenUrlHasBeenSet = false;
  bool m_requestMethodHasBeenSet = false;
  bool m_contentTypeHasBeenSet = false;
  bool m_jwtTokenHasBeenSet = false;
  bool m_tokenUrlParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
