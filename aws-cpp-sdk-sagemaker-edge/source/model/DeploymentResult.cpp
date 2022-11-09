/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-edge/model/DeploymentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SagemakerEdgeManager
{
namespace Model
{

DeploymentResult::DeploymentResult() : 
    m_deploymentNameHasBeenSet(false),
    m_deploymentStatusHasBeenSet(false),
    m_deploymentStatusMessageHasBeenSet(false),
    m_deploymentStartTimeHasBeenSet(false),
    m_deploymentEndTimeHasBeenSet(false),
    m_deploymentModelsHasBeenSet(false)
{
}

DeploymentResult::DeploymentResult(JsonView jsonValue) : 
    m_deploymentNameHasBeenSet(false),
    m_deploymentStatusHasBeenSet(false),
    m_deploymentStatusMessageHasBeenSet(false),
    m_deploymentStartTimeHasBeenSet(false),
    m_deploymentEndTimeHasBeenSet(false),
    m_deploymentModelsHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentResult& DeploymentResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeploymentName"))
  {
    m_deploymentName = jsonValue.GetString("DeploymentName");

    m_deploymentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentStatus"))
  {
    m_deploymentStatus = jsonValue.GetString("DeploymentStatus");

    m_deploymentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentStatusMessage"))
  {
    m_deploymentStatusMessage = jsonValue.GetString("DeploymentStatusMessage");

    m_deploymentStatusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentStartTime"))
  {
    m_deploymentStartTime = jsonValue.GetDouble("DeploymentStartTime");

    m_deploymentStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentEndTime"))
  {
    m_deploymentEndTime = jsonValue.GetDouble("DeploymentEndTime");

    m_deploymentEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentModels"))
  {
    Aws::Utils::Array<JsonView> deploymentModelsJsonList = jsonValue.GetArray("DeploymentModels");
    for(unsigned deploymentModelsIndex = 0; deploymentModelsIndex < deploymentModelsJsonList.GetLength(); ++deploymentModelsIndex)
    {
      m_deploymentModels.push_back(deploymentModelsJsonList[deploymentModelsIndex].AsObject());
    }
    m_deploymentModelsHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentResult::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentNameHasBeenSet)
  {
   payload.WithString("DeploymentName", m_deploymentName);

  }

  if(m_deploymentStatusHasBeenSet)
  {
   payload.WithString("DeploymentStatus", m_deploymentStatus);

  }

  if(m_deploymentStatusMessageHasBeenSet)
  {
   payload.WithString("DeploymentStatusMessage", m_deploymentStatusMessage);

  }

  if(m_deploymentStartTimeHasBeenSet)
  {
   payload.WithDouble("DeploymentStartTime", m_deploymentStartTime.SecondsWithMSPrecision());
  }

  if(m_deploymentEndTimeHasBeenSet)
  {
   payload.WithDouble("DeploymentEndTime", m_deploymentEndTime.SecondsWithMSPrecision());
  }

  if(m_deploymentModelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deploymentModelsJsonList(m_deploymentModels.size());
   for(unsigned deploymentModelsIndex = 0; deploymentModelsIndex < deploymentModelsJsonList.GetLength(); ++deploymentModelsIndex)
   {
     deploymentModelsJsonList[deploymentModelsIndex].AsObject(m_deploymentModels[deploymentModelsIndex].Jsonize());
   }
   payload.WithArray("DeploymentModels", std::move(deploymentModelsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
