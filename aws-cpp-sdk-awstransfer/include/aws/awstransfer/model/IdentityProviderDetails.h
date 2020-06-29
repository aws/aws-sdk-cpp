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
  class AWS_TRANSFER_API IdentityProviderDetails
  {
  public:
    IdentityProviderDetails();
    IdentityProviderDetails(Aws::Utils::Json::JsonView jsonValue);
    IdentityProviderDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Aws::String m_url;
    bool m_urlHasBeenSet;

    Aws::String m_invocationRole;
    bool m_invocationRoleHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
