/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/AppliedExtension.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppConfig
{
namespace Model
{

AppliedExtension::AppliedExtension() : 
    m_extensionIdHasBeenSet(false),
    m_extensionAssociationIdHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

AppliedExtension::AppliedExtension(JsonView jsonValue) : 
    m_extensionIdHasBeenSet(false),
    m_extensionAssociationIdHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

AppliedExtension& AppliedExtension::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExtensionId"))
  {
    m_extensionId = jsonValue.GetString("ExtensionId");

    m_extensionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExtensionAssociationId"))
  {
    m_extensionAssociationId = jsonValue.GetString("ExtensionAssociationId");

    m_extensionAssociationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionNumber"))
  {
    m_versionNumber = jsonValue.GetInteger("VersionNumber");

    m_versionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }

  return *this;
}

JsonValue AppliedExtension::Jsonize() const
{
  JsonValue payload;

  if(m_extensionIdHasBeenSet)
  {
   payload.WithString("ExtensionId", m_extensionId);

  }

  if(m_extensionAssociationIdHasBeenSet)
  {
   payload.WithString("ExtensionAssociationId", m_extensionAssociationId);

  }

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInteger("VersionNumber", m_versionNumber);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace AppConfig
} // namespace Aws
