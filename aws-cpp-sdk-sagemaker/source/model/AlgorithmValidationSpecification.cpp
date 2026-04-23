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

#include <aws/sagemaker/model/AlgorithmValidationSpecification.h>
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

AlgorithmValidationSpecification::AlgorithmValidationSpecification() : 
    m_validationRoleHasBeenSet(false),
    m_validationProfilesHasBeenSet(false)
{
}

AlgorithmValidationSpecification::AlgorithmValidationSpecification(JsonView jsonValue) : 
    m_validationRoleHasBeenSet(false),
    m_validationProfilesHasBeenSet(false)
{
  *this = jsonValue;
}

AlgorithmValidationSpecification& AlgorithmValidationSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ValidationRole"))
  {
    m_validationRole = jsonValue.GetString("ValidationRole");

    m_validationRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationProfiles"))
  {
    Array<JsonView> validationProfilesJsonList = jsonValue.GetArray("ValidationProfiles");
    for(unsigned validationProfilesIndex = 0; validationProfilesIndex < validationProfilesJsonList.GetLength(); ++validationProfilesIndex)
    {
      m_validationProfiles.push_back(validationProfilesJsonList[validationProfilesIndex].AsObject());
    }
    m_validationProfilesHasBeenSet = true;
  }

  return *this;
}

JsonValue AlgorithmValidationSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_validationRoleHasBeenSet)
  {
   payload.WithString("ValidationRole", m_validationRole);

  }

  if(m_validationProfilesHasBeenSet)
  {
   Array<JsonValue> validationProfilesJsonList(m_validationProfiles.size());
   for(unsigned validationProfilesIndex = 0; validationProfilesIndex < validationProfilesJsonList.GetLength(); ++validationProfilesIndex)
   {
     validationProfilesJsonList[validationProfilesIndex].AsObject(m_validationProfiles[validationProfilesIndex].Jsonize());
   }
   payload.WithArray("ValidationProfiles", std::move(validationProfilesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
