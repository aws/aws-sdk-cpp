/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/LaunchTemplateSpecificationOverride.h>
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

LaunchTemplateSpecificationOverride::LaunchTemplateSpecificationOverride(JsonView jsonValue)
{
  *this = jsonValue;
}

LaunchTemplateSpecificationOverride& LaunchTemplateSpecificationOverride::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("targetInstanceTypes"))
  {
    Aws::Utils::Array<JsonView> targetInstanceTypesJsonList = jsonValue.GetArray("targetInstanceTypes");
    for(unsigned targetInstanceTypesIndex = 0; targetInstanceTypesIndex < targetInstanceTypesJsonList.GetLength(); ++targetInstanceTypesIndex)
    {
      m_targetInstanceTypes.push_back(targetInstanceTypesJsonList[targetInstanceTypesIndex].AsString());
    }
    m_targetInstanceTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userdataType"))
  {
    m_userdataType = UserdataTypeMapper::GetUserdataTypeForName(jsonValue.GetString("userdataType"));
    m_userdataTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue LaunchTemplateSpecificationOverride::Jsonize() const
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

  if(m_targetInstanceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetInstanceTypesJsonList(m_targetInstanceTypes.size());
   for(unsigned targetInstanceTypesIndex = 0; targetInstanceTypesIndex < targetInstanceTypesJsonList.GetLength(); ++targetInstanceTypesIndex)
   {
     targetInstanceTypesJsonList[targetInstanceTypesIndex].AsString(m_targetInstanceTypes[targetInstanceTypesIndex]);
   }
   payload.WithArray("targetInstanceTypes", std::move(targetInstanceTypesJsonList));

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
