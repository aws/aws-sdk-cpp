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

#include <aws/sagemaker/model/ModelPackageSummary.h>
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

ModelPackageSummary::ModelPackageSummary() : 
    m_modelPackageNameHasBeenSet(false),
    m_modelPackageArnHasBeenSet(false),
    m_modelPackageDescriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modelPackageStatus(ModelPackageStatus::NOT_SET),
    m_modelPackageStatusHasBeenSet(false)
{
}

ModelPackageSummary::ModelPackageSummary(JsonView jsonValue) : 
    m_modelPackageNameHasBeenSet(false),
    m_modelPackageArnHasBeenSet(false),
    m_modelPackageDescriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modelPackageStatus(ModelPackageStatus::NOT_SET),
    m_modelPackageStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ModelPackageSummary& ModelPackageSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelPackageName"))
  {
    m_modelPackageName = jsonValue.GetString("ModelPackageName");

    m_modelPackageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageArn"))
  {
    m_modelPackageArn = jsonValue.GetString("ModelPackageArn");

    m_modelPackageArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageDescription"))
  {
    m_modelPackageDescription = jsonValue.GetString("ModelPackageDescription");

    m_modelPackageDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageStatus"))
  {
    m_modelPackageStatus = ModelPackageStatusMapper::GetModelPackageStatusForName(jsonValue.GetString("ModelPackageStatus"));

    m_modelPackageStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelPackageSummary::Jsonize() const
{
  JsonValue payload;

  if(m_modelPackageNameHasBeenSet)
  {
   payload.WithString("ModelPackageName", m_modelPackageName);

  }

  if(m_modelPackageArnHasBeenSet)
  {
   payload.WithString("ModelPackageArn", m_modelPackageArn);

  }

  if(m_modelPackageDescriptionHasBeenSet)
  {
   payload.WithString("ModelPackageDescription", m_modelPackageDescription);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_modelPackageStatusHasBeenSet)
  {
   payload.WithString("ModelPackageStatus", ModelPackageStatusMapper::GetNameForModelPackageStatus(m_modelPackageStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
