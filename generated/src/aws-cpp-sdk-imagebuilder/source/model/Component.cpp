/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/Component.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

Component::Component(JsonView jsonValue)
{
  *this = jsonValue;
}

Component& Component::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("changeDescription"))
  {
    m_changeDescription = jsonValue.GetString("changeDescription");
    m_changeDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = ComponentTypeMapper::GetComponentTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("platform"))
  {
    m_platform = PlatformMapper::GetPlatformForName(jsonValue.GetString("platform"));
    m_platformHasBeenSet = true;
  }
  if(jsonValue.ValueExists("supportedOsVersions"))
  {
    Aws::Utils::Array<JsonView> supportedOsVersionsJsonList = jsonValue.GetArray("supportedOsVersions");
    for(unsigned supportedOsVersionsIndex = 0; supportedOsVersionsIndex < supportedOsVersionsJsonList.GetLength(); ++supportedOsVersionsIndex)
    {
      m_supportedOsVersions.push_back(supportedOsVersionsJsonList[supportedOsVersionsIndex].AsString());
    }
    m_supportedOsVersionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetObject("state");
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Utils::Array<JsonView> parametersJsonList = jsonValue.GetArray("parameters");
    for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
    {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
    m_parametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("owner"))
  {
    m_owner = jsonValue.GetString("owner");
    m_ownerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("data"))
  {
    m_data = jsonValue.GetString("data");
    m_dataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encrypted"))
  {
    m_encrypted = jsonValue.GetBool("encrypted");
    m_encryptedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dateCreated"))
  {
    m_dateCreated = jsonValue.GetString("dateCreated");
    m_dateCreatedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("publisher"))
  {
    m_publisher = jsonValue.GetString("publisher");
    m_publisherHasBeenSet = true;
  }
  if(jsonValue.ValueExists("obfuscate"))
  {
    m_obfuscate = jsonValue.GetBool("obfuscate");
    m_obfuscateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("productCodes"))
  {
    Aws::Utils::Array<JsonView> productCodesJsonList = jsonValue.GetArray("productCodes");
    for(unsigned productCodesIndex = 0; productCodesIndex < productCodesJsonList.GetLength(); ++productCodesIndex)
    {
      m_productCodes.push_back(productCodesJsonList[productCodesIndex].AsObject());
    }
    m_productCodesHasBeenSet = true;
  }
  return *this;
}

JsonValue Component::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_changeDescriptionHasBeenSet)
  {
   payload.WithString("changeDescription", m_changeDescription);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ComponentTypeMapper::GetNameForComponentType(m_type));
  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", PlatformMapper::GetNameForPlatform(m_platform));
  }

  if(m_supportedOsVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedOsVersionsJsonList(m_supportedOsVersions.size());
   for(unsigned supportedOsVersionsIndex = 0; supportedOsVersionsIndex < supportedOsVersionsJsonList.GetLength(); ++supportedOsVersionsIndex)
   {
     supportedOsVersionsJsonList[supportedOsVersionsIndex].AsString(m_supportedOsVersions[supportedOsVersionsIndex]);
   }
   payload.WithArray("supportedOsVersions", std::move(supportedOsVersionsJsonList));

  }

  if(m_stateHasBeenSet)
  {
   payload.WithObject("state", m_state.Jsonize());

  }

  if(m_parametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parametersJsonList(m_parameters.size());
   for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
   {
     parametersJsonList[parametersIndex].AsObject(m_parameters[parametersIndex].Jsonize());
   }
   payload.WithArray("parameters", std::move(parametersJsonList));

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", m_owner);

  }

  if(m_dataHasBeenSet)
  {
   payload.WithString("data", m_data);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_encryptedHasBeenSet)
  {
   payload.WithBool("encrypted", m_encrypted);

  }

  if(m_dateCreatedHasBeenSet)
  {
   payload.WithString("dateCreated", m_dateCreated);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_publisherHasBeenSet)
  {
   payload.WithString("publisher", m_publisher);

  }

  if(m_obfuscateHasBeenSet)
  {
   payload.WithBool("obfuscate", m_obfuscate);

  }

  if(m_productCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productCodesJsonList(m_productCodes.size());
   for(unsigned productCodesIndex = 0; productCodesIndex < productCodesJsonList.GetLength(); ++productCodesIndex)
   {
     productCodesJsonList[productCodesIndex].AsObject(m_productCodes[productCodesIndex].Jsonize());
   }
   payload.WithArray("productCodes", std::move(productCodesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
