/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/LaunchTemplateSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

LaunchTemplateSpecification::LaunchTemplateSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

LaunchTemplateSpecification& LaunchTemplateSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("launchTemplateId"))
  {
    m_launchTemplateId = jsonValue.GetString("launchTemplateId");
    m_launchTemplateIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("launchTemplateName"))
  {
    m_launchTemplateName = jsonValue.GetString("launchTemplateName");
    m_launchTemplateNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("overrides"))
  {
    Aws::Utils::Array<JsonView> overridesJsonList = jsonValue.GetArray("overrides");
    for(unsigned overridesIndex = 0; overridesIndex < overridesJsonList.GetLength(); ++overridesIndex)
    {
      m_overrides.push_back(overridesJsonList[overridesIndex].AsObject());
    }
    m_overridesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userdataType"))
  {
    m_userdataType = UserdataTypeMapper::GetUserdataTypeForName(jsonValue.GetString("userdataType"));
    m_userdataTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue LaunchTemplateSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_launchTemplateIdHasBeenSet)
  {
   payload.WithString("launchTemplateId", m_launchTemplateId);

  }

  if(m_launchTemplateNameHasBeenSet)
  {
   payload.WithString("launchTemplateName", m_launchTemplateName);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_overridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> overridesJsonList(m_overrides.size());
   for(unsigned overridesIndex = 0; overridesIndex < overridesJsonList.GetLength(); ++overridesIndex)
   {
     overridesJsonList[overridesIndex].AsObject(m_overrides[overridesIndex].Jsonize());
   }
   payload.WithArray("overrides", std::move(overridesJsonList));

  }

  if(m_userdataTypeHasBeenSet)
  {
   payload.WithString("userdataType", UserdataTypeMapper::GetNameForUserdataType(m_userdataType));
  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
