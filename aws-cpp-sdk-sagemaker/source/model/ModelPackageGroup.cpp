/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelPackageGroup.h>
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

ModelPackageGroup::ModelPackageGroup() : 
    m_modelPackageGroupNameHasBeenSet(false),
    m_modelPackageGroupArnHasBeenSet(false),
    m_modelPackageGroupDescriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_modelPackageGroupStatus(ModelPackageGroupStatus::NOT_SET),
    m_modelPackageGroupStatusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ModelPackageGroup::ModelPackageGroup(JsonView jsonValue) : 
    m_modelPackageGroupNameHasBeenSet(false),
    m_modelPackageGroupArnHasBeenSet(false),
    m_modelPackageGroupDescriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_modelPackageGroupStatus(ModelPackageGroupStatus::NOT_SET),
    m_modelPackageGroupStatusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

ModelPackageGroup& ModelPackageGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelPackageGroupName"))
  {
    m_modelPackageGroupName = jsonValue.GetString("ModelPackageGroupName");

    m_modelPackageGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageGroupArn"))
  {
    m_modelPackageGroupArn = jsonValue.GetString("ModelPackageGroupArn");

    m_modelPackageGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageGroupDescription"))
  {
    m_modelPackageGroupDescription = jsonValue.GetString("ModelPackageGroupDescription");

    m_modelPackageGroupDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageGroupStatus"))
  {
    m_modelPackageGroupStatus = ModelPackageGroupStatusMapper::GetModelPackageGroupStatusForName(jsonValue.GetString("ModelPackageGroupStatus"));

    m_modelPackageGroupStatusHasBeenSet = true;
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

  return *this;
}

JsonValue ModelPackageGroup::Jsonize() const
{
  JsonValue payload;

  if(m_modelPackageGroupNameHasBeenSet)
  {
   payload.WithString("ModelPackageGroupName", m_modelPackageGroupName);

  }

  if(m_modelPackageGroupArnHasBeenSet)
  {
   payload.WithString("ModelPackageGroupArn", m_modelPackageGroupArn);

  }

  if(m_modelPackageGroupDescriptionHasBeenSet)
  {
   payload.WithString("ModelPackageGroupDescription", m_modelPackageGroupDescription);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  if(m_modelPackageGroupStatusHasBeenSet)
  {
   payload.WithString("ModelPackageGroupStatus", ModelPackageGroupStatusMapper::GetNameForModelPackageGroupStatus(m_modelPackageGroupStatus));
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

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
