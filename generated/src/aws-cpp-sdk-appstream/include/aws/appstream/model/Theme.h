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
    AWS_APPSTREAM_API Theme() = default;
    AWS_APPSTREAM_API Theme(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Theme& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The stack that has the custom branding theme.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    Theme& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the theme.</p>
     */
    inline ThemeState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ThemeState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Theme& WithState(ThemeState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The browser tab page title.</p>
     */
    inline const Aws::String& GetThemeTitleText() const { return m_themeTitleText; }
    inline bool ThemeTitleTextHasBeenSet() const { return m_themeTitleTextHasBeenSet; }
    template<typename ThemeTitleTextT = Aws::String>
    void SetThemeTitleText(ThemeTitleTextT&& value) { m_themeTitleTextHasBeenSet = true; m_themeTitleText = std::forward<ThemeTitleTextT>(value); }
    template<typename ThemeTitleTextT = Aws::String>
    Theme& WithThemeTitleText(ThemeTitleTextT&& value) { SetThemeTitleText(std::forward<ThemeTitleTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that is used for the website links, text, buttons, and catalog page
     * background.</p>
     */
    inline ThemeStyling GetThemeStyling() const { return m_themeStyling; }
    inline bool ThemeStylingHasBeenSet() const { return m_themeStylingHasBeenSet; }
    inline void SetThemeStyling(ThemeStyling value) { m_themeStylingHasBeenSet = true; m_themeStyling = value; }
    inline Theme& WithThemeStyling(ThemeStyling value) { SetThemeStyling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The website links that display in the catalog page footer.</p>
     */
    inline const Aws::Vector<ThemeFooterLink>& GetThemeFooterLinks() const { return m_themeFooterLinks; }
    inline bool ThemeFooterLinksHasBeenSet() const { return m_themeFooterLinksHasBeenSet; }
    template<typename ThemeFooterLinksT = Aws::Vector<ThemeFooterLink>>
    void SetThemeFooterLinks(ThemeFooterLinksT&& value) { m_themeFooterLinksHasBeenSet = true; m_themeFooterLinks = std::forward<ThemeFooterLinksT>(value); }
    template<typename ThemeFooterLinksT = Aws::Vector<ThemeFooterLink>>
    Theme& WithThemeFooterLinks(ThemeFooterLinksT&& value) { SetThemeFooterLinks(std::forward<ThemeFooterLinksT>(value)); return *this;}
    template<typename ThemeFooterLinksT = ThemeFooterLink>
    Theme& AddThemeFooterLinks(ThemeFooterLinksT&& value) { m_themeFooterLinksHasBeenSet = true; m_themeFooterLinks.emplace_back(std::forward<ThemeFooterLinksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The URL of the logo that displays in the catalog page header.</p>
     */
    inline const Aws::String& GetThemeOrganizationLogoURL() const { return m_themeOrganizationLogoURL; }
    inline bool ThemeOrganizationLogoURLHasBeenSet() const { return m_themeOrganizationLogoURLHasBeenSet; }
    template<typename ThemeOrganizationLogoURLT = Aws::String>
    void SetThemeOrganizationLogoURL(ThemeOrganizationLogoURLT&& value) { m_themeOrganizationLogoURLHasBeenSet = true; m_themeOrganizationLogoURL = std::forward<ThemeOrganizationLogoURLT>(value); }
    template<typename ThemeOrganizationLogoURLT = Aws::String>
    Theme& WithThemeOrganizationLogoURL(ThemeOrganizationLogoURLT&& value) { SetThemeOrganizationLogoURL(std::forward<ThemeOrganizationLogoURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the icon that displays at the top of a user's browser tab during
     * streaming sessions.</p>
     */
    inline const Aws::String& GetThemeFaviconURL() const { return m_themeFaviconURL; }
    inline bool ThemeFaviconURLHasBeenSet() const { return m_themeFaviconURLHasBeenSet; }
    template<typename ThemeFaviconURLT = Aws::String>
    void SetThemeFaviconURL(ThemeFaviconURLT&& value) { m_themeFaviconURLHasBeenSet = true; m_themeFaviconURL = std::forward<ThemeFaviconURLT>(value); }
    template<typename ThemeFaviconURLT = Aws::String>
    Theme& WithThemeFaviconURL(ThemeFaviconURLT&& value) { SetThemeFaviconURL(std::forward<ThemeFaviconURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the theme was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    Theme& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    ThemeState m_state{ThemeState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_themeTitleText;
    bool m_themeTitleTextHasBeenSet = false;

    ThemeStyling m_themeStyling{ThemeStyling::NOT_SET};
    bool m_themeStylingHasBeenSet = false;

    Aws::Vector<ThemeFooterLink> m_themeFooterLinks;
    bool m_themeFooterLinksHasBeenSet = false;

    Aws::String m_themeOrganizationLogoURL;
    bool m_themeOrganizationLogoURLHasBeenSet = false;

    Aws::String m_themeFaviconURL;
    bool m_themeFaviconURLHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
