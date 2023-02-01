/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UserAttributeUpdateSettingsType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

UserAttributeUpdateSettingsType::UserAttributeUpdateSettingsType() : 
    m_attributesRequireVerificationBeforeUpdateHasBeenSet(false)
{
}

UserAttributeUpdateSettingsType::UserAttributeUpdateSettingsType(JsonView jsonValue) : 
    m_attributesRequireVerificationBeforeUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

UserAttributeUpdateSettingsType& UserAttributeUpdateSettingsType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributesRequireVerificationBeforeUpdate"))
  {
    Aws::Utils::Array<JsonView> attributesRequireVerificationBeforeUpdateJsonList = jsonValue.GetArray("AttributesRequireVerificationBeforeUpdate");
    for(unsigned attributesRequireVerificationBeforeUpdateIndex = 0; attributesRequireVerificationBeforeUpdateIndex < attributesRequireVerificationBeforeUpdateJsonList.GetLength(); ++attributesRequireVerificationBeforeUpdateIndex)
    {
      m_attributesRequireVerificationBeforeUpdate.push_back(VerifiedAttributeTypeMapper::GetVerifiedAttributeTypeForName(attributesRequireVerificationBeforeUpdateJsonList[attributesRequireVerificationBeforeUpdateIndex].AsString()));
    }
    m_attributesRequireVerificationBeforeUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue UserAttributeUpdateSettingsType::Jsonize() const
{
  JsonValue payload;

  if(m_attributesRequireVerificationBeforeUpdateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesRequireVerificationBeforeUpdateJsonList(m_attributesRequireVerificationBeforeUpdate.size());
   for(unsigned attributesRequireVerificationBeforeUpdateIndex = 0; attributesRequireVerificationBeforeUpdateIndex < attributesRequireVerificationBeforeUpdateJsonList.GetLength(); ++attributesRequireVerificationBeforeUpdateIndex)
   {
     attributesRequireVerificationBeforeUpdateJsonList[attributesRequireVerificationBeforeUpdateIndex].AsString(VerifiedAttributeTypeMapper::GetNameForVerifiedAttributeType(m_attributesRequireVerificationBeforeUpdate[attributesRequireVerificationBeforeUpdateIndex]));
   }
   payload.WithArray("AttributesRequireVerificationBeforeUpdate", std::move(attributesRequireVerificationBeforeUpdateJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
