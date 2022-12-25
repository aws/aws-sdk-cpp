/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/sso-oidc/SSOOIDCRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SSOOIDC
{
namespace Model
{

  /**
   */
  class RegisterClientRequest : public SSOOIDCRequest
  {
  public:
    AWS_SSOOIDC_API RegisterClientRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterClient"; }

    AWS_SSOOIDC_API Aws::String SerializePayload() const override;


    /**
     * <p>The friendly name of the client.</p>
     */
    inline const Aws::String& GetClientName() const{ return m_clientName; }

    /**
     * <p>The friendly name of the client.</p>
     */
    inline bool ClientNameHasBeenSet() const { return m_clientNameHasBeenSet; }

    /**
     * <p>The friendly name of the client.</p>
     */
    inline void SetClientName(const Aws::String& value) { m_clientNameHasBeenSet = true; m_clientName = value; }

    /**
     * <p>The friendly name of the client.</p>
     */
    inline void SetClientName(Aws::String&& value) { m_clientNameHasBeenSet = true; m_clientName = std::move(value); }

    /**
     * <p>The friendly name of the client.</p>
     */
    inline void SetClientName(const char* value) { m_clientNameHasBeenSet = true; m_clientName.assign(value); }

    /**
     * <p>The friendly name of the client.</p>
     */
    inline RegisterClientRequest& WithClientName(const Aws::String& value) { SetClientName(value); return *this;}

    /**
     * <p>The friendly name of the client.</p>
     */
    inline RegisterClientRequest& WithClientName(Aws::String&& value) { SetClientName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the client.</p>
     */
    inline RegisterClientRequest& WithClientName(const char* value) { SetClientName(value); return *this;}


    /**
     * <p>The type of client. The service supports only <code>public</code> as a client
     * type. Anything other than public will be rejected by the service.</p>
     */
    inline const Aws::String& GetClientType() const{ return m_clientType; }

    /**
     * <p>The type of client. The service supports only <code>public</code> as a client
     * type. Anything other than public will be rejected by the service.</p>
     */
    inline bool ClientTypeHasBeenSet() const { return m_clientTypeHasBeenSet; }

    /**
     * <p>The type of client. The service supports only <code>public</code> as a client
     * type. Anything other than public will be rejected by the service.</p>
     */
    inline void SetClientType(const Aws::String& value) { m_clientTypeHasBeenSet = true; m_clientType = value; }

    /**
     * <p>The type of client. The service supports only <code>public</code> as a client
     * type. Anything other than public will be rejected by the service.</p>
     */
    inline void SetClientType(Aws::String&& value) { m_clientTypeHasBeenSet = true; m_clientType = std::move(value); }

    /**
     * <p>The type of client. The service supports only <code>public</code> as a client
     * type. Anything other than public will be rejected by the service.</p>
     */
    inline void SetClientType(const char* value) { m_clientTypeHasBeenSet = true; m_clientType.assign(value); }

    /**
     * <p>The type of client. The service supports only <code>public</code> as a client
     * type. Anything other than public will be rejected by the service.</p>
     */
    inline RegisterClientRequest& WithClientType(const Aws::String& value) { SetClientType(value); return *this;}

    /**
     * <p>The type of client. The service supports only <code>public</code> as a client
     * type. Anything other than public will be rejected by the service.</p>
     */
    inline RegisterClientRequest& WithClientType(Aws::String&& value) { SetClientType(std::move(value)); return *this;}

    /**
     * <p>The type of client. The service supports only <code>public</code> as a client
     * type. Anything other than public will be rejected by the service.</p>
     */
    inline RegisterClientRequest& WithClientType(const char* value) { SetClientType(value); return *this;}


    /**
     * <p>The list of scopes that are defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScopes() const{ return m_scopes; }

    /**
     * <p>The list of scopes that are defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }

    /**
     * <p>The list of scopes that are defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline void SetScopes(const Aws::Vector<Aws::String>& value) { m_scopesHasBeenSet = true; m_scopes = value; }

    /**
     * <p>The list of scopes that are defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline void SetScopes(Aws::Vector<Aws::String>&& value) { m_scopesHasBeenSet = true; m_scopes = std::move(value); }

    /**
     * <p>The list of scopes that are defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline RegisterClientRequest& WithScopes(const Aws::Vector<Aws::String>& value) { SetScopes(value); return *this;}

    /**
     * <p>The list of scopes that are defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline RegisterClientRequest& WithScopes(Aws::Vector<Aws::String>&& value) { SetScopes(std::move(value)); return *this;}

    /**
     * <p>The list of scopes that are defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline RegisterClientRequest& AddScopes(const Aws::String& value) { m_scopesHasBeenSet = true; m_scopes.push_back(value); return *this; }

    /**
     * <p>The list of scopes that are defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline RegisterClientRequest& AddScopes(Aws::String&& value) { m_scopesHasBeenSet = true; m_scopes.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of scopes that are defined by the client. Upon authorization, this
     * list is used to restrict permissions when granting an access token.</p>
     */
    inline RegisterClientRequest& AddScopes(const char* value) { m_scopesHasBeenSet = true; m_scopes.push_back(value); return *this; }

  private:

    Aws::String m_clientName;
    bool m_clientNameHasBeenSet = false;

    Aws::String m_clientType;
    bool m_clientTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_scopes;
    bool m_scopesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
