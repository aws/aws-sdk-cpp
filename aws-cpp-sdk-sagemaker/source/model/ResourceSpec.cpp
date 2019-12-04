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

#include <aws/sagemaker/model/ResourceSpec.h>
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

ResourceSpec::ResourceSpec() : 
    m_environmentArnHasBeenSet(false),
    m_instanceType(AppInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false)
{
}

ResourceSpec::ResourceSpec(JsonView jsonValue) : 
    m_environmentArnHasBeenSet(false),
    m_instanceType(AppInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceSpec& ResourceSpec::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnvironmentArn"))
  {
    m_environmentArn = jsonValue.GetString("EnvironmentArn");

    m_environmentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = AppInstanceTypeMapper::GetAppInstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceSpec::Jsonize() const
{
  JsonValue payload;

  if(m_environmentArnHasBeenSet)
  {
   payload.WithString("EnvironmentArn", m_environmentArn);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", AppInstanceTypeMapper::GetNameForAppInstanceType(m_instanceType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
