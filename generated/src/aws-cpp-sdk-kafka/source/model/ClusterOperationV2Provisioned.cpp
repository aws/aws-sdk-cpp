/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ClusterOperationV2Provisioned.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

ClusterOperationV2Provisioned::ClusterOperationV2Provisioned() : 
    m_operationStepsHasBeenSet(false),
    m_sourceClusterInfoHasBeenSet(false),
    m_targetClusterInfoHasBeenSet(false),
    m_vpcConnectionInfoHasBeenSet(false)
{
}

ClusterOperationV2Provisioned::ClusterOperationV2Provisioned(JsonView jsonValue) : 
    m_operationStepsHasBeenSet(false),
    m_sourceClusterInfoHasBeenSet(false),
    m_targetClusterInfoHasBeenSet(false),
    m_vpcConnectionInfoHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterOperationV2Provisioned& ClusterOperationV2Provisioned::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("operationSteps"))
  {
    Aws::Utils::Array<JsonView> operationStepsJsonList = jsonValue.GetArray("operationSteps");
    for(unsigned operationStepsIndex = 0; operationStepsIndex < operationStepsJsonList.GetLength(); ++operationStepsIndex)
    {
      m_operationSteps.push_back(operationStepsJsonList[operationStepsIndex].AsObject());
    }
    m_operationStepsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceClusterInfo"))
  {
    m_sourceClusterInfo = jsonValue.GetObject("sourceClusterInfo");

    m_sourceClusterInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetClusterInfo"))
  {
    m_targetClusterInfo = jsonValue.GetObject("targetClusterInfo");

    m_targetClusterInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcConnectionInfo"))
  {
    m_vpcConnectionInfo = jsonValue.GetObject("vpcConnectionInfo");

    m_vpcConnectionInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterOperationV2Provisioned::Jsonize() const
{
  JsonValue payload;

  if(m_operationStepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> operationStepsJsonList(m_operationSteps.size());
   for(unsigned operationStepsIndex = 0; operationStepsIndex < operationStepsJsonList.GetLength(); ++operationStepsIndex)
   {
     operationStepsJsonList[operationStepsIndex].AsObject(m_operationSteps[operationStepsIndex].Jsonize());
   }
   payload.WithArray("operationSteps", std::move(operationStepsJsonList));

  }

  if(m_sourceClusterInfoHasBeenSet)
  {
   payload.WithObject("sourceClusterInfo", m_sourceClusterInfo.Jsonize());

  }

  if(m_targetClusterInfoHasBeenSet)
  {
   payload.WithObject("targetClusterInfo", m_targetClusterInfo.Jsonize());

  }

  if(m_vpcConnectionInfoHasBeenSet)
  {
   payload.WithObject("vpcConnectionInfo", m_vpcConnectionInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
