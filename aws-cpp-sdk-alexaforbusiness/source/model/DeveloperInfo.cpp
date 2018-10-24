/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
