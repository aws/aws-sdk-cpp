/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/ThemeState.h>
#include <aws/appstream/model/ThemeStyling.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appstream/model/ThemeFooterLink.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>The custom branding theme, which might include a custom logo, website links,
   * and other branding to display to users.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/Theme">AWS API
   * Reference</a></p>
   */
  class Theme
  {
  public:
    AWS_APPSTREAM_API Theme();
    AWS_APPSTREAM_API Theme(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Theme& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The stack that has the custom branding theme.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }
    inline Theme& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}
    inline Theme& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}
    inline Theme& WithStackName(const char* value) { SetStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the theme.</p>
     */
    inline const ThemeState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ThemeState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ThemeState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Theme& WithState(const ThemeState& value) { SetState(value); return *this;}
    inline Theme& WithState(ThemeState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The browser tab page title.</p>
     */
    inline const Aws::String& GetThemeTitleText() const{ return m_themeTitleText; }
    inline bool ThemeTitleTextHasBeenSet() const { return m_themeTitleTextHasBeenSet; }
    inline void SetThemeTitleText(const Aws::String& value) { m_themeTitleTextHasBeenSet = true; m_themeTitleText = value; }
    inline void SetThemeTitleText(Aws::String&& value) { m_themeTitleTextHasBeenSet = true; m_themeTitleText = std::move(value); }
    inline void SetThemeTitleText(const char* value) { m_themeTitleTextHasBeenSet = true; m_themeTitleText.assign(value); }
    inline Theme& WithThemeTitleText(const Aws::String& value) { SetThemeTitleText(value); return *this;}
    inline Theme& WithThemeTitleText(Aws::String&& value) { SetThemeTitleText(std::move(value)); return *this;}
    inline Theme& WithThemeTitleText(const char* value) { SetThemeTitleText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that is used for the website links, text, buttons, and catalog page
     * background.</p>
     */
    inline const ThemeStyling& GetThemeStyling() const{ return m_themeStyling; }
    inline bool ThemeStylingHasBeenSet() const { return m_themeStylingHasBeenSet; }
    inline void SetThemeStyling(const ThemeStyling& value) { m_themeStylingHasBeenSet = true; m_themeStyling = value; }
    inline void SetThemeStyling(ThemeStyling&& value) { m_themeStylingHasBeenSet = true; m_themeStyling = std::move(value); }
    inline Theme& WithThemeStyling(const ThemeStyling& value) { SetThemeStyling(value); return *this;}
    inline Theme& WithThemeStyling(ThemeStyling&& value) { SetThemeStyling(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The website links that display in the catalog page footer.</p>
     */
    inline const Aws::Vector<ThemeFooterLink>& GetThemeFooterLinks() const{ return m_themeFooterLinks; }
    inline bool ThemeFooterLinksHasBeenSet() const { return m_themeFooterLinksHasBeenSet; }
    inline void SetThemeFooterLinks(const Aws::Vector<ThemeFooterLink>& value) { m_themeFooterLinksHasBeenSet = true; m_themeFooterLinks = value; }
    inline void SetThemeFooterLinks(Aws::Vector<ThemeFooterLink>&& value) { m_themeFooterLinksHasBeenSet = true; m_themeFooterLinks = std::move(value); }
    inline Theme& WithThemeFooterLinks(const Aws::Vector<ThemeFooterLink>& value) { SetThemeFooterLinks(value); return *this;}
    inline Theme& WithThemeFooterLinks(Aws::Vector<ThemeFooterLink>&& value) { SetThemeFooterLinks(std::move(value)); return *this;}
    inline Theme& AddThemeFooterLinks(const ThemeFooterLink& value) { m_themeFooterLinksHasBeenSet = true; m_themeFooterLinks.push_back(value); return *this; }
    inline Theme& AddThemeFooterLinks(ThemeFooterLink&& value) { m_themeFooterLinksHasBeenSet = true; m_themeFooterLinks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The URL of the logo that displays in the catalog page header.</p>
     */
    inline const Aws::String& GetThemeOrganizationLogoURL() const{ return m_themeOrganizationLogoURL; }
    inline bool ThemeOrganizationLogoURLHasBeenSet() const { return m_themeOrganizationLogoURLHasBeenSet; }
    inline void SetThemeOrganizationLogoURL(const Aws::String& value) { m_themeOrganizationLogoURLHasBeenSet = true; m_themeOrganizationLogoURL = value; }
    inline void SetThemeOrganizationLogoURL(Aws::String&& value) { m_themeOrganizationLogoURLHasBeenSet = true; m_themeOrganizationLogoURL = std::move(value); }
    inline void SetThemeOrganizationLogoURL(const char* value) { m_themeOrganizationLogoURLHasBeenSet = true; m_themeOrganizationLogoURL.assign(value); }
    inline Theme& WithThemeOrganizationLogoURL(const Aws::String& value) { SetThemeOrganizationLogoURL(value); return *this;}
    inline Theme& WithThemeOrganizationLogoURL(Aws::String&& value) { SetThemeOrganizationLogoURL(std::move(value)); return *this;}
    inline Theme& WithThemeOrganizationLogoURL(const char* value) { SetThemeOrganizationLogoURL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the icon that displays at the top of a user's browser tab during
     * streaming sessions.</p>
     */
    inline const Aws::String& GetThemeFaviconURL() const{ return m_themeFaviconURL; }
    inline bool ThemeFaviconURLHasBeenSet() const { return m_themeFaviconURLHasBeenSet; }
    inline void SetThemeFaviconURL(const Aws::String& value) { m_themeFaviconURLHasBeenSet = true; m_themeFaviconURL = value; }
    inline void SetThemeFaviconURL(Aws::String&& value) { m_themeFaviconURLHasBeenSet = true; m_themeFaviconURL = std::move(value); }
    inline void SetThemeFaviconURL(const char* value) { m_themeFaviconURLHasBeenSet = true; m_themeFaviconURL.assign(value); }
    inline Theme& WithThemeFaviconURL(const Aws::String& value) { SetThemeFaviconURL(value); return *this;}
    inline Theme& WithThemeFaviconURL(Aws::String&& value) { SetThemeFaviconURL(std::move(value)); return *this;}
    inline Theme& WithThemeFaviconURL(const char* value) { SetThemeFaviconURL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the theme was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline Theme& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline Theme& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    ThemeState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_themeTitleText;
    bool m_themeTitleTextHasBeenSet = false;

    ThemeStyling m_themeStyling;
    bool m_themeStylingHasBeenSet = false;

    Aws::Vector<ThemeFooterLink> m_themeFooterLinks;
    bool m_themeFooterLinksHasBeenSet = false;

    Aws::String m_themeOrganizationLogoURL;
    bool m_themeOrganizationLogoURLHasBeenSet = false;

    Aws::String m_themeFaviconURL;
    bool m_themeFaviconURLHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
