/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/IosImportClientBrandingAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

IosImportClientBrandingAttributes::IosImportClientBrandingAttributes() : 
    m_logoHasBeenSet(false),
    m_logo2xHasBeenSet(false),
    m_logo3xHasBeenSet(false),
    m_supportEmailHasBeenSet(false),
    m_supportLinkHasBeenSet(false),
    m_forgotPasswordLinkHasBeenSet(false),
    m_loginMessageHasBeenSet(false)
{
}

IosImportClientBrandingAttributes::IosImportClientBrandingAttributes(JsonView jsonValue) : 
    m_logoHasBeenSet(false),
    m_logo2xHasBeenSet(false),
    m_logo3xHasBeenSet(false),
    m_supportEmailHasBeenSet(false),
    m_supportLinkHasBeenSet(false),
    m_forgotPasswordLinkHasBeenSet(false),
    m_loginMessageHasBeenSet(false)
{
  *this = jsonValue;
}

IosImportClientBrandingAttributes& IosImportClientBrandingAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Logo"))
  {
    m_logo = HashingUtils::Base64Decode(jsonValue.GetString("Logo"));
    m_logoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Logo2x"))
  {
    m_logo2x = HashingUtils::Base64Decode(jsonValue.GetString("Logo2x"));
    m_logo2xHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Logo3x"))
  {
    m_logo3x = HashingUtils::Base64Decode(jsonValue.GetString("Logo3x"));
    m_logo3xHasBeenSet = true;
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

JsonValue IosImportClientBrandingAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_logoHasBeenSet)
  {
   payload.WithString("Logo", HashingUtils::Base64Encode(m_logo));
  }

  if(m_logo2xHasBeenSet)
  {
   payload.WithString("Logo2x", HashingUtils::Base64Encode(m_logo2x));
  }

  if(m_logo3xHasBeenSet)
  {
   payload.WithString("Logo3x", HashingUtils::Base64Encode(m_logo3x));
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
