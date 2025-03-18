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
    AWS_TRANSFER_API IdentityProviderDetails() = default;
    AWS_TRANSFER_API IdentityProviderDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API IdentityProviderDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides the location of the service endpoint used to authenticate users.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    IdentityProviderDetails& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is only applicable if your <code>IdentityProviderType</code>
     * is <code>API_GATEWAY</code>. Provides the type of <code>InvocationRole</code>
     * used to authenticate the user account.</p>
     */
    inline const Aws::String& GetInvocationRole() const { return m_invocationRole; }
    inline bool InvocationRoleHasBeenSet() const { return m_invocationRoleHasBeenSet; }
    template<typename InvocationRoleT = Aws::String>
    void SetInvocationRole(InvocationRoleT&& value) { m_invocationRoleHasBeenSet = true; m_invocationRole = std::forward<InvocationRoleT>(value); }
    template<typename InvocationRoleT = Aws::String>
    IdentityProviderDetails& WithInvocationRole(InvocationRoleT&& value) { SetInvocationRole(std::forward<InvocationRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Directory Service directory that you want to use as
     * your identity provider.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    IdentityProviderDetails& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for a Lambda function to use for the Identity provider.</p>
     */
    inline const Aws::String& GetFunction() const { return m_function; }
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }
    template<typename FunctionT = Aws::String>
    void SetFunction(FunctionT&& value) { m_functionHasBeenSet = true; m_function = std::forward<FunctionT>(value); }
    template<typename FunctionT = Aws::String>
    IdentityProviderDetails& WithFunction(FunctionT&& value) { SetFunction(std::forward<FunctionT>(value)); return *this;}
    ///@}

    ///@{
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
    inline SftpAuthenticationMethods GetSftpAuthenticationMethods() const { return m_sftpAuthenticationMethods; }
    inline bool SftpAuthenticationMethodsHasBeenSet() const { return m_sftpAuthenticationMethodsHasBeenSet; }
    inline void SetSftpAuthenticationMethods(SftpAuthenticationMethods value) { m_sftpAuthenticationMethodsHasBeenSet = true; m_sftpAuthenticationMethods = value; }
    inline IdentityProviderDetails& WithSftpAuthenticationMethods(SftpAuthenticationMethods value) { SetSftpAuthenticationMethods(value); return *this;}
    ///@}
  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_invocationRole;
    bool m_invocationRoleHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_function;
    bool m_functionHasBeenSet = false;

    SftpAuthenticationMethods m_sftpAuthenticationMethods{SftpAuthenticationMethods::NOT_SET};
    bool m_sftpAuthenticationMethodsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
