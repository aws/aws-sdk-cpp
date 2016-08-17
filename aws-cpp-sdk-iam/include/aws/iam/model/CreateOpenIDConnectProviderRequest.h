/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API CreateOpenIDConnectProviderRequest : public IAMRequest
  {
  public:
    CreateOpenIDConnectProviderRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The URL of the identity provider. The URL must begin with "https://" and
     * should correspond to the <code>iss</code> claim in the provider's OpenID Connect
     * ID tokens. Per the OIDC standard, path components are allowed but query
     * parameters are not. Typically the URL consists of only a host name, like
     * "https://server.example.org" or "https://example.com".</p> <p>You cannot
     * register the same provider multiple times in a single AWS account. If you try to
     * submit a URL that has already been used for an OpenID Connect provider in the
     * AWS account, you will get an error.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL of the identity provider. The URL must begin with "https://" and
     * should correspond to the <code>iss</code> claim in the provider's OpenID Connect
     * ID tokens. Per the OIDC standard, path components are allowed but query
     * parameters are not. Typically the URL consists of only a host name, like
     * "https://server.example.org" or "https://example.com".</p> <p>You cannot
     * register the same provider multiple times in a single AWS account. If you try to
     * submit a URL that has already been used for an OpenID Connect provider in the
     * AWS account, you will get an error.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL of the identity provider. The URL must begin with "https://" and
     * should correspond to the <code>iss</code> claim in the provider's OpenID Connect
     * ID tokens. Per the OIDC standard, path components are allowed but query
     * parameters are not. Typically the URL consists of only a host name, like
     * "https://server.example.org" or "https://example.com".</p> <p>You cannot
     * register the same provider multiple times in a single AWS account. If you try to
     * submit a URL that has already been used for an OpenID Connect provider in the
     * AWS account, you will get an error.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL of the identity provider. The URL must begin with "https://" and
     * should correspond to the <code>iss</code> claim in the provider's OpenID Connect
     * ID tokens. Per the OIDC standard, path components are allowed but query
     * parameters are not. Typically the URL consists of only a host name, like
     * "https://server.example.org" or "https://example.com".</p> <p>You cannot
     * register the same provider multiple times in a single AWS account. If you try to
     * submit a URL that has already been used for an OpenID Connect provider in the
     * AWS account, you will get an error.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL of the identity provider. The URL must begin with "https://" and
     * should correspond to the <code>iss</code> claim in the provider's OpenID Connect
     * ID tokens. Per the OIDC standard, path components are allowed but query
     * parameters are not. Typically the URL consists of only a host name, like
     * "https://server.example.org" or "https://example.com".</p> <p>You cannot
     * register the same provider multiple times in a single AWS account. If you try to
     * submit a URL that has already been used for an OpenID Connect provider in the
     * AWS account, you will get an error.</p>
     */
    inline CreateOpenIDConnectProviderRequest& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL of the identity provider. The URL must begin with "https://" and
     * should correspond to the <code>iss</code> claim in the provider's OpenID Connect
     * ID tokens. Per the OIDC standard, path components are allowed but query
     * parameters are not. Typically the URL consists of only a host name, like
     * "https://server.example.org" or "https://example.com".</p> <p>You cannot
     * register the same provider multiple times in a single AWS account. If you try to
     * submit a URL that has already been used for an OpenID Connect provider in the
     * AWS account, you will get an error.</p>
     */
    inline CreateOpenIDConnectProviderRequest& WithUrl(Aws::String&& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL of the identity provider. The URL must begin with "https://" and
     * should correspond to the <code>iss</code> claim in the provider's OpenID Connect
     * ID tokens. Per the OIDC standard, path components are allowed but query
     * parameters are not. Typically the URL consists of only a host name, like
     * "https://server.example.org" or "https://example.com".</p> <p>You cannot
     * register the same provider multiple times in a single AWS account. If you try to
     * submit a URL that has already been used for an OpenID Connect provider in the
     * AWS account, you will get an error.</p>
     */
    inline CreateOpenIDConnectProviderRequest& WithUrl(const char* value) { SetUrl(value); return *this;}

    /**
     * <p>A list of client IDs (also known as audiences). When a mobile or web app
     * registers with an OpenID Connect provider, they establish a value that
     * identifies the application. (This is the value that's sent as the
     * <code>client_id</code> parameter on OAuth requests.)</p> <p>You can register
     * multiple client IDs with the same provider. For example, you might have multiple
     * applications that use the same OIDC provider. You cannot register more than 100
     * client IDs with a single IAM OIDC provider.</p> <p>There is no defined format
     * for a client ID. The <code>CreateOpenIDConnectProviderRequest</code> action
     * accepts client IDs up to 255 characters long.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClientIDList() const{ return m_clientIDList; }

    /**
     * <p>A list of client IDs (also known as audiences). When a mobile or web app
     * registers with an OpenID Connect provider, they establish a value that
     * identifies the application. (This is the value that's sent as the
     * <code>client_id</code> parameter on OAuth requests.)</p> <p>You can register
     * multiple client IDs with the same provider. For example, you might have multiple
     * applications that use the same OIDC provider. You cannot register more than 100
     * client IDs with a single IAM OIDC provider.</p> <p>There is no defined format
     * for a client ID. The <code>CreateOpenIDConnectProviderRequest</code> action
     * accepts client IDs up to 255 characters long.</p>
     */
    inline void SetClientIDList(const Aws::Vector<Aws::String>& value) { m_clientIDListHasBeenSet = true; m_clientIDList = value; }

    /**
     * <p>A list of client IDs (also known as audiences). When a mobile or web app
     * registers with an OpenID Connect provider, they establish a value that
     * identifies the application. (This is the value that's sent as the
     * <code>client_id</code> parameter on OAuth requests.)</p> <p>You can register
     * multiple client IDs with the same provider. For example, you might have multiple
     * applications that use the same OIDC provider. You cannot register more than 100
     * client IDs with a single IAM OIDC provider.</p> <p>There is no defined format
     * for a client ID. The <code>CreateOpenIDConnectProviderRequest</code> action
     * accepts client IDs up to 255 characters long.</p>
     */
    inline void SetClientIDList(Aws::Vector<Aws::String>&& value) { m_clientIDListHasBeenSet = true; m_clientIDList = value; }

    /**
     * <p>A list of client IDs (also known as audiences). When a mobile or web app
     * registers with an OpenID Connect provider, they establish a value that
     * identifies the application. (This is the value that's sent as the
     * <code>client_id</code> parameter on OAuth requests.)</p> <p>You can register
     * multiple client IDs with the same provider. For example, you might have multiple
     * applications that use the same OIDC provider. You cannot register more than 100
     * client IDs with a single IAM OIDC provider.</p> <p>There is no defined format
     * for a client ID. The <code>CreateOpenIDConnectProviderRequest</code> action
     * accepts client IDs up to 255 characters long.</p>
     */
    inline CreateOpenIDConnectProviderRequest& WithClientIDList(const Aws::Vector<Aws::String>& value) { SetClientIDList(value); return *this;}

    /**
     * <p>A list of client IDs (also known as audiences). When a mobile or web app
     * registers with an OpenID Connect provider, they establish a value that
     * identifies the application. (This is the value that's sent as the
     * <code>client_id</code> parameter on OAuth requests.)</p> <p>You can register
     * multiple client IDs with the same provider. For example, you might have multiple
     * applications that use the same OIDC provider. You cannot register more than 100
     * client IDs with a single IAM OIDC provider.</p> <p>There is no defined format
     * for a client ID. The <code>CreateOpenIDConnectProviderRequest</code> action
     * accepts client IDs up to 255 characters long.</p>
     */
    inline CreateOpenIDConnectProviderRequest& WithClientIDList(Aws::Vector<Aws::String>&& value) { SetClientIDList(value); return *this;}

    /**
     * <p>A list of client IDs (also known as audiences). When a mobile or web app
     * registers with an OpenID Connect provider, they establish a value that
     * identifies the application. (This is the value that's sent as the
     * <code>client_id</code> parameter on OAuth requests.)</p> <p>You can register
     * multiple client IDs with the same provider. For example, you might have multiple
     * applications that use the same OIDC provider. You cannot register more than 100
     * client IDs with a single IAM OIDC provider.</p> <p>There is no defined format
     * for a client ID. The <code>CreateOpenIDConnectProviderRequest</code> action
     * accepts client IDs up to 255 characters long.</p>
     */
    inline CreateOpenIDConnectProviderRequest& AddClientIDList(const Aws::String& value) { m_clientIDListHasBeenSet = true; m_clientIDList.push_back(value); return *this; }

    /**
     * <p>A list of client IDs (also known as audiences). When a mobile or web app
     * registers with an OpenID Connect provider, they establish a value that
     * identifies the application. (This is the value that's sent as the
     * <code>client_id</code> parameter on OAuth requests.)</p> <p>You can register
     * multiple client IDs with the same provider. For example, you might have multiple
     * applications that use the same OIDC provider. You cannot register more than 100
     * client IDs with a single IAM OIDC provider.</p> <p>There is no defined format
     * for a client ID. The <code>CreateOpenIDConnectProviderRequest</code> action
     * accepts client IDs up to 255 characters long.</p>
     */
    inline CreateOpenIDConnectProviderRequest& AddClientIDList(Aws::String&& value) { m_clientIDListHasBeenSet = true; m_clientIDList.push_back(value); return *this; }

    /**
     * <p>A list of client IDs (also known as audiences). When a mobile or web app
     * registers with an OpenID Connect provider, they establish a value that
     * identifies the application. (This is the value that's sent as the
     * <code>client_id</code> parameter on OAuth requests.)</p> <p>You can register
     * multiple client IDs with the same provider. For example, you might have multiple
     * applications that use the same OIDC provider. You cannot register more than 100
     * client IDs with a single IAM OIDC provider.</p> <p>There is no defined format
     * for a client ID. The <code>CreateOpenIDConnectProviderRequest</code> action
     * accepts client IDs up to 255 characters long.</p>
     */
    inline CreateOpenIDConnectProviderRequest& AddClientIDList(const char* value) { m_clientIDListHasBeenSet = true; m_clientIDList.push_back(value); return *this; }

    /**
     * <p>A list of server certificate thumbprints for the OpenID Connect (OIDC)
     * identity provider's server certificate(s). Typically this list includes only one
     * entry. However, IAM lets you have up to five thumbprints for an OIDC provider.
     * This lets you maintain multiple thumbprints if the identity provider is rotating
     * certificates.</p> <p>The server certificate thumbprint is the hex-encoded SHA-1
     * hash value of the X.509 certificate used by the domain where the OpenID Connect
     * provider makes its keys available. It is always a 40-character string.</p>
     * <p>You must provide at least one thumbprint when creating an IAM OIDC provider.
     * For example, if the OIDC provider is <code>server.example.com</code> and the
     * provider stores its keys at "https://keys.server.example.com/openid-connect",
     * the thumbprint string would be the hex-encoded SHA-1 hash value of the
     * certificate used by https://keys.server.example.com.</p> <p>For more information
     * about obtaining the OIDC provider's thumbprint, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/identity-providers-oidc-obtain-thumbprint.html">Obtaining
     * the Thumbprint for an OpenID Connect Provider</a> in the <i>IAM User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThumbprintList() const{ return m_thumbprintList; }

    /**
     * <p>A list of server certificate thumbprints for the OpenID Connect (OIDC)
     * identity provider's server certificate(s). Typically this list includes only one
     * entry. However, IAM lets you have up to five thumbprints for an OIDC provider.
     * This lets you maintain multiple thumbprints if the identity provider is rotating
     * certificates.</p> <p>The server certificate thumbprint is the hex-encoded SHA-1
     * hash value of the X.509 certificate used by the domain where the OpenID Connect
     * provider makes its keys available. It is always a 40-character string.</p>
     * <p>You must provide at least one thumbprint when creating an IAM OIDC provider.
     * For example, if the OIDC provider is <code>server.example.com</code> and the
     * provider stores its keys at "https://keys.server.example.com/openid-connect",
     * the thumbprint string would be the hex-encoded SHA-1 hash value of the
     * certificate used by https://keys.server.example.com.</p> <p>For more information
     * about obtaining the OIDC provider's thumbprint, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/identity-providers-oidc-obtain-thumbprint.html">Obtaining
     * the Thumbprint for an OpenID Connect Provider</a> in the <i>IAM User
     * Guide</i>.</p>
     */
    inline void SetThumbprintList(const Aws::Vector<Aws::String>& value) { m_thumbprintListHasBeenSet = true; m_thumbprintList = value; }

    /**
     * <p>A list of server certificate thumbprints for the OpenID Connect (OIDC)
     * identity provider's server certificate(s). Typically this list includes only one
     * entry. However, IAM lets you have up to five thumbprints for an OIDC provider.
     * This lets you maintain multiple thumbprints if the identity provider is rotating
     * certificates.</p> <p>The server certificate thumbprint is the hex-encoded SHA-1
     * hash value of the X.509 certificate used by the domain where the OpenID Connect
     * provider makes its keys available. It is always a 40-character string.</p>
     * <p>You must provide at least one thumbprint when creating an IAM OIDC provider.
     * For example, if the OIDC provider is <code>server.example.com</code> and the
     * provider stores its keys at "https://keys.server.example.com/openid-connect",
     * the thumbprint string would be the hex-encoded SHA-1 hash value of the
     * certificate used by https://keys.server.example.com.</p> <p>For more information
     * about obtaining the OIDC provider's thumbprint, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/identity-providers-oidc-obtain-thumbprint.html">Obtaining
     * the Thumbprint for an OpenID Connect Provider</a> in the <i>IAM User
     * Guide</i>.</p>
     */
    inline void SetThumbprintList(Aws::Vector<Aws::String>&& value) { m_thumbprintListHasBeenSet = true; m_thumbprintList = value; }

    /**
     * <p>A list of server certificate thumbprints for the OpenID Connect (OIDC)
     * identity provider's server certificate(s). Typically this list includes only one
     * entry. However, IAM lets you have up to five thumbprints for an OIDC provider.
     * This lets you maintain multiple thumbprints if the identity provider is rotating
     * certificates.</p> <p>The server certificate thumbprint is the hex-encoded SHA-1
     * hash value of the X.509 certificate used by the domain where the OpenID Connect
     * provider makes its keys available. It is always a 40-character string.</p>
     * <p>You must provide at least one thumbprint when creating an IAM OIDC provider.
     * For example, if the OIDC provider is <code>server.example.com</code> and the
     * provider stores its keys at "https://keys.server.example.com/openid-connect",
     * the thumbprint string would be the hex-encoded SHA-1 hash value of the
     * certificate used by https://keys.server.example.com.</p> <p>For more information
     * about obtaining the OIDC provider's thumbprint, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/identity-providers-oidc-obtain-thumbprint.html">Obtaining
     * the Thumbprint for an OpenID Connect Provider</a> in the <i>IAM User
     * Guide</i>.</p>
     */
    inline CreateOpenIDConnectProviderRequest& WithThumbprintList(const Aws::Vector<Aws::String>& value) { SetThumbprintList(value); return *this;}

    /**
     * <p>A list of server certificate thumbprints for the OpenID Connect (OIDC)
     * identity provider's server certificate(s). Typically this list includes only one
     * entry. However, IAM lets you have up to five thumbprints for an OIDC provider.
     * This lets you maintain multiple thumbprints if the identity provider is rotating
     * certificates.</p> <p>The server certificate thumbprint is the hex-encoded SHA-1
     * hash value of the X.509 certificate used by the domain where the OpenID Connect
     * provider makes its keys available. It is always a 40-character string.</p>
     * <p>You must provide at least one thumbprint when creating an IAM OIDC provider.
     * For example, if the OIDC provider is <code>server.example.com</code> and the
     * provider stores its keys at "https://keys.server.example.com/openid-connect",
     * the thumbprint string would be the hex-encoded SHA-1 hash value of the
     * certificate used by https://keys.server.example.com.</p> <p>For more information
     * about obtaining the OIDC provider's thumbprint, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/identity-providers-oidc-obtain-thumbprint.html">Obtaining
     * the Thumbprint for an OpenID Connect Provider</a> in the <i>IAM User
     * Guide</i>.</p>
     */
    inline CreateOpenIDConnectProviderRequest& WithThumbprintList(Aws::Vector<Aws::String>&& value) { SetThumbprintList(value); return *this;}

    /**
     * <p>A list of server certificate thumbprints for the OpenID Connect (OIDC)
     * identity provider's server certificate(s). Typically this list includes only one
     * entry. However, IAM lets you have up to five thumbprints for an OIDC provider.
     * This lets you maintain multiple thumbprints if the identity provider is rotating
     * certificates.</p> <p>The server certificate thumbprint is the hex-encoded SHA-1
     * hash value of the X.509 certificate used by the domain where the OpenID Connect
     * provider makes its keys available. It is always a 40-character string.</p>
     * <p>You must provide at least one thumbprint when creating an IAM OIDC provider.
     * For example, if the OIDC provider is <code>server.example.com</code> and the
     * provider stores its keys at "https://keys.server.example.com/openid-connect",
     * the thumbprint string would be the hex-encoded SHA-1 hash value of the
     * certificate used by https://keys.server.example.com.</p> <p>For more information
     * about obtaining the OIDC provider's thumbprint, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/identity-providers-oidc-obtain-thumbprint.html">Obtaining
     * the Thumbprint for an OpenID Connect Provider</a> in the <i>IAM User
     * Guide</i>.</p>
     */
    inline CreateOpenIDConnectProviderRequest& AddThumbprintList(const Aws::String& value) { m_thumbprintListHasBeenSet = true; m_thumbprintList.push_back(value); return *this; }

    /**
     * <p>A list of server certificate thumbprints for the OpenID Connect (OIDC)
     * identity provider's server certificate(s). Typically this list includes only one
     * entry. However, IAM lets you have up to five thumbprints for an OIDC provider.
     * This lets you maintain multiple thumbprints if the identity provider is rotating
     * certificates.</p> <p>The server certificate thumbprint is the hex-encoded SHA-1
     * hash value of the X.509 certificate used by the domain where the OpenID Connect
     * provider makes its keys available. It is always a 40-character string.</p>
     * <p>You must provide at least one thumbprint when creating an IAM OIDC provider.
     * For example, if the OIDC provider is <code>server.example.com</code> and the
     * provider stores its keys at "https://keys.server.example.com/openid-connect",
     * the thumbprint string would be the hex-encoded SHA-1 hash value of the
     * certificate used by https://keys.server.example.com.</p> <p>For more information
     * about obtaining the OIDC provider's thumbprint, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/identity-providers-oidc-obtain-thumbprint.html">Obtaining
     * the Thumbprint for an OpenID Connect Provider</a> in the <i>IAM User
     * Guide</i>.</p>
     */
    inline CreateOpenIDConnectProviderRequest& AddThumbprintList(Aws::String&& value) { m_thumbprintListHasBeenSet = true; m_thumbprintList.push_back(value); return *this; }

    /**
     * <p>A list of server certificate thumbprints for the OpenID Connect (OIDC)
     * identity provider's server certificate(s). Typically this list includes only one
     * entry. However, IAM lets you have up to five thumbprints for an OIDC provider.
     * This lets you maintain multiple thumbprints if the identity provider is rotating
     * certificates.</p> <p>The server certificate thumbprint is the hex-encoded SHA-1
     * hash value of the X.509 certificate used by the domain where the OpenID Connect
     * provider makes its keys available. It is always a 40-character string.</p>
     * <p>You must provide at least one thumbprint when creating an IAM OIDC provider.
     * For example, if the OIDC provider is <code>server.example.com</code> and the
     * provider stores its keys at "https://keys.server.example.com/openid-connect",
     * the thumbprint string would be the hex-encoded SHA-1 hash value of the
     * certificate used by https://keys.server.example.com.</p> <p>For more information
     * about obtaining the OIDC provider's thumbprint, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/identity-providers-oidc-obtain-thumbprint.html">Obtaining
     * the Thumbprint for an OpenID Connect Provider</a> in the <i>IAM User
     * Guide</i>.</p>
     */
    inline CreateOpenIDConnectProviderRequest& AddThumbprintList(const char* value) { m_thumbprintListHasBeenSet = true; m_thumbprintList.push_back(value); return *this; }

  private:
    Aws::String m_url;
    bool m_urlHasBeenSet;
    Aws::Vector<Aws::String> m_clientIDList;
    bool m_clientIDListHasBeenSet;
    Aws::Vector<Aws::String> m_thumbprintList;
    bool m_thumbprintListHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
