/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/OAuth2ClientApplication.h>
#include <aws/datazone/model/OAuth2GrantType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>Contains the OAuth2 properties, such as the client application, grant type,
 * and token URL, that you want to update for a connection.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/OAuth2PropertiesPatch">AWS
 * API Reference</a></p>
 */
class OAuth2PropertiesPatch {
 public:
  AWS_DATAZONE_API OAuth2PropertiesPatch() = default;
  AWS_DATAZONE_API OAuth2PropertiesPatch(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API OAuth2PropertiesPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The OAuth2 grant type of the OAuth2 properties to update.</p>
   */
  inline OAuth2GrantType GetOAuth2GrantType() const { return m_oAuth2GrantType; }
  inline bool OAuth2GrantTypeHasBeenSet() const { return m_oAuth2GrantTypeHasBeenSet; }
  inline void SetOAuth2GrantType(OAuth2GrantType value) {
    m_oAuth2GrantTypeHasBeenSet = true;
    m_oAuth2GrantType = value;
  }
  inline OAuth2PropertiesPatch& WithOAuth2GrantType(OAuth2GrantType value) {
    SetOAuth2GrantType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth2 client application of the OAuth2 properties to update.</p>
   */
  inline const OAuth2ClientApplication& GetOAuth2ClientApplication() const { return m_oAuth2ClientApplication; }
  inline bool OAuth2ClientApplicationHasBeenSet() const { return m_oAuth2ClientApplicationHasBeenSet; }
  template <typename OAuth2ClientApplicationT = OAuth2ClientApplication>
  void SetOAuth2ClientApplication(OAuth2ClientApplicationT&& value) {
    m_oAuth2ClientApplicationHasBeenSet = true;
    m_oAuth2ClientApplication = std::forward<OAuth2ClientApplicationT>(value);
  }
  template <typename OAuth2ClientApplicationT = OAuth2ClientApplication>
  OAuth2PropertiesPatch& WithOAuth2ClientApplication(OAuth2ClientApplicationT&& value) {
    SetOAuth2ClientApplication(std::forward<OAuth2ClientApplicationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth2 token URL of the OAuth2 properties to update.</p>
   */
  inline const Aws::String& GetTokenUrl() const { return m_tokenUrl; }
  inline bool TokenUrlHasBeenSet() const { return m_tokenUrlHasBeenSet; }
  template <typename TokenUrlT = Aws::String>
  void SetTokenUrl(TokenUrlT&& value) {
    m_tokenUrlHasBeenSet = true;
    m_tokenUrl = std::forward<TokenUrlT>(value);
  }
  template <typename TokenUrlT = Aws::String>
  OAuth2PropertiesPatch& WithTokenUrl(TokenUrlT&& value) {
    SetTokenUrl(std::forward<TokenUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth2 token URL parameter map of the OAuth2 properties to update, for
   * example the scope. If you specify an empty map, the existing parameters are
   * kept.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTokenUrlParametersMap() const { return m_tokenUrlParametersMap; }
  inline bool TokenUrlParametersMapHasBeenSet() const { return m_tokenUrlParametersMapHasBeenSet; }
  template <typename TokenUrlParametersMapT = Aws::Map<Aws::String, Aws::String>>
  void SetTokenUrlParametersMap(TokenUrlParametersMapT&& value) {
    m_tokenUrlParametersMapHasBeenSet = true;
    m_tokenUrlParametersMap = std::forward<TokenUrlParametersMapT>(value);
  }
  template <typename TokenUrlParametersMapT = Aws::Map<Aws::String, Aws::String>>
  OAuth2PropertiesPatch& WithTokenUrlParametersMap(TokenUrlParametersMapT&& value) {
    SetTokenUrlParametersMap(std::forward<TokenUrlParametersMapT>(value));
    return *this;
  }
  template <typename TokenUrlParametersMapKeyT = Aws::String, typename TokenUrlParametersMapValueT = Aws::String>
  OAuth2PropertiesPatch& AddTokenUrlParametersMap(TokenUrlParametersMapKeyT&& key, TokenUrlParametersMapValueT&& value) {
    m_tokenUrlParametersMapHasBeenSet = true;
    m_tokenUrlParametersMap.emplace(std::forward<TokenUrlParametersMapKeyT>(key), std::forward<TokenUrlParametersMapValueT>(value));
    return *this;
  }
  ///@}
 private:
  OAuth2GrantType m_oAuth2GrantType{OAuth2GrantType::NOT_SET};

  OAuth2ClientApplication m_oAuth2ClientApplication;

  Aws::String m_tokenUrl;

  Aws::Map<Aws::String, Aws::String> m_tokenUrlParametersMap;
  bool m_oAuth2GrantTypeHasBeenSet = false;
  bool m_oAuth2ClientApplicationHasBeenSet = false;
  bool m_tokenUrlHasBeenSet = false;
  bool m_tokenUrlParametersMapHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
