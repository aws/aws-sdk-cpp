/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ActionTypeDeclaration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

ActionTypeDeclaration::ActionTypeDeclaration() : 
    m_descriptionHasBeenSet(false),
    m_executorHasBeenSet(false),
    m_idHasBeenSet(false),
    m_inputArtifactDetailsHasBeenSet(false),
    m_outputArtifactDetailsHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_urlsHasBeenSet(false)
{
}

ActionTypeDeclaration::ActionTypeDeclaration(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_executorHasBeenSet(false),
    m_idHasBeenSet(false),
    m_inputArtifactDetailsHasBeenSet(false),
    m_outputArtifactDetailsHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_urlsHasBeenSet(false)
{
  *this = jsonValue;
}

ActionTypeDeclaration& ActionTypeDeclaration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executor"))
  {
    m_executor = jsonValue.GetObject("executor");

    m_executorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetObject("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputArtifactDetails"))
  {
    m_inputArtifactDetails = jsonValue.GetObject("inputArtifactDetails");

    m_inputArtifactDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputArtifactDetails"))
  {
    m_outputArtifactDetails = jsonValue.GetObject("outputArtifactDetails");

    m_outputArtifactDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("permissions"))
  {
    m_permissions = jsonValue.GetObject("permissions");

    m_permissionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("properties"))
  {
    Aws::Utils::Array<JsonView> propertiesJsonList = jsonValue.GetArray("properties");
    for(unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex)
    {
      m_properties.push_back(propertiesJsonList[propertiesIndex].AsObject());
    }
    m_propertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("urls"))
  {
    m_urls = jsonValue.GetObject("urls");

    m_urlsHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionTypeDeclaration::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_executorHasBeenSet)
  {
   payload.WithObject("executor", m_executor.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithObject("id", m_id.Jsonize());

  }

  if(m_inputArtifactDetailsHasBeenSet)
  {
   payload.WithObject("inputArtifactDetails", m_inputArtifactDetails.Jsonize());

  }

  if(m_outputArtifactDetailsHasBeenSet)
  {
   payload.WithObject("outputArtifactDetails", m_outputArtifactDetails.Jsonize());

  }

  if(m_permissionsHasBeenSet)
  {
   payload.WithObject("permissions", m_permissions.Jsonize());

  }

  if(m_propertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propertiesJsonList(m_properties.size());
   for(unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex)
   {
     propertiesJsonList[propertiesIndex].AsObject(m_properties[propertiesIndex].Jsonize());
   }
   payload.WithArray("properties", std::move(propertiesJsonList));

  }

  if(m_urlsHasBeenSet)
  {
   payload.WithObject("urls", m_urls.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
