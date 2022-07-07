/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InstanceGroup.h>
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

InstanceGroup::InstanceGroup() : 
    m_instanceType(TrainingInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_instanceGroupNameHasBeenSet(false)
{
}

InstanceGroup::InstanceGroup(JsonView jsonValue) : 
    m_instanceType(TrainingInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_instanceGroupNameHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceGroup& InstanceGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = TrainingInstanceTypeMapper::GetTrainingInstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");

    m_instanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceGroupName"))
  {
    m_instanceGroupName = jsonValue.GetString("InstanceGroupName");

    m_instanceGroupNameHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceGroup::Jsonize() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", TrainingInstanceTypeMapper::GetNameForTrainingInstanceType(m_instanceType));
  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_instanceGroupNameHasBeenSet)
  {
   payload.WithString("InstanceGroupName", m_instanceGroupName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
