/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ThemeFooterLink.h>
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

ThemeFooterLink::ThemeFooterLink(JsonView jsonValue)
{
  *this = jsonValue;
}

ThemeFooterLink& ThemeFooterLink::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FooterLinkURL"))
  {
    m_footerLinkURL = jsonValue.GetString("FooterLinkURL");
    m_footerLinkURLHasBeenSet = true;
  }
  return *this;
}

JsonValue ThemeFooterLink::Jsonize() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_footerLinkURLHasBeenSet)
  {
   payload.WithString("FooterLinkURL", m_footerLinkURL);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
