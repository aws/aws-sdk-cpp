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

#include <aws/servicecatalog/model/ProvisioningArtifactSummary.h>
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

ProvisioningArtifactSummary::ProvisioningArtifactSummary() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_provisioningArtifactMetadataHasBeenSet(false)
{
}

ProvisioningArtifactSummary::ProvisioningArtifactSummary(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_provisioningArtifactMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisioningArtifactSummary& ProvisioningArtifactSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisioningArtifactMetadata"))
  {
    Aws::Map<Aws::String, JsonValue> provisioningArtifactMetadataJsonMap = jsonValue.GetObject("ProvisioningArtifactMetadata").GetAllObjects();
    for(auto& provisioningArtifactMetadataItem : provisioningArtifactMetadataJsonMap)
    {
      m_provisioningArtifactMetadata[provisioningArtifactMetadataItem.first] = provisioningArtifactMetadataItem.second.AsString();
    }
    m_provisioningArtifactMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisioningArtifactSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_provisioningArtifactMetadataHasBeenSet)
  {
   JsonValue provisioningArtifactMetadataJsonMap;
   for(auto& provisioningArtifactMetadataItem : m_provisioningArtifactMetadata)
   {
     provisioningArtifactMetadataJsonMap.WithString(provisioningArtifactMetadataItem.first, provisioningArtifactMetadataItem.second);
   }
   payload.WithObject("ProvisioningArtifactMetadata", std::move(provisioningArtifactMetadataJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
