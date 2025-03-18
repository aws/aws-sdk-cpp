/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class CreateOpenIDConnectProviderRequest : public IAMRequest
  {
  public:
    AWS_IAM_API CreateOpenIDConnectProviderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOpenIDConnectProvider"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The URL of the identity provider. The URL must begin with
     * <code>https://</code> and should correspond to the <code>iss</code> claim in the
     * provider's OpenID Connect ID tokens. Per the OIDC standard, path components are
     * allowed but query parameters are not. Typically the URL consists of only a
     * hostname, like <code>https://server.example.org</code> or
     * <code>https://example.com</code>. The URL should not contain a port number. </p>
     * <p>You cannot register the same provider multiple times in a single Amazon Web
     * Services account. If you try to submit a URL that has already been used for an
     * OpenID Connect provider in the Amazon Web Services account, you will get an
     * error.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    CreateOpenIDConnectProviderRequest& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a list of client IDs, also known as audiences. When a mobile or web
     * app registers with an OpenID Connect provider, they establish a value that
     * identifies the application. This is the value that's sent as the
     * <code>client_id</code> parameter on OAuth requests.</p> <p>You can register
     * multiple client IDs with the same provider. For example, you might have multiple
     * applications that use the same OIDC provider. You cannot register more than 100
     * client IDs with a single IAM OIDC provider.</p> <p>There is no defined format
     * for a client ID. The <code>CreateOpenIDConnectProviderRequest</code> operation
     * accepts client IDs up to 255 characters long.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClientIDList() const { return m_clientIDList; }
    inline bool ClientIDListHasBeenSet() const { return m_clientIDListHasBeenSet; }
    template<typename ClientIDListT = Aws::Vector<Aws::String>>
    void SetClientIDList(ClientIDListT&& value) { m_clientIDListHasBeenSet = true; m_clientIDList = std::forward<ClientIDListT>(value); }
    template<typename ClientIDListT = Aws::Vector<Aws::String>>
    CreateOpenIDConnectProviderRequest& WithClientIDList(ClientIDListT&& value) { SetClientIDList(std::forward<ClientIDListT>(value)); return *this;}
    template<typename ClientIDListT = Aws::String>
    CreateOpenIDConnectProviderRequest& AddClientIDList(ClientIDListT&& value) { m_clientIDListHasBeenSet = true; m_clientIDList.emplace_back(std::forward<ClientIDListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of server certificate thumbprints for the OpenID Connect (OIDC)
     * identity provider's server certificates. Typically this list includes only one
     * entry. However, IAM lets you have up to five thumbprints for an OIDC provider.
     * This lets you maintain multiple thumbprints if the identity provider is rotating
     * certificates.</p> <p>This parameter is optional. If it is not included, IAM will
     * retrieve and use the top intermediate certificate authority (CA) thumbprint of
     * the OpenID Connect identity provider server certificate.</p> <p>The server
     * certificate thumbprint is the hex-encoded SHA-1 hash value of the X.509
     * certificate used by the domain where the OpenID Connect provider makes its keys
     * available. It is always a 40-character string.</p> <p>For example, assume that
     * the OIDC provider is <code>server.example.com</code> and the provider stores its
     * keys at https://keys.server.example.com/openid-connect. In that case, the
     * thumbprint string would be the hex-encoded SHA-1 hash value of the certificate
     * used by <code>https://keys.server.example.com.</code> </p> <p>For more
     * information about obtaining the OIDC provider thumbprint, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/identity-providers-oidc-obtain-thumbprint.html">Obtaining
     * the thumbprint for an OpenID Connect provider</a> in the <i>IAM user
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThumbprintList() const { return m_thumbprintList; }
    inline bool ThumbprintListHasBeenSet() const { return m_thumbprintListHasBeenSet; }
    template<typename ThumbprintListT = Aws::Vector<Aws::String>>
    void SetThumbprintList(ThumbprintListT&& value) { m_thumbprintListHasBeenSet = true; m_thumbprintList = std::forward<ThumbprintListT>(value); }
    template<typename ThumbprintListT = Aws::Vector<Aws::String>>
    CreateOpenIDConnectProviderRequest& WithThumbprintList(ThumbprintListT&& value) { SetThumbprintList(std::forward<ThumbprintListT>(value)); return *this;}
    template<typename ThumbprintListT = Aws::String>
    CreateOpenIDConnectProviderRequest& AddThumbprintList(ThumbprintListT&& value) { m_thumbprintListHasBeenSet = true; m_thumbprintList.emplace_back(std::forward<ThumbprintListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags that you want to attach to the new IAM OpenID Connect (OIDC)
     * provider. Each tag consists of a key name and an associated value. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>  <p>If any one of the tags
     * is invalid or if you exceed the allowed maximum number of tags, then the entire
     * request fails and the resource is not created.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateOpenIDConnectProviderRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateOpenIDConnectProviderRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::Vector<Aws::String> m_clientIDList;
    bool m_clientIDListHasBeenSet = false;

    Aws::Vector<Aws::String> m_thumbprintList;
    bool m_thumbprintListHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
