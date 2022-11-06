/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/UpdateBackendAuthPasswordPolicyConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

UpdateBackendAuthPasswordPolicyConfig::UpdateBackendAuthPasswordPolicyConfig() : 
    m_additionalConstraintsHasBeenSet(false),
    m_minimumLength(0.0),
    m_minimumLengthHasBeenSet(false)
{
}

UpdateBackendAuthPasswordPolicyConfig::UpdateBackendAuthPasswordPolicyConfig(JsonView jsonValue) : 
    m_additionalConstraintsHasBeenSet(false),
    m_minimumLength(0.0),
    m_minimumLengthHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateBackendAuthPasswordPolicyConfig& UpdateBackendAuthPasswordPolicyConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("additionalConstraints"))
  {
    Aws::Utils::Array<JsonView> additionalConstraintsJsonList = jsonValue.GetArray("additionalConstraints");
    for(unsigned additionalConstraintsIndex = 0; additionalConstraintsIndex < additionalConstraintsJsonList.GetLength(); ++additionalConstraintsIndex)
    {
      m_additionalConstraints.push_back(AdditionalConstraintsElementMapper::GetAdditionalConstraintsElementForName(additionalConstraintsJsonList[additionalConstraintsIndex].AsString()));
    }
    m_additionalConstraintsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minimumLength"))
  {
    m_minimumLength = jsonValue.GetDouble("minimumLength");

    m_minimumLengthHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateBackendAuthPasswordPolicyConfig::Jsonize() const
{
  JsonValue payload;

  if(m_additionalConstraintsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalConstraintsJsonList(m_additionalConstraints.size());
   for(unsigned additionalConstraintsIndex = 0; additionalConstraintsIndex < additionalConstraintsJsonList.GetLength(); ++additionalConstraintsIndex)
   {
     additionalConstraintsJsonList[additionalConstraintsIndex].AsString(AdditionalConstraintsElementMapper::GetNameForAdditionalConstraintsElement(m_additionalConstraints[additionalConstraintsIndex]));
   }
   payload.WithArray("additionalConstraints", std::move(additionalConstraintsJsonList));

  }

  if(m_minimumLengthHasBeenSet)
  {
   payload.WithDouble("minimumLength", m_minimumLength);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
