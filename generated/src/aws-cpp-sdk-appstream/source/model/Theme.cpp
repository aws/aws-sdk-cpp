/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/Theme.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

Theme::Theme(JsonView jsonValue)
{
  *this = jsonValue;
}

Theme& Theme::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StackName"))
  {
    m_stackName = jsonValue.GetString("StackName");
    m_stackNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = ThemeStateMapper::GetThemeStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ThemeTitleText"))
  {
    m_themeTitleText = jsonValue.GetString("ThemeTitleText");
    m_themeTitleTextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ThemeStyling"))
  {
    m_themeStyling = ThemeStylingMapper::GetThemeStylingForName(jsonValue.GetString("ThemeStyling"));
    m_themeStylingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ThemeFooterLinks"))
  {
    Aws::Utils::Array<JsonView> themeFooterLinksJsonList = jsonValue.GetArray("ThemeFooterLinks");
    for(unsigned themeFooterLinksIndex = 0; themeFooterLinksIndex < themeFooterLinksJsonList.GetLength(); ++themeFooterLinksIndex)
    {
      m_themeFooterLinks.push_back(themeFooterLinksJsonList[themeFooterLinksIndex].AsObject());
    }
    m_themeFooterLinksHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ThemeOrganizationLogoURL"))
  {
    m_themeOrganizationLogoURL = jsonValue.GetString("ThemeOrganizationLogoURL");
    m_themeOrganizationLogoURLHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ThemeFaviconURL"))
  {
    m_themeFaviconURL = jsonValue.GetString("ThemeFaviconURL");
    m_themeFaviconURLHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue Theme::Jsonize() const
{
  JsonValue payload;

  if(m_stackNameHasBeenSet)
  {
   payload.WithString("StackName", m_stackName);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ThemeStateMapper::GetNameForThemeState(m_state));
  }

  if(m_themeTitleTextHasBeenSet)
  {
   payload.WithString("ThemeTitleText", m_themeTitleText);

  }

  if(m_themeStylingHasBeenSet)
  {
   payload.WithString("ThemeStyling", ThemeStylingMapper::GetNameForThemeStyling(m_themeStyling));
  }

  if(m_themeFooterLinksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> themeFooterLinksJsonList(m_themeFooterLinks.size());
   for(unsigned themeFooterLinksIndex = 0; themeFooterLinksIndex < themeFooterLinksJsonList.GetLength(); ++themeFooterLinksIndex)
   {
     themeFooterLinksJsonList[themeFooterLinksIndex].AsObject(m_themeFooterLinks[themeFooterLinksIndex].Jsonize());
   }
   payload.WithArray("ThemeFooterLinks", std::move(themeFooterLinksJsonList));

  }

  if(m_themeOrganizationLogoURLHasBeenSet)
  {
   payload.WithString("ThemeOrganizationLogoURL", m_themeOrganizationLogoURL);

  }

  if(m_themeFaviconURLHasBeenSet)
  {
   payload.WithString("ThemeFaviconURL", m_themeFaviconURL);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
