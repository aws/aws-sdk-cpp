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

#include <aws/chime/model/UpdateUserRequestItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

UpdateUserRequestItem::UpdateUserRequestItem() : 
    m_userIdHasBeenSet(false),
    m_licenseType(License::NOT_SET),
    m_licenseTypeHasBeenSet(false),
    m_userType(UserType::NOT_SET),
    m_userTypeHasBeenSet(false),
    m_alexaForBusinessMetadataHasBeenSet(false)
{
}

UpdateUserRequestItem::UpdateUserRequestItem(JsonView jsonValue) : 
    m_userIdHasBeenSet(false),
    m_licenseType(License::NOT_SET),
    m_licenseTypeHasBeenSet(false),
    m_userType(UserType::NOT_SET),
    m_userTypeHasBeenSet(false),
    m_alexaForBusinessMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateUserRequestItem& UpdateUserRequestItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseType"))
  {
    m_licenseType = LicenseMapper::GetLicenseForName(jsonValue.GetString("LicenseType"));

    m_licenseTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserType"))
  {
    m_userType = UserTypeMapper::GetUserTypeForName(jsonValue.GetString("UserType"));

    m_userTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlexaForBusinessMetadata"))
  {
    m_alexaForBusinessMetadata = jsonValue.GetObject("AlexaForBusinessMetadata");

    m_alexaForBusinessMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateUserRequestItem::Jsonize() const
{
  JsonValue payload;

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_licenseTypeHasBeenSet)
  {
   payload.WithString("LicenseType", LicenseMapper::GetNameForLicense(m_licenseType));
  }

  if(m_userTypeHasBeenSet)
  {
   payload.WithString("UserType", UserTypeMapper::GetNameForUserType(m_userType));
  }

  if(m_alexaForBusinessMetadataHasBeenSet)
  {
   payload.WithObject("AlexaForBusinessMetadata", m_alexaForBusinessMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
