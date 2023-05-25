/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/DeveloperInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

DeveloperInfo::DeveloperInfo() : 
    m_developerNameHasBeenSet(false),
    m_privacyPolicyHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

DeveloperInfo::DeveloperInfo(JsonView jsonValue) : 
    m_developerNameHasBeenSet(false),
    m_privacyPolicyHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

DeveloperInfo& DeveloperInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeveloperName"))
  {
    m_developerName = jsonValue.GetString("DeveloperName");

    m_developerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivacyPolicy"))
  {
    m_privacyPolicy = jsonValue.GetString("PrivacyPolicy");

    m_privacyPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Email"))
  {
    m_email = jsonValue.GetString("Email");

    m_emailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue DeveloperInfo::Jsonize() const
{
  JsonValue payload;

  if(m_developerNameHasBeenSet)
  {
   payload.WithString("DeveloperName", m_developerName);

  }

  if(m_privacyPolicyHasBeenSet)
  {
   payload.WithString("PrivacyPolicy", m_privacyPolicy);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
