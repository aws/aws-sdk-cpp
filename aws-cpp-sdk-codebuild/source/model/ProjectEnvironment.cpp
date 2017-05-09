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

#include <aws/codebuild/model/ProjectEnvironment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

ProjectEnvironment::ProjectEnvironment() : 
    m_type(EnvironmentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_computeType(ComputeType::NOT_SET),
    m_computeTypeHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false)
{
}

ProjectEnvironment::ProjectEnvironment(const JsonValue& jsonValue) : 
    m_type(EnvironmentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_computeType(ComputeType::NOT_SET),
    m_computeTypeHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectEnvironment& ProjectEnvironment::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = EnvironmentTypeMapper::GetEnvironmentTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetString("image");

    m_imageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("computeType"))
  {
    m_computeType = ComputeTypeMapper::GetComputeTypeForName(jsonValue.GetString("computeType"));

    m_computeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentVariables"))
  {
    Array<JsonValue> environmentVariablesJsonList = jsonValue.GetArray("environmentVariables");
    for(unsigned environmentVariablesIndex = 0; environmentVariablesIndex < environmentVariablesJsonList.GetLength(); ++environmentVariablesIndex)
    {
      m_environmentVariables.push_back(environmentVariablesJsonList[environmentVariablesIndex].AsObject());
    }
    m_environmentVariablesHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectEnvironment::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", EnvironmentTypeMapper::GetNameForEnvironmentType(m_type));
  }

  if(m_imageHasBeenSet)
  {
   payload.WithString("image", m_image);

  }

  if(m_computeTypeHasBeenSet)
  {
   payload.WithString("computeType", ComputeTypeMapper::GetNameForComputeType(m_computeType));
  }

  if(m_environmentVariablesHasBeenSet)
  {
   Array<JsonValue> environmentVariablesJsonList(m_environmentVariables.size());
   for(unsigned environmentVariablesIndex = 0; environmentVariablesIndex < environmentVariablesJsonList.GetLength(); ++environmentVariablesIndex)
   {
     environmentVariablesJsonList[environmentVariablesIndex].AsObject(m_environmentVariables[environmentVariablesIndex].Jsonize());
   }
   payload.WithArray("environmentVariables", std::move(environmentVariablesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws