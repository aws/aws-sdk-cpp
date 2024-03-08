/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/WorkflowConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

WorkflowConfiguration::WorkflowConfiguration() : 
    m_workflowArnHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_parallelGroupHasBeenSet(false),
    m_onFailure(OnWorkflowFailure::NOT_SET),
    m_onFailureHasBeenSet(false)
{
}

WorkflowConfiguration::WorkflowConfiguration(JsonView jsonValue) : 
    m_workflowArnHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_parallelGroupHasBeenSet(false),
    m_onFailure(OnWorkflowFailure::NOT_SET),
    m_onFailureHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowConfiguration& WorkflowConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workflowArn"))
  {
    m_workflowArn = jsonValue.GetString("workflowArn");

    m_workflowArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Utils::Array<JsonView> parametersJsonList = jsonValue.GetArray("parameters");
    for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
    {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parallelGroup"))
  {
    m_parallelGroup = jsonValue.GetString("parallelGroup");

    m_parallelGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("onFailure"))
  {
    m_onFailure = OnWorkflowFailureMapper::GetOnWorkflowFailureForName(jsonValue.GetString("onFailure"));

    m_onFailureHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_workflowArnHasBeenSet)
  {
   payload.WithString("workflowArn", m_workflowArn);

  }

  if(m_parametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parametersJsonList(m_parameters.size());
   for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
   {
     parametersJsonList[parametersIndex].AsObject(m_parameters[parametersIndex].Jsonize());
   }
   payload.WithArray("parameters", std::move(parametersJsonList));

  }

  if(m_parallelGroupHasBeenSet)
  {
   payload.WithString("parallelGroup", m_parallelGroup);

  }

  if(m_onFailureHasBeenSet)
  {
   payload.WithString("onFailure", OnWorkflowFailureMapper::GetNameForOnWorkflowFailure(m_onFailure));
  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
