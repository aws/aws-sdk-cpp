/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/IosClientBrandingAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

IosClientBrandingAttributes::IosClientBrandingAttributes() : 
    m_logoUrlHasBeenSet(false),
    m_logo2xUrlHasBeenSet(false),
    m_logo3xUrlHasBeenSet(false),
    m_supportEmailHasBeenSet(false),
    m_supportLinkHasBeenSet(false),
    m_forgotPasswordLinkHasBeenSet(false),
    m_loginMessageHasBeenSet(false)
{
}

IosClientBrandingAttributes::IosClientBrandingAttributes(JsonView jsonValue) : 
    m_logoUrlHasBeenSet(false),
    m_logo2xUrlHasBeenSet(false),
    m_logo3xUrlHasBeenSet(false),
    m_supportEmailHasBeenSet(false),
    m_supportLinkHasBeenSet(false),
    m_forgotPasswordLinkHasBeenSet(false),
    m_loginMessageHasBeenSet(false)
{
  *this = jsonValue;
}

IosClientBrandingAttributes& IosClientBrandingAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogoUrl"))
  {
    m_logoUrl = jsonValue.GetString("LogoUrl");

    m_logoUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Logo2xUrl"))
  {
    m_logo2xUrl = jsonValue.GetString("Logo2xUrl");

    m_logo2xUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Logo3xUrl"))
  {
    m_logo3xUrl = jsonValue.GetString("Logo3xUrl");

    m_logo3xUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportEmail"))
  {
    m_supportEmail = jsonValue.GetString("SupportEmail");

    m_supportEmailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportLink"))
  {
    m_supportLink = jsonValue.GetString("SupportLink");

    m_supportLinkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ForgotPasswordLink"))
  {
    m_forgotPasswordLink = jsonValue.GetString("ForgotPasswordLink");

    m_forgotPasswordLinkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoginMessage"))
  {
    Aws::Map<Aws::String, JsonView> loginMessageJsonMap = jsonValue.GetObject("LoginMessage").GetAllObjects();
    for(auto& loginMessageItem : loginMessageJsonMap)
    {
      m_loginMessage[loginMessageItem.first] = loginMessageItem.second.AsString();
    }
    m_loginMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue IosClientBrandingAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_logoUrlHasBeenSet)
  {
   payload.WithString("LogoUrl", m_logoUrl);

  }

  if(m_logo2xUrlHasBeenSet)
  {
   payload.WithString("Logo2xUrl", m_logo2xUrl);

  }

  if(m_logo3xUrlHasBeenSet)
  {
   payload.WithString("Logo3xUrl", m_logo3xUrl);

  }

  if(m_supportEmailHasBeenSet)
  {
   payload.WithString("SupportEmail", m_supportEmail);

  }

  if(m_supportLinkHasBeenSet)
  {
   payload.WithString("SupportLink", m_supportLink);

  }

  if(m_forgotPasswordLinkHasBeenSet)
  {
   payload.WithString("ForgotPasswordLink", m_forgotPasswordLink);

  }

  if(m_loginMessageHasBeenSet)
  {
   JsonValue loginMessageJsonMap;
   for(auto& loginMessageItem : m_loginMessage)
   {
     loginMessageJsonMap.WithString(loginMessageItem.first, loginMessageItem.second);
   }
   payload.WithObject("LoginMessage", std::move(loginMessageJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
