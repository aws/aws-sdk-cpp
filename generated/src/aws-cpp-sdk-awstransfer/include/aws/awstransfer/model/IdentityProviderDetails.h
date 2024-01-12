/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/SftpAuthenticationMethods.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Returns information related to the type of user authentication that is in use
   * for a file transfer protocol-enabled server's users. A server can have only one
   * method of authentication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/IdentityProviderDetails">AWS
   * API Reference</a></p>
   */
  class IdentityProviderDetails
  {
  public:
    AWS_TRANSFER_API IdentityProviderDetails();
    AWS_TRANSFER_API IdentityProviderDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API IdentityProviderDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides the location of the service endpoint used to authenticate users.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>Provides the location of the service endpoint used to authenticate users.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>Provides the location of the service endpoint used to authenticate users.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>Provides the location of the service endpoint used to authenticate users.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>Provides the location of the service endpoint used to authenticate users.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>Provides the location of the service endpoint used to authenticate users.</p>
     */
    inline IdentityProviderDetails& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>Provides the location of the service endpoint used to authenticate users.</p>
     */
    inline IdentityProviderDetails& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>Provides the location of the service endpoint used to authenticate users.</p>
     */
    inline IdentityProviderDetails& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>This parameter is only applicable if your <code>IdentityProviderType</code>
     * is <code>API_GATEWAY</code>. Provides the type of <code>InvocationRole</code>
     * used to authenticate the user account.</p>
     */
    inline const Aws::String& GetInvocationRole() const{ return m_invocationRole; }

    /**
     * <p>This parameter is only applicable if your <code>IdentityProviderType</code>
     * is <code>API_GATEWAY</code>. Provides the type of <code>InvocationRole</code>
     * used to authenticate the user account.</p>
     */
    inline bool InvocationRoleHasBeenSet() const { return m_invocationRoleHasBeenSet; }

    /**
     * <p>This parameter is only applicable if your <code>IdentityProviderType</code>
     * is <code>API_GATEWAY</code>. Provides the type of <code>InvocationRole</code>
     * used to authenticate the user account.</p>
     */
    inline void SetInvocationRole(const Aws::String& value) { m_invocationRoleHasBeenSet = true; m_invocationRole = value; }

    /**
     * <p>This parameter is only applicable if your <code>IdentityProviderType</code>
     * is <code>API_GATEWAY</code>. Provides the type of <code>InvocationRole</code>
     * used to authenticate the user account.</p>
     */
    inline void SetInvocationRole(Aws::String&& value) { m_invocationRoleHasBeenSet = true; m_invocationRole = std::move(value); }

    /**
     * <p>This parameter is only applicable if your <code>IdentityProviderType</code>
     * is <code>API_GATEWAY</code>. Provides the type of <code>InvocationRole</code>
     * used to authenticate the user account.</p>
     */
    inline void SetInvocationRole(const char* value) { m_invocationRoleHasBeenSet = true; m_invocationRole.assign(value); }

    /**
     * <p>This parameter is only applicable if your <code>IdentityProviderType</code>
     * is <code>API_GATEWAY</code>. Provides the type of <code>InvocationRole</code>
     * used to authenticate the user account.</p>
     */
    inline IdentityProviderDetails& WithInvocationRole(const Aws::String& value) { SetInvocationRole(value); return *this;}

    /**
     * <p>This parameter is only applicable if your <code>IdentityProviderType</code>
     * is <code>API_GATEWAY</code>. Provides the type of <code>InvocationRole</code>
     * used to authenticate the user account.</p>
     */
    inline IdentityProviderDetails& WithInvocationRole(Aws::String&& value) { SetInvocationRole(std::move(value)); return *this;}

    /**
     * <p>This parameter is only applicable if your <code>IdentityProviderType</code>
     * is <code>API_GATEWAY</code>. Provides the type of <code>InvocationRole</code>
     * used to authenticate the user account.</p>
     */
    inline IdentityProviderDetails& WithInvocationRole(const char* value) { SetInvocationRole(value); return *this;}


    /**
     * <p>The identifier of the Directory Service directory that you want to use as
     * your identity provider.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the Directory Service directory that you want to use as
     * your identity provider.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the Directory Service directory that you want to use as
     * your identity provider.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the Directory Service directory that you want to use as
     * your identity provider.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the Directory Service directory that you want to use as
     * your identity provider.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the Directory Service directory that you want to use as
     * your identity provider.</p>
     */
    inline IdentityProviderDetails& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the Directory Service directory that you want to use as
     * your identity provider.</p>
     */
    inline IdentityProviderDetails& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Directory Service directory that you want to use as
     * your identity provider.</p>
     */
    inline IdentityProviderDetails& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The ARN for a Lambda function to use for the Identity provider.</p>
     */
    inline const Aws::String& GetFunction() const{ return m_function; }

    /**
     * <p>The ARN for a Lambda function to use for the Identity provider.</p>
     */
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }

    /**
     * <p>The ARN for a Lambda function to use for the Identity provider.</p>
     */
    inline void SetFunction(const Aws::String& value) { m_functionHasBeenSet = true; m_function = value; }

    /**
     * <p>The ARN for a Lambda function to use for the Identity provider.</p>
     */
    inline void SetFunction(Aws::String&& value) { m_functionHasBeenSet = true; m_function = std::move(value); }

    /**
     * <p>The ARN for a Lambda function to use for the Identity provider.</p>
     */
    inline void SetFunction(const char* value) { m_functionHasBeenSet = true; m_function.assign(value); }

    /**
     * <p>The ARN for a Lambda function to use for the Identity provider.</p>
     */
    inline IdentityProviderDetails& WithFunction(const Aws::String& value) { SetFunction(value); return *this;}

    /**
     * <p>The ARN for a Lambda function to use for the Identity provider.</p>
     */
    inline IdentityProviderDetails& WithFunction(Aws::String&& value) { SetFunction(std::move(value)); return *this;}

    /**
     * <p>The ARN for a Lambda function to use for the Identity provider.</p>
     */
    inline IdentityProviderDetails& WithFunction(const char* value) { SetFunction(value); return *this;}


    /**
     * <p>For SFTP-enabled servers, and for custom identity providers <i>only</i>, you
     * can specify whether to authenticate using a password, SSH key pair, or both.</p>
     * <ul> <li> <p> <code>PASSWORD</code> - users must provide their password to
     * connect.</p> </li> <li> <p> <code>PUBLIC_KEY</code> - users must provide their
     * private key to connect.</p> </li> <li> <p> <code>PUBLIC_KEY_OR_PASSWORD</code> -
     * users can authenticate with either their password or their key. This is the
     * default value.</p> </li> <li> <p> <code>PUBLIC_KEY_AND_PASSWORD</code> - users
     * must provide both their private key and their password to connect. The server
     * checks the key first, and then if the key is valid, the system prompts for a
     * password. If the private key provided does not match the public key that is
     * stored, authentication fails.</p> </li> </ul>
     */
    inline const SftpAuthenticationMethods& GetSftpAuthenticationMethods() const{ return m_sftpAuthenticationMethods; }

    /**
     * <p>For SFTP-enabled servers, and for custom identity providers <i>only</i>, you
     * can specify whether to authenticate using a password, SSH key pair, or both.</p>
     * <ul> <li> <p> <code>PASSWORD</code> - users must provide their password to
     * connect.</p> </li> <li> <p> <code>PUBLIC_KEY</code> - users must provide their
     * private key to connect.</p> </li> <li> <p> <code>PUBLIC_KEY_OR_PASSWORD</code> -
     * users can authenticate with either their password or their key. This is the
     * default value.</p> </li> <li> <p> <code>PUBLIC_KEY_AND_PASSWORD</code> - users
     * must provide both their private key and their password to connect. The server
     * checks the key first, and then if the key is valid, the system prompts for a
     * password. If the private key provided does not match the public key that is
     * stored, authentication fails.</p> </li> </ul>
     */
    inline bool SftpAuthenticationMethodsHasBeenSet() const { return m_sftpAuthenticationMethodsHasBeenSet; }

    /**
     * <p>For SFTP-enabled servers, and for custom identity providers <i>only</i>, you
     * can specify whether to authenticate using a password, SSH key pair, or both.</p>
     * <ul> <li> <p> <code>PASSWORD</code> - users must provide their password to
     * connect.</p> </li> <li> <p> <code>PUBLIC_KEY</code> - users must provide their
     * private key to connect.</p> </li> <li> <p> <code>PUBLIC_KEY_OR_PASSWORD</code> -
     * users can authenticate with either their password or their key. This is the
     * default value.</p> </li> <li> <p> <code>PUBLIC_KEY_AND_PASSWORD</code> - users
     * must provide both their private key and their password to connect. The server
     * checks the key first, and then if the key is valid, the system prompts for a
     * password. If the private key provided does not match the public key that is
     * stored, authentication fails.</p> </li> </ul>
     */
    inline void SetSftpAuthenticationMethods(const SftpAuthenticationMethods& value) { m_sftpAuthenticationMethodsHasBeenSet = true; m_sftpAuthenticationMethods = value; }

    /**
     * <p>For SFTP-enabled servers, and for custom identity providers <i>only</i>, you
     * can specify whether to authenticate using a password, SSH key pair, or both.</p>
     * <ul> <li> <p> <code>PASSWORD</code> - users must provide their password to
     * connect.</p> </li> <li> <p> <code>PUBLIC_KEY</code> - users must provide their
     * private key to connect.</p> </li> <li> <p> <code>PUBLIC_KEY_OR_PASSWORD</code> -
     * users can authenticate with either their password or their key. This is the
     * default value.</p> </li> <li> <p> <code>PUBLIC_KEY_AND_PASSWORD</code> - users
     * must provide both their private key and their password to connect. The server
     * checks the key first, and then if the key is valid, the system prompts for a
     * password. If the private key provided does not match the public key that is
     * stored, authentication fails.</p> </li> </ul>
     */
    inline void SetSftpAuthenticationMethods(SftpAuthenticationMethods&& value) { m_sftpAuthenticationMethodsHasBeenSet = true; m_sftpAuthenticationMethods = std::move(value); }

    /**
     * <p>For SFTP-enabled servers, and for custom identity providers <i>only</i>, you
     * can specify whether to authenticate using a password, SSH key pair, or both.</p>
     * <ul> <li> <p> <code>PASSWORD</code> - users must provide their password to
     * connect.</p> </li> <li> <p> <code>PUBLIC_KEY</code> - users must provide their
     * private key to connect.</p> </li> <li> <p> <code>PUBLIC_KEY_OR_PASSWORD</code> -
     * users can authenticate with either their password or their key. This is the
     * default value.</p> </li> <li> <p> <code>PUBLIC_KEY_AND_PASSWORD</code> - users
     * must provide both their private key and their password to connect. The server
     * checks the key first, and then if the key is valid, the system prompts for a
     * password. If the private key provided does not match the public key that is
     * stored, authentication fails.</p> </li> </ul>
     */
    inline IdentityProviderDetails& WithSftpAuthenticationMethods(const SftpAuthenticationMethods& value) { SetSftpAuthenticationMethods(value); return *this;}

    /**
     * <p>For SFTP-enabled servers, and for custom identity providers <i>only</i>, you
     * can specify whether to authenticate using a password, SSH key pair, or both.</p>
     * <ul> <li> <p> <code>PASSWORD</code> - users must provide their password to
     * connect.</p> </li> <li> <p> <code>PUBLIC_KEY</code> - users must provide their
     * private key to connect.</p> </li> <li> <p> <code>PUBLIC_KEY_OR_PASSWORD</code> -
     * users can authenticate with either their password or their key. This is the
     * default value.</p> </li> <li> <p> <code>PUBLIC_KEY_AND_PASSWORD</code> - users
     * must provide both their private key and their password to connect. The server
     * checks the key first, and then if the key is valid, the system prompts for a
     * password. If the private key provided does not match the public key that is
     * stored, authentication fails.</p> </li> </ul>
     */
    inline IdentityProviderDetails& WithSftpAuthenticationMethods(SftpAuthenticationMethods&& value) { SetSftpAuthenticationMethods(std::move(value)); return *this;}

  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_invocationRole;
    bool m_invocationRoleHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_function;
    bool m_functionHasBeenSet = false;

    SftpAuthenticationMethods m_sftpAuthenticationMethods;
    bool m_sftpAuthenticationMethodsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
