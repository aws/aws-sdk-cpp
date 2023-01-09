/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/workspaces-web/model/AuthenticationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class UpdatePortalRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API UpdatePortalRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePortal"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;


    /**
     * <p>The type of authentication integration points used when signing into the web
     * portal. Defaults to <code>Standard</code>.</p> <p> <code>Standard</code> web
     * portals are authenticated directly through your identity provider. You need to
     * call <code>CreateIdentityProvider</code> to integrate your identity provider
     * with your web portal. User and group access to your web portal is controlled
     * through your identity provider.</p> <p> <code>IAM_Identity_Center</code> web
     * portals are authenticated through AWS IAM Identity Center (successor to AWS
     * Single Sign-On). They provide additional features, such as IdP-initiated
     * authentication. Identity sources (including external identity provider
     * integration), plus user and group access to your web portal, can be configured
     * in the IAM Identity Center.</p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p>The type of authentication integration points used when signing into the web
     * portal. Defaults to <code>Standard</code>.</p> <p> <code>Standard</code> web
     * portals are authenticated directly through your identity provider. You need to
     * call <code>CreateIdentityProvider</code> to integrate your identity provider
     * with your web portal. User and group access to your web portal is controlled
     * through your identity provider.</p> <p> <code>IAM_Identity_Center</code> web
     * portals are authenticated through AWS IAM Identity Center (successor to AWS
     * Single Sign-On). They provide additional features, such as IdP-initiated
     * authentication. Identity sources (including external identity provider
     * integration), plus user and group access to your web portal, can be configured
     * in the IAM Identity Center.</p>
     */
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }

    /**
     * <p>The type of authentication integration points used when signing into the web
     * portal. Defaults to <code>Standard</code>.</p> <p> <code>Standard</code> web
     * portals are authenticated directly through your identity provider. You need to
     * call <code>CreateIdentityProvider</code> to integrate your identity provider
     * with your web portal. User and group access to your web portal is controlled
     * through your identity provider.</p> <p> <code>IAM_Identity_Center</code> web
     * portals are authenticated through AWS IAM Identity Center (successor to AWS
     * Single Sign-On). They provide additional features, such as IdP-initiated
     * authentication. Identity sources (including external identity provider
     * integration), plus user and group access to your web portal, can be configured
     * in the IAM Identity Center.</p>
     */
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }

    /**
     * <p>The type of authentication integration points used when signing into the web
     * portal. Defaults to <code>Standard</code>.</p> <p> <code>Standard</code> web
     * portals are authenticated directly through your identity provider. You need to
     * call <code>CreateIdentityProvider</code> to integrate your identity provider
     * with your web portal. User and group access to your web portal is controlled
     * through your identity provider.</p> <p> <code>IAM_Identity_Center</code> web
     * portals are authenticated through AWS IAM Identity Center (successor to AWS
     * Single Sign-On). They provide additional features, such as IdP-initiated
     * authentication. Identity sources (including external identity provider
     * integration), plus user and group access to your web portal, can be configured
     * in the IAM Identity Center.</p>
     */
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }

    /**
     * <p>The type of authentication integration points used when signing into the web
     * portal. Defaults to <code>Standard</code>.</p> <p> <code>Standard</code> web
     * portals are authenticated directly through your identity provider. You need to
     * call <code>CreateIdentityProvider</code> to integrate your identity provider
     * with your web portal. User and group access to your web portal is controlled
     * through your identity provider.</p> <p> <code>IAM_Identity_Center</code> web
     * portals are authenticated through AWS IAM Identity Center (successor to AWS
     * Single Sign-On). They provide additional features, such as IdP-initiated
     * authentication. Identity sources (including external identity provider
     * integration), plus user and group access to your web portal, can be configured
     * in the IAM Identity Center.</p>
     */
    inline UpdatePortalRequest& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>The type of authentication integration points used when signing into the web
     * portal. Defaults to <code>Standard</code>.</p> <p> <code>Standard</code> web
     * portals are authenticated directly through your identity provider. You need to
     * call <code>CreateIdentityProvider</code> to integrate your identity provider
     * with your web portal. User and group access to your web portal is controlled
     * through your identity provider.</p> <p> <code>IAM_Identity_Center</code> web
     * portals are authenticated through AWS IAM Identity Center (successor to AWS
     * Single Sign-On). They provide additional features, such as IdP-initiated
     * authentication. Identity sources (including external identity provider
     * integration), plus user and group access to your web portal, can be configured
     * in the IAM Identity Center.</p>
     */
    inline UpdatePortalRequest& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}


    /**
     * <p>The name of the web portal. This is not visible to users who log into the web
     * portal.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the web portal. This is not visible to users who log into the web
     * portal.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of the web portal. This is not visible to users who log into the web
     * portal.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the web portal. This is not visible to users who log into the web
     * portal.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the web portal. This is not visible to users who log into the web
     * portal.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the web portal. This is not visible to users who log into the web
     * portal.</p>
     */
    inline UpdatePortalRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the web portal. This is not visible to users who log into the web
     * portal.</p>
     */
    inline UpdatePortalRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the web portal. This is not visible to users who log into the web
     * portal.</p>
     */
    inline UpdatePortalRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The ARN of the web portal.</p>
     */
    inline const Aws::String& GetPortalArn() const{ return m_portalArn; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline bool PortalArnHasBeenSet() const { return m_portalArnHasBeenSet; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(const Aws::String& value) { m_portalArnHasBeenSet = true; m_portalArn = value; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(Aws::String&& value) { m_portalArnHasBeenSet = true; m_portalArn = std::move(value); }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(const char* value) { m_portalArnHasBeenSet = true; m_portalArn.assign(value); }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline UpdatePortalRequest& WithPortalArn(const Aws::String& value) { SetPortalArn(value); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline UpdatePortalRequest& WithPortalArn(Aws::String&& value) { SetPortalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline UpdatePortalRequest& WithPortalArn(const char* value) { SetPortalArn(value); return *this;}

  private:

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_portalArn;
    bool m_portalArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
