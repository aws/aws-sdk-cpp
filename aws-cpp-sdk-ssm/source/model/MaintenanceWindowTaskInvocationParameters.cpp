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

#include <aws/ssm/model/MaintenanceWindowTaskInvocationParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

MaintenanceWindowTaskInvocationParameters::MaintenanceWindowTaskInvocationParameters() : 
    m_runCommandHasBeenSet(false),
    m_automationHasBeenSet(false),
    m_stepFunctionsHasBeenSet(false),
    m_lambdaHasBeenSet(false)
{
}

MaintenanceWindowTaskInvocationParameters::MaintenanceWindowTaskInvocationParameters(const JsonValue& jsonValue) : 
    m_runCommandHasBeenSet(false),
    m_automationHasBeenSet(false),
    m_stepFunctionsHasBeenSet(false),
    m_lambdaHasBeenSet(false)
{
  *this = jsonValue;
}

MaintenanceWindowTaskInvocationParameters& MaintenanceWindowTaskInvocationParameters::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("RunCommand"))
  {
    m_runCommand = jsonValue.GetObject("RunCommand");

    m_runCommandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Automation"))
  {
    m_automation = jsonValue.GetObject("Automation");

    m_automationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepFunctions"))
  {
    m_stepFunctions = jsonValue.GetObject("StepFunctions");

    m_stepFunctionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lambda"))
  {
    m_lambda = jsonValue.GetObject("Lambda");

    m_lambdaHasBeenSet = true;
  }

  return *this;
}

JsonValue MaintenanceWindowTaskInvocationParameters::Jsonize() const
{
  JsonValue payload;

  if(m_runCommandHasBeenSet)
  {
   payload.WithObject("RunCommand", m_runCommand.Jsonize());

  }

  if(m_automationHasBeenSet)
  {
   payload.WithObject("Automation", m_automation.Jsonize());

  }

  if(m_stepFunctionsHasBeenSet)
  {
   payload.WithObject("StepFunctions", m_stepFunctions.Jsonize());

  }

  if(m_lambdaHasBeenSet)
  {
   payload.WithObject("Lambda", m_lambda.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
