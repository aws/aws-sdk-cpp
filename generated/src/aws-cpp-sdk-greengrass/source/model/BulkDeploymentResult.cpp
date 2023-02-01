/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/BulkDeploymentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

BulkDeploymentResult::BulkDeploymentResult() : 
    m_createdAtHasBeenSet(false),
    m_deploymentArnHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_deploymentStatusHasBeenSet(false),
    m_deploymentType(DeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_errorDetailsHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_groupArnHasBeenSet(false)
{
}

BulkDeploymentResult::BulkDeploymentResult(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_deploymentArnHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_deploymentStatusHasBeenSet(false),
    m_deploymentType(DeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_errorDetailsHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_groupArnHasBeenSet(false)
{
  *this = jsonValue;
}

BulkDeploymentResult& BulkDeploymentResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentArn"))
  {
    m_deploymentArn = jsonValue.GetString("DeploymentArn");

    m_deploymentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentId"))
  {
    m_deploymentId = jsonValue.GetString("DeploymentId");

    m_deploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentStatus"))
  {
    m_deploymentStatus = jsonValue.GetString("DeploymentStatus");

    m_deploymentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentType"))
  {
    m_deploymentType = DeploymentTypeMapper::GetDeploymentTypeForName(jsonValue.GetString("DeploymentType"));

    m_deploymentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorDetails"))
  {
    Aws::Utils::Array<JsonView> errorDetailsJsonList = jsonValue.GetArray("ErrorDetails");
    for(unsigned errorDetailsIndex = 0; errorDetailsIndex < errorDetailsJsonList.GetLength(); ++errorDetailsIndex)
    {
      m_errorDetails.push_back(errorDetailsJsonList[errorDetailsIndex].AsObject());
    }
    m_errorDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupArn"))
  {
    m_groupArn = jsonValue.GetString("GroupArn");

    m_groupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue BulkDeploymentResult::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt);

  }

  if(m_deploymentArnHasBeenSet)
  {
   payload.WithString("DeploymentArn", m_deploymentArn);

  }

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("DeploymentId", m_deploymentId);

  }

  if(m_deploymentStatusHasBeenSet)
  {
   payload.WithString("DeploymentStatus", m_deploymentStatus);

  }

  if(m_deploymentTypeHasBeenSet)
  {
   payload.WithString("DeploymentType", DeploymentTypeMapper::GetNameForDeploymentType(m_deploymentType));
  }

  if(m_errorDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorDetailsJsonList(m_errorDetails.size());
   for(unsigned errorDetailsIndex = 0; errorDetailsIndex < errorDetailsJsonList.GetLength(); ++errorDetailsIndex)
   {
     errorDetailsJsonList[errorDetailsIndex].AsObject(m_errorDetails[errorDetailsIndex].Jsonize());
   }
   payload.WithArray("ErrorDetails", std::move(errorDetailsJsonList));

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_groupArnHasBeenSet)
  {
   payload.WithString("GroupArn", m_groupArn);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
