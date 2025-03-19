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
#include <aws/appstream/model/ThemeFooterLink.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class CreateThemeForStackRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API CreateThemeForStackRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateThemeForStack"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the stack for the theme.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    CreateThemeForStackRequest& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The links that are displayed in the footer of the streaming application
     * catalog page. These links are helpful resources for users, such as the
     * organization's IT support and product marketing sites.</p>
     */
    inline const Aws::Vector<ThemeFooterLink>& GetFooterLinks() const { return m_footerLinks; }
    inline bool FooterLinksHasBeenSet() const { return m_footerLinksHasBeenSet; }
    template<typename FooterLinksT = Aws::Vector<ThemeFooterLink>>
    void SetFooterLinks(FooterLinksT&& value) { m_footerLinksHasBeenSet = true; m_footerLinks = std::forward<FooterLinksT>(value); }
    template<typename FooterLinksT = Aws::Vector<ThemeFooterLink>>
    CreateThemeForStackRequest& WithFooterLinks(FooterLinksT&& value) { SetFooterLinks(std::forward<FooterLinksT>(value)); return *this;}
    template<typename FooterLinksT = ThemeFooterLink>
    CreateThemeForStackRequest& AddFooterLinks(FooterLinksT&& value) { m_footerLinksHasBeenSet = true; m_footerLinks.emplace_back(std::forward<FooterLinksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The title that is displayed at the top of the browser tab during users'
     * application streaming sessions.</p>
     */
    inline const Aws::String& GetTitleText() const { return m_titleText; }
    inline bool TitleTextHasBeenSet() const { return m_titleTextHasBeenSet; }
    template<typename TitleTextT = Aws::String>
    void SetTitleText(TitleTextT&& value) { m_titleTextHasBeenSet = true; m_titleText = std::forward<TitleTextT>(value); }
    template<typename TitleTextT = Aws::String>
    CreateThemeForStackRequest& WithTitleText(TitleTextT&& value) { SetTitleText(std::forward<TitleTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color theme that is applied to website links, text, and buttons. These
     * colors are also applied as accents in the background for the streaming
     * application catalog page.</p>
     */
    inline ThemeStyling GetThemeStyling() const { return m_themeStyling; }
    inline bool ThemeStylingHasBeenSet() const { return m_themeStylingHasBeenSet; }
    inline void SetThemeStyling(ThemeStyling value) { m_themeStylingHasBeenSet = true; m_themeStyling = value; }
    inline CreateThemeForStackRequest& WithThemeStyling(ThemeStyling value) { SetThemeStyling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The organization logo that appears on the streaming application catalog
     * page.</p>
     */
    inline const S3Location& GetOrganizationLogoS3Location() const { return m_organizationLogoS3Location; }
    inline bool OrganizationLogoS3LocationHasBeenSet() const { return m_organizationLogoS3LocationHasBeenSet; }
    template<typename OrganizationLogoS3LocationT = S3Location>
    void SetOrganizationLogoS3Location(OrganizationLogoS3LocationT&& value) { m_organizationLogoS3LocationHasBeenSet = true; m_organizationLogoS3Location = std::forward<OrganizationLogoS3LocationT>(value); }
    template<typename OrganizationLogoS3LocationT = S3Location>
    CreateThemeForStackRequest& WithOrganizationLogoS3Location(OrganizationLogoS3LocationT&& value) { SetOrganizationLogoS3Location(std::forward<OrganizationLogoS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 location of the favicon. The favicon enables users to recognize their
     * application streaming site in a browser full of tabs or bookmarks. It is
     * displayed at the top of the browser tab for the application streaming site
     * during users' streaming sessions.</p>
     */
    inline const S3Location& GetFaviconS3Location() const { return m_faviconS3Location; }
    inline bool FaviconS3LocationHasBeenSet() const { return m_faviconS3LocationHasBeenSet; }
    template<typename FaviconS3LocationT = S3Location>
    void SetFaviconS3Location(FaviconS3LocationT&& value) { m_faviconS3LocationHasBeenSet = true; m_faviconS3Location = std::forward<FaviconS3LocationT>(value); }
    template<typename FaviconS3LocationT = S3Location>
    CreateThemeForStackRequest& WithFaviconS3Location(FaviconS3LocationT&& value) { SetFaviconS3Location(std::forward<FaviconS3LocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::Vector<ThemeFooterLink> m_footerLinks;
    bool m_footerLinksHasBeenSet = false;

    Aws::String m_titleText;
    bool m_titleTextHasBeenSet = false;

    ThemeStyling m_themeStyling{ThemeStyling::NOT_SET};
    bool m_themeStylingHasBeenSet = false;

    S3Location m_organizationLogoS3Location;
    bool m_organizationLogoS3LocationHasBeenSet = false;

    S3Location m_faviconS3Location;
    bool m_faviconS3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
