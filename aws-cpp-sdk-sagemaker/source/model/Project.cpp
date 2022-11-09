/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Project.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

Project::Project() : 
    m_projectArnHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectDescriptionHasBeenSet(false),
    m_serviceCatalogProvisioningDetailsHasBeenSet(false),
    m_serviceCatalogProvisionedProductDetailsHasBeenSet(false),
    m_projectStatus(ProjectStatus::NOT_SET),
    m_projectStatusHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false)
{
}

Project::Project(JsonView jsonValue) : 
    m_projectArnHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectDescriptionHasBeenSet(false),
    m_serviceCatalogProvisioningDetailsHasBeenSet(false),
    m_serviceCatalogProvisionedProductDetailsHasBeenSet(false),
    m_projectStatus(ProjectStatus::NOT_SET),
    m_projectStatusHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false)
{
  *this = jsonValue;
}

Project& Project::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProjectArn"))
  {
    m_projectArn = jsonValue.GetString("ProjectArn");

    m_projectArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectName"))
  {
    m_projectName = jsonValue.GetString("ProjectName");

    m_projectNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectId"))
  {
    m_projectId = jsonValue.GetString("ProjectId");

    m_projectIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectDescription"))
  {
    m_projectDescription = jsonValue.GetString("ProjectDescription");

    m_projectDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceCatalogProvisioningDetails"))
  {
    m_serviceCatalogProvisioningDetails = jsonValue.GetObject("ServiceCatalogProvisioningDetails");

    m_serviceCatalogProvisioningDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceCatalogProvisionedProductDetails"))
  {
    m_serviceCatalogProvisionedProductDetails = jsonValue.GetObject("ServiceCatalogProvisionedProductDetails");

    m_serviceCatalogProvisionedProductDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectStatus"))
  {
    m_projectStatus = ProjectStatusMapper::GetProjectStatusForName(jsonValue.GetString("ProjectStatus"));

    m_projectStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetObject("LastModifiedBy");

    m_lastModifiedByHasBeenSet = true;
  }

  return *this;
}

JsonValue Project::Jsonize() const
{
  JsonValue payload;

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("ProjectArn", m_projectArn);

  }

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("ProjectName", m_projectName);

  }

  if(m_projectIdHasBeenSet)
  {
   payload.WithString("ProjectId", m_projectId);

  }

  if(m_projectDescriptionHasBeenSet)
  {
   payload.WithString("ProjectDescription", m_projectDescription);

  }

  if(m_serviceCatalogProvisioningDetailsHasBeenSet)
  {
   payload.WithObject("ServiceCatalogProvisioningDetails", m_serviceCatalogProvisioningDetails.Jsonize());

  }

  if(m_serviceCatalogProvisionedProductDetailsHasBeenSet)
  {
   payload.WithObject("ServiceCatalogProvisionedProductDetails", m_serviceCatalogProvisionedProductDetails.Jsonize());

  }

  if(m_projectStatusHasBeenSet)
  {
   payload.WithString("ProjectStatus", ProjectStatusMapper::GetNameForProjectStatus(m_projectStatus));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithObject("LastModifiedBy", m_lastModifiedBy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
