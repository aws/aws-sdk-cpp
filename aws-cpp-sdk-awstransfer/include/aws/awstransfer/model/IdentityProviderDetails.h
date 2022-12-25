/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
     * <p>Provides the type of <code>InvocationRole</code> used to authenticate the
     * user account.</p>
     */
    inline const Aws::String& GetInvocationRole() const{ return m_invocationRole; }

    /**
     * <p>Provides the type of <code>InvocationRole</code> used to authenticate the
     * user account.</p>
     */
    inline bool InvocationRoleHasBeenSet() const { return m_invocationRoleHasBeenSet; }

    /**
     * <p>Provides the type of <code>InvocationRole</code> used to authenticate the
     * user account.</p>
     */
    inline void SetInvocationRole(const Aws::String& value) { m_invocationRoleHasBeenSet = true; m_invocationRole = value; }

    /**
     * <p>Provides the type of <code>InvocationRole</code> used to authenticate the
     * user account.</p>
     */
    inline void SetInvocationRole(Aws::String&& value) { m_invocationRoleHasBeenSet = true; m_invocationRole = std::move(value); }

    /**
     * <p>Provides the type of <code>InvocationRole</code> used to authenticate the
     * user account.</p>
     */
    inline void SetInvocationRole(const char* value) { m_invocationRoleHasBeenSet = true; m_invocationRole.assign(value); }

    /**
     * <p>Provides the type of <code>InvocationRole</code> used to authenticate the
     * user account.</p>
     */
    inline IdentityProviderDetails& WithInvocationRole(const Aws::String& value) { SetInvocationRole(value); return *this;}

    /**
     * <p>Provides the type of <code>InvocationRole</code> used to authenticate the
     * user account.</p>
     */
    inline IdentityProviderDetails& WithInvocationRole(Aws::String&& value) { SetInvocationRole(std::move(value)); return *this;}

    /**
     * <p>Provides the type of <code>InvocationRole</code> used to authenticate the
     * user account.</p>
     */
    inline IdentityProviderDetails& WithInvocationRole(const char* value) { SetInvocationRole(value); return *this;}


    /**
     * <p>The identifier of the Directory Service directory that you want to stop
     * sharing.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the Directory Service directory that you want to stop
     * sharing.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the Directory Service directory that you want to stop
     * sharing.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the Directory Service directory that you want to stop
     * sharing.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the Directory Service directory that you want to stop
     * sharing.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the Directory Service directory that you want to stop
     * sharing.</p>
     */
    inline IdentityProviderDetails& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the Directory Service directory that you want to stop
     * sharing.</p>
     */
    inline IdentityProviderDetails& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Directory Service directory that you want to stop
     * sharing.</p>
     */
    inline IdentityProviderDetails& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The ARN for a lambda function to use for the Identity provider.</p>
     */
    inline const Aws::String& GetFunction() const{ return m_function; }

    /**
     * <p>The ARN for a lambda function to use for the Identity provider.</p>
     */
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }

    /**
     * <p>The ARN for a lambda function to use for the Identity provider.</p>
     */
    inline void SetFunction(const Aws::String& value) { m_functionHasBeenSet = true; m_function = value; }

    /**
     * <p>The ARN for a lambda function to use for the Identity provider.</p>
     */
    inline void SetFunction(Aws::String&& value) { m_functionHasBeenSet = true; m_function = std::move(value); }

    /**
     * <p>The ARN for a lambda function to use for the Identity provider.</p>
     */
    inline void SetFunction(const char* value) { m_functionHasBeenSet = true; m_function.assign(value); }

    /**
     * <p>The ARN for a lambda function to use for the Identity provider.</p>
     */
    inline IdentityProviderDetails& WithFunction(const Aws::String& value) { SetFunction(value); return *this;}

    /**
     * <p>The ARN for a lambda function to use for the Identity provider.</p>
     */
    inline IdentityProviderDetails& WithFunction(Aws::String&& value) { SetFunction(std::move(value)); return *this;}

    /**
     * <p>The ARN for a lambda function to use for the Identity provider.</p>
     */
    inline IdentityProviderDetails& WithFunction(const char* value) { SetFunction(value); return *this;}

  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_invocationRole;
    bool m_invocationRoleHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_function;
    bool m_functionHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
