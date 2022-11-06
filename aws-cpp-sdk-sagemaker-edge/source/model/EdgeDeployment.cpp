/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-edge/model/EdgeDeployment.h>
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

EdgeDeployment::EdgeDeployment() : 
    m_deploymentNameHasBeenSet(false),
    m_type(DeploymentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_failureHandlingPolicy(FailureHandlingPolicy::NOT_SET),
    m_failureHandlingPolicyHasBeenSet(false),
    m_definitionsHasBeenSet(false)
{
}

EdgeDeployment::EdgeDeployment(JsonView jsonValue) : 
    m_deploymentNameHasBeenSet(false),
    m_type(DeploymentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_failureHandlingPolicy(FailureHandlingPolicy::NOT_SET),
    m_failureHandlingPolicyHasBeenSet(false),
    m_definitionsHasBeenSet(false)
{
  *this = jsonValue;
}

EdgeDeployment& EdgeDeployment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeploymentName"))
  {
    m_deploymentName = jsonValue.GetString("DeploymentName");

    m_deploymentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = DeploymentTypeMapper::GetDeploymentTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureHandlingPolicy"))
  {
    m_failureHandlingPolicy = FailureHandlingPolicyMapper::GetFailureHandlingPolicyForName(jsonValue.GetString("FailureHandlingPolicy"));

    m_failureHandlingPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Definitions"))
  {
    Aws::Utils::Array<JsonView> definitionsJsonList = jsonValue.GetArray("Definitions");
    for(unsigned definitionsIndex = 0; definitionsIndex < definitionsJsonList.GetLength(); ++definitionsIndex)
    {
      m_definitions.push_back(definitionsJsonList[definitionsIndex].AsObject());
    }
    m_definitionsHasBeenSet = true;
  }

  return *this;
}

JsonValue EdgeDeployment::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentNameHasBeenSet)
  {
   payload.WithString("DeploymentName", m_deploymentName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DeploymentTypeMapper::GetNameForDeploymentType(m_type));
  }

  if(m_failureHandlingPolicyHasBeenSet)
  {
   payload.WithString("FailureHandlingPolicy", FailureHandlingPolicyMapper::GetNameForFailureHandlingPolicy(m_failureHandlingPolicy));
  }

  if(m_definitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> definitionsJsonList(m_definitions.size());
   for(unsigned definitionsIndex = 0; definitionsIndex < definitionsJsonList.GetLength(); ++definitionsIndex)
   {
     definitionsJsonList[definitionsIndex].AsObject(m_definitions[definitionsIndex].Jsonize());
   }
   payload.WithArray("Definitions", std::move(definitionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
