/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/ThemeStyling.h>
#include <aws/appstream/model/S3Location.h>
#include <aws/appstream/model/ThemeState.h>
#include <aws/appstream/model/ThemeFooterLink.h>
#include <aws/appstream/model/ThemeAttribute.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class UpdateThemeForStackRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API UpdateThemeForStackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateThemeForStack"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the stack for the theme.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }
    inline UpdateThemeForStackRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}
    inline UpdateThemeForStackRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}
    inline UpdateThemeForStackRequest& WithStackName(const char* value) { SetStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The links that are displayed in the footer of the streaming application
     * catalog page. These links are helpful resources for users, such as the
     * organization's IT support and product marketing sites.</p>
     */
    inline const Aws::Vector<ThemeFooterLink>& GetFooterLinks() const{ return m_footerLinks; }
    inline bool FooterLinksHasBeenSet() const { return m_footerLinksHasBeenSet; }
    inline void SetFooterLinks(const Aws::Vector<ThemeFooterLink>& value) { m_footerLinksHasBeenSet = true; m_footerLinks = value; }
    inline void SetFooterLinks(Aws::Vector<ThemeFooterLink>&& value) { m_footerLinksHasBeenSet = true; m_footerLinks = std::move(value); }
    inline UpdateThemeForStackRequest& WithFooterLinks(const Aws::Vector<ThemeFooterLink>& value) { SetFooterLinks(value); return *this;}
    inline UpdateThemeForStackRequest& WithFooterLinks(Aws::Vector<ThemeFooterLink>&& value) { SetFooterLinks(std::move(value)); return *this;}
    inline UpdateThemeForStackRequest& AddFooterLinks(const ThemeFooterLink& value) { m_footerLinksHasBeenSet = true; m_footerLinks.push_back(value); return *this; }
    inline UpdateThemeForStackRequest& AddFooterLinks(ThemeFooterLink&& value) { m_footerLinksHasBeenSet = true; m_footerLinks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The title that is displayed at the top of the browser tab during users'
     * application streaming sessions.</p>
     */
    inline const Aws::String& GetTitleText() const{ return m_titleText; }
    inline bool TitleTextHasBeenSet() const { return m_titleTextHasBeenSet; }
    inline void SetTitleText(const Aws::String& value) { m_titleTextHasBeenSet = true; m_titleText = value; }
    inline void SetTitleText(Aws::String&& value) { m_titleTextHasBeenSet = true; m_titleText = std::move(value); }
    inline void SetTitleText(const char* value) { m_titleTextHasBeenSet = true; m_titleText.assign(value); }
    inline UpdateThemeForStackRequest& WithTitleText(const Aws::String& value) { SetTitleText(value); return *this;}
    inline UpdateThemeForStackRequest& WithTitleText(Aws::String&& value) { SetTitleText(std::move(value)); return *this;}
    inline UpdateThemeForStackRequest& WithTitleText(const char* value) { SetTitleText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color theme that is applied to website links, text, and buttons. These
     * colors are also applied as accents in the background for the streaming
     * application catalog page.</p>
     */
    inline const ThemeStyling& GetThemeStyling() const{ return m_themeStyling; }
    inline bool ThemeStylingHasBeenSet() const { return m_themeStylingHasBeenSet; }
    inline void SetThemeStyling(const ThemeStyling& value) { m_themeStylingHasBeenSet = true; m_themeStyling = value; }
    inline void SetThemeStyling(ThemeStyling&& value) { m_themeStylingHasBeenSet = true; m_themeStyling = std::move(value); }
    inline UpdateThemeForStackRequest& WithThemeStyling(const ThemeStyling& value) { SetThemeStyling(value); return *this;}
    inline UpdateThemeForStackRequest& WithThemeStyling(ThemeStyling&& value) { SetThemeStyling(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The organization logo that appears on the streaming application catalog
     * page.</p>
     */
    inline const S3Location& GetOrganizationLogoS3Location() const{ return m_organizationLogoS3Location; }
    inline bool OrganizationLogoS3LocationHasBeenSet() const { return m_organizationLogoS3LocationHasBeenSet; }
    inline void SetOrganizationLogoS3Location(const S3Location& value) { m_organizationLogoS3LocationHasBeenSet = true; m_organizationLogoS3Location = value; }
    inline void SetOrganizationLogoS3Location(S3Location&& value) { m_organizationLogoS3LocationHasBeenSet = true; m_organizationLogoS3Location = std::move(value); }
    inline UpdateThemeForStackRequest& WithOrganizationLogoS3Location(const S3Location& value) { SetOrganizationLogoS3Location(value); return *this;}
    inline UpdateThemeForStackRequest& WithOrganizationLogoS3Location(S3Location&& value) { SetOrganizationLogoS3Location(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 location of the favicon. The favicon enables users to recognize their
     * application streaming site in a browser full of tabs or bookmarks. It is
     * displayed at the top of the browser tab for the application streaming site
     * during users' streaming sessions.</p>
     */
    inline const S3Location& GetFaviconS3Location() const{ return m_faviconS3Location; }
    inline bool FaviconS3LocationHasBeenSet() const { return m_faviconS3LocationHasBeenSet; }
    inline void SetFaviconS3Location(const S3Location& value) { m_faviconS3LocationHasBeenSet = true; m_faviconS3Location = value; }
    inline void SetFaviconS3Location(S3Location&& value) { m_faviconS3LocationHasBeenSet = true; m_faviconS3Location = std::move(value); }
    inline UpdateThemeForStackRequest& WithFaviconS3Location(const S3Location& value) { SetFaviconS3Location(value); return *this;}
    inline UpdateThemeForStackRequest& WithFaviconS3Location(S3Location&& value) { SetFaviconS3Location(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether custom branding should be applied to catalog page or
     * not.</p>
     */
    inline const ThemeState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ThemeState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ThemeState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline UpdateThemeForStackRequest& WithState(const ThemeState& value) { SetState(value); return *this;}
    inline UpdateThemeForStackRequest& WithState(ThemeState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes to delete.</p>
     */
    inline const Aws::Vector<ThemeAttribute>& GetAttributesToDelete() const{ return m_attributesToDelete; }
    inline bool AttributesToDeleteHasBeenSet() const { return m_attributesToDeleteHasBeenSet; }
    inline void SetAttributesToDelete(const Aws::Vector<ThemeAttribute>& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete = value; }
    inline void SetAttributesToDelete(Aws::Vector<ThemeAttribute>&& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete = std::move(value); }
    inline UpdateThemeForStackRequest& WithAttributesToDelete(const Aws::Vector<ThemeAttribute>& value) { SetAttributesToDelete(value); return *this;}
    inline UpdateThemeForStackRequest& WithAttributesToDelete(Aws::Vector<ThemeAttribute>&& value) { SetAttributesToDelete(std::move(value)); return *this;}
    inline UpdateThemeForStackRequest& AddAttributesToDelete(const ThemeAttribute& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete.push_back(value); return *this; }
    inline UpdateThemeForStackRequest& AddAttributesToDelete(ThemeAttribute&& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::Vector<ThemeFooterLink> m_footerLinks;
    bool m_footerLinksHasBeenSet = false;

    Aws::String m_titleText;
    bool m_titleTextHasBeenSet = false;

    ThemeStyling m_themeStyling;
    bool m_themeStylingHasBeenSet = false;

    S3Location m_organizationLogoS3Location;
    bool m_organizationLogoS3LocationHasBeenSet = false;

    S3Location m_faviconS3Location;
    bool m_faviconS3LocationHasBeenSet = false;

    ThemeState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<ThemeAttribute> m_attributesToDelete;
    bool m_attributesToDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
