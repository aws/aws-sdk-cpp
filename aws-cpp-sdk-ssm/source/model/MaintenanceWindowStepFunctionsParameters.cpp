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

#include <aws/ssm/model/MaintenanceWindowStepFunctionsParameters.h>
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

MaintenanceWindowStepFunctionsParameters::MaintenanceWindowStepFunctionsParameters() : 
    m_inputHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

MaintenanceWindowStepFunctionsParameters::MaintenanceWindowStepFunctionsParameters(const JsonValue& jsonValue) : 
    m_inputHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

MaintenanceWindowStepFunctionsParameters& MaintenanceWindowStepFunctionsParameters::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Input"))
  {
    m_input = jsonValue.GetString("Input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue MaintenanceWindowStepFunctionsParameters::Jsonize() const
{
  JsonValue payload;

  if(m_inputHasBeenSet)
  {
   payload.WithString("Input", m_input);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
