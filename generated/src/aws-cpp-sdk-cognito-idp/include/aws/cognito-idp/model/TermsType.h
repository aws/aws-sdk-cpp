/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/TermsSourceType.h>
#include <aws/cognito-idp/model/TermsEnforcementType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The details of a set of terms documents. For more information, see <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-managed-login.html#managed-login-terms-documents">Terms
   * documents</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/TermsType">AWS
   * API Reference</a></p>
   */
  class TermsType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API TermsType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API TermsType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API TermsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the terms documents.</p>
     */
    inline const Aws::String& GetTermsId() const { return m_termsId; }
    inline bool TermsIdHasBeenSet() const { return m_termsIdHasBeenSet; }
    template<typename TermsIdT = Aws::String>
    void SetTermsId(TermsIdT&& value) { m_termsIdHasBeenSet = true; m_termsId = std::forward<TermsIdT>(value); }
    template<typename TermsIdT = Aws::String>
    TermsType& WithTermsId(TermsIdT&& value) { SetTermsId(std::forward<TermsIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user pool that contains the terms documents.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    TermsType& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the app client that the terms documents are assigned to.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    TermsType& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type and friendly name of the terms documents.</p>
     */
    inline const Aws::String& GetTermsName() const { return m_termsName; }
    inline bool TermsNameHasBeenSet() const { return m_termsNameHasBeenSet; }
    template<typename TermsNameT = Aws::String>
    void SetTermsName(TermsNameT&& value) { m_termsNameHasBeenSet = true; m_termsName = std::forward<TermsNameT>(value); }
    template<typename TermsNameT = Aws::String>
    TermsType& WithTermsName(TermsNameT&& value) { SetTermsName(std::forward<TermsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is reserved for future use and currently accepts one
     * value.</p>
     */
    inline TermsSourceType GetTermsSource() const { return m_termsSource; }
    inline bool TermsSourceHasBeenSet() const { return m_termsSourceHasBeenSet; }
    inline void SetTermsSource(TermsSourceType value) { m_termsSourceHasBeenSet = true; m_termsSource = value; }
    inline TermsType& WithTermsSource(TermsSourceType value) { SetTermsSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is reserved for future use and currently accepts one
     * value.</p>
     */
    inline TermsEnforcementType GetEnforcement() const { return m_enforcement; }
    inline bool EnforcementHasBeenSet() const { return m_enforcementHasBeenSet; }
    inline void SetEnforcement(TermsEnforcementType value) { m_enforcementHasBeenSet = true; m_enforcement = value; }
    inline TermsType& WithEnforcement(TermsEnforcementType value) { SetEnforcement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of URLs to languages. For each localized language that will view the
     * requested <code>TermsName</code>, assign a URL. A selection of
     * <code>cognito:default</code> displays for all languages that don't have a
     * language-specific URL.</p> <p>For example, <code>"cognito:default":
     * "https://terms.example.com", "cognito:spanish":
     * "https://terms.example.com/es"</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLinks() const { return m_links; }
    inline bool LinksHasBeenSet() const { return m_linksHasBeenSet; }
    template<typename LinksT = Aws::Map<Aws::String, Aws::String>>
    void SetLinks(LinksT&& value) { m_linksHasBeenSet = true; m_links = std::forward<LinksT>(value); }
    template<typename LinksT = Aws::Map<Aws::String, Aws::String>>
    TermsType& WithLinks(LinksT&& value) { SetLinks(std::forward<LinksT>(value)); return *this;}
    template<typename LinksKeyT = Aws::String, typename LinksValueT = Aws::String>
    TermsType& AddLinks(LinksKeyT&& key, LinksValueT&& value) {
      m_linksHasBeenSet = true; m_links.emplace(std::forward<LinksKeyT>(key), std::forward<LinksValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was created. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    TermsType& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was modified. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    TermsType& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_termsId;
    bool m_termsIdHasBeenSet = false;

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_termsName;
    bool m_termsNameHasBeenSet = false;

    TermsSourceType m_termsSource{TermsSourceType::NOT_SET};
    bool m_termsSourceHasBeenSet = false;

    TermsEnforcementType m_enforcement{TermsEnforcementType::NOT_SET};
    bool m_enforcementHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_links;
    bool m_linksHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
