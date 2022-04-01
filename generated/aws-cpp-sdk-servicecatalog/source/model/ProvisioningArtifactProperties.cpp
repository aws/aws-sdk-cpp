﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProvisioningArtifactProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ProvisioningArtifactProperties::ProvisioningArtifactProperties() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_infoHasBeenSet(false),
    m_type(ProvisioningArtifactType::NOT_SET),
    m_typeHasBeenSet(false),
    m_disableTemplateValidation(false),
    m_disableTemplateValidationHasBeenSet(false)
{
}

ProvisioningArtifactProperties::ProvisioningArtifactProperties(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_infoHasBeenSet(false),
    m_type(ProvisioningArtifactType::NOT_SET),
    m_typeHasBeenSet(false),
    m_disableTemplateValidation(false),
    m_disableTemplateValidationHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisioningArtifactProperties& ProvisioningArtifactProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Info"))
  {
    Aws::Map<Aws::String, JsonView> infoJsonMap = jsonValue.GetObject("Info").GetAllObjects();
    for(auto& infoItem : infoJsonMap)
    {
      m_info[infoItem.first] = infoItem.second.AsString();
    }
    m_infoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ProvisioningArtifactTypeMapper::GetProvisioningArtifactTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisableTemplateValidation"))
  {
    m_disableTemplateValidation = jsonValue.GetBool("DisableTemplateValidation");

    m_disableTemplateValidationHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisioningArtifactProperties::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_infoHasBeenSet)
  {
   JsonValue infoJsonMap;
   for(auto& infoItem : m_info)
   {
     infoJsonMap.WithString(infoItem.first, infoItem.second);
   }
   payload.WithObject("Info", std::move(infoJsonMap));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ProvisioningArtifactTypeMapper::GetNameForProvisioningArtifactType(m_type));
  }

  if(m_disableTemplateValidationHasBeenSet)
  {
   payload.WithBool("DisableTemplateValidation", m_disableTemplateValidation);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
