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

#include <aws/sagemaker/model/ModelPackageValidationProfile.h>
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

ModelPackageValidationProfile::ModelPackageValidationProfile() : 
    m_profileNameHasBeenSet(false),
    m_transformJobDefinitionHasBeenSet(false)
{
}

ModelPackageValidationProfile::ModelPackageValidationProfile(JsonView jsonValue) : 
    m_profileNameHasBeenSet(false),
    m_transformJobDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

ModelPackageValidationProfile& ModelPackageValidationProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProfileName"))
  {
    m_profileName = jsonValue.GetString("ProfileName");

    m_profileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransformJobDefinition"))
  {
    m_transformJobDefinition = jsonValue.GetObject("TransformJobDefinition");

    m_transformJobDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelPackageValidationProfile::Jsonize() const
{
  JsonValue payload;

  if(m_profileNameHasBeenSet)
  {
   payload.WithString("ProfileName", m_profileName);

  }

  if(m_transformJobDefinitionHasBeenSet)
  {
   payload.WithObject("TransformJobDefinition", m_transformJobDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
