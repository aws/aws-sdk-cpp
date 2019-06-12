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

#include <aws/servicecatalog/model/ProvisioningArtifactDetail.h>
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

ProvisioningArtifactDetail::ProvisioningArtifactDetail() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(ProvisioningArtifactType::NOT_SET),
    m_typeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_guidance(ProvisioningArtifactGuidance::NOT_SET),
    m_guidanceHasBeenSet(false)
{
}

ProvisioningArtifactDetail::ProvisioningArtifactDetail(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(ProvisioningArtifactType::NOT_SET),
    m_typeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_guidance(ProvisioningArtifactGuidance::NOT_SET),
    m_guidanceHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisioningArtifactDetail& ProvisioningArtifactDetail::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ProvisioningArtifactTypeMapper::GetProvisioningArtifactTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Active"))
  {
    m_active = jsonValue.GetBool("Active");

    m_activeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Guidance"))
  {
    m_guidance = ProvisioningArtifactGuidanceMapper::GetProvisioningArtifactGuidanceForName(jsonValue.GetString("Guidance"));

    m_guidanceHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisioningArtifactDetail::Jsonize() const
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

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ProvisioningArtifactTypeMapper::GetNameForProvisioningArtifactType(m_type));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_activeHasBeenSet)
  {
   payload.WithBool("Active", m_active);

  }

  if(m_guidanceHasBeenSet)
  {
   payload.WithString("Guidance", ProvisioningArtifactGuidanceMapper::GetNameForProvisioningArtifactGuidance(m_guidance));
  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
